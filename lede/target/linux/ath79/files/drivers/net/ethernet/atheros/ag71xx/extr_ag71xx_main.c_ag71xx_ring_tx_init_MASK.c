
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ag71xx_ring {scalar_t__ dirty; scalar_t__ curr; TYPE_1__* buf; scalar_t__ descs_dma; int order; } ;
struct ag71xx_desc {int ctrl; scalar_t__ next; } ;
struct ag71xx {int dev; struct ag71xx_ring tx_ring; } ;
struct TYPE_2__ {int * skb; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 struct ag71xx_desc* FUNC_1 (struct ag71xx_ring*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct ag71xx *VAR_2)
{
 struct ag71xx_ring *VAR_3 = &VAR_2->tx_ring;
 int VAR_4 = FUNC_0(VAR_3->order);
 int VAR_5 = VAR_4 - 1;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  struct ag71xx_desc *VAR_7 = FUNC_1(VAR_3, VAR_6);

  VAR_7->next = (u32) (VAR_3->descs_dma +
   VAR_0 * ((VAR_6 + 1) & VAR_5));

  VAR_7->ctrl = VAR_1;
  VAR_3->buf[VAR_6].skb = ((void*)0);
 }


 FUNC_3();

 VAR_3->curr = 0;
 VAR_3->dirty = 0;
 FUNC_2(VAR_2->dev);
}
