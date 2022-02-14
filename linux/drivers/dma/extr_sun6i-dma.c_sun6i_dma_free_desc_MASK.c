
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* chan; } ;
struct virt_dma_desc {TYPE_2__ tx; } ;
struct sun6i_dma_lli {int p_lli_next; struct sun6i_dma_lli* v_lli_next; } ;
struct sun6i_dma_dev {int pool; } ;
struct sun6i_desc {struct sun6i_dma_lli* v_lli; int p_lli; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {int device; } ;


 int FUNC_0 (int ,struct sun6i_dma_lli*,int ) ;
 int FUNC_1 (struct sun6i_desc*) ;
 struct sun6i_desc* FUNC_2 (TYPE_2__*) ;
 struct sun6i_dma_dev* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct virt_dma_desc *VAR_0)
{
 struct sun6i_desc *VAR_1 = FUNC_2(&VAR_0->tx);
 struct sun6i_dma_dev *VAR_2 = FUNC_3(VAR_0->tx.chan->device);
 struct sun6i_dma_lli *VAR_3, *VAR_4;
 dma_addr_t VAR_5, VAR_6;

 if (FUNC_4(!VAR_1))
  return;

 VAR_5 = VAR_1->p_lli;
 VAR_3 = VAR_1->v_lli;

 while (VAR_3) {
  VAR_4 = VAR_3->v_lli_next;
  VAR_6 = VAR_3->p_lli_next;

  FUNC_0(VAR_2->pool, VAR_3, VAR_5);

  VAR_3 = VAR_4;
  VAR_5 = VAR_6;
 }

 FUNC_1(VAR_1);
}
