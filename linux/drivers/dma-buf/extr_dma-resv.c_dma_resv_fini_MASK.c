
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_resv_list {int dummy; } ;
struct dma_resv {int lock; int fence; int fence_excl; } ;
struct dma_fence {int dummy; } ;


 int FUNC_0 (struct dma_fence*) ;
 int FUNC_1 (struct dma_resv_list*) ;
 void* FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct dma_resv *VAR_0)
{
 struct dma_resv_list *VAR_1;
 struct dma_fence *VAR_2;





 VAR_2 = FUNC_2(VAR_0->fence_excl, 1);
 if (VAR_2)
  FUNC_0(VAR_2);

 VAR_1 = FUNC_2(VAR_0->fence, 1);
 FUNC_1(VAR_1);
 FUNC_3(&VAR_0->lock);
}
