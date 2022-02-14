
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_fence_work {int cb; int chain; } ;
struct dma_fence {int dummy; } ;


 int FUNC_0 (int *,struct dma_fence*,int *) ;

int FUNC_1(struct dma_fence_work *VAR_0, struct dma_fence *VAR_1)
{
 if (!VAR_1)
  return 0;

 return FUNC_0(&VAR_0->chain, VAR_1, &VAR_0->cb);
}
