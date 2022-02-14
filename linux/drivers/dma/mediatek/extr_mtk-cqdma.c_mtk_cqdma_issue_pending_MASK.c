
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lock; } ;
struct mtk_cqdma_vchan {TYPE_1__* pc; TYPE_2__ vc; } ;
struct dma_chan {int dummy; } ;
struct TYPE_3__ {int lock; } ;


 int FUNC_0 (struct mtk_cqdma_vchan*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct mtk_cqdma_vchan* FUNC_3 (struct dma_chan*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(struct dma_chan *VAR_0)
{
 struct mtk_cqdma_vchan *VAR_1 = FUNC_3(VAR_0);
 unsigned long VAR_2;
 unsigned long VAR_3;


 FUNC_1(&VAR_1->pc->lock, VAR_2);
 FUNC_1(&VAR_1->vc.lock, VAR_3);

 if (FUNC_4(&VAR_1->vc))
  FUNC_0(VAR_1);

 FUNC_2(&VAR_1->vc.lock, VAR_3);
 FUNC_2(&VAR_1->pc->lock, VAR_2);
}
