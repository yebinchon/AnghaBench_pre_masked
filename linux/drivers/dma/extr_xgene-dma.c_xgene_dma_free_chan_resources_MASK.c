
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_dma_chan {int * desc_pool; int lock; int ld_completed; int ld_running; int ld_pending; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (struct xgene_dma_chan*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct xgene_dma_chan* FUNC_4 (struct dma_chan*) ;
 int FUNC_5 (struct xgene_dma_chan*) ;
 int FUNC_6 (struct xgene_dma_chan*,int *) ;

__attribute__((used)) static void FUNC_7(struct dma_chan *VAR_0)
{
 struct xgene_dma_chan *VAR_1 = FUNC_4(VAR_0);

 FUNC_0(VAR_1, "Free all resources\n");

 if (!VAR_1->desc_pool)
  return;


 FUNC_5(VAR_1);

 FUNC_2(&VAR_1->lock);


 FUNC_6(VAR_1, &VAR_1->ld_pending);
 FUNC_6(VAR_1, &VAR_1->ld_running);
 FUNC_6(VAR_1, &VAR_1->ld_completed);

 FUNC_3(&VAR_1->lock);


 FUNC_1(VAR_1->desc_pool);
 VAR_1->desc_pool = ((void*)0);
}
