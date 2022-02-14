
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ag71xx_ring {int desc_size; scalar_t__ curr; TYPE_2__* buf; scalar_t__ descs_dma; } ;
struct ag71xx {struct ag71xx_ring tx_ring; } ;
struct TYPE_4__ {int * skb; TYPE_1__* desc; } ;
struct TYPE_3__ {int ctrl; scalar_t__ next; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct ag71xx *VAR_2)
{
 struct ag71xx_ring *VAR_3 = &VAR_2->tx_ring;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3->buf[VAR_4].desc->next = (u32) FUNC_0((VAR_3->descs_dma +
   VAR_3->desc_size * ((VAR_4 + 1) % VAR_0)));

  VAR_3->buf[VAR_4].desc->ctrl = VAR_1;
  VAR_3->buf[VAR_4].skb = ((void*)0);
 }

 VAR_3->curr = 0;
}
