
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_fence_manager {int dummy; } ;
struct dma_fence_array {int num_fences; struct dma_fence** fences; } ;
struct dma_fence {int dummy; } ;


 int FUNC_0 (struct dma_fence*) ;
 scalar_t__ FUNC_1 (struct dma_fence*) ;
 int FUNC_2 (struct dma_fence*,int) ;
 struct dma_fence_array* FUNC_3 (struct dma_fence*) ;

int FUNC_4(struct vmw_fence_manager *VAR_0,
         struct dma_fence *VAR_1)
{
 struct dma_fence_array *VAR_2;
 int VAR_3 = 0;
 int VAR_4;


 if (FUNC_1(VAR_1))
  return 0;

 if (!FUNC_0(VAR_1))
  return FUNC_2(VAR_1, 1);
 VAR_2 = FUNC_3(VAR_1);
 for (VAR_4 = 0; VAR_4 < VAR_2->num_fences; VAR_4++) {
  struct dma_fence *VAR_5 = VAR_2->fences[VAR_4];

  VAR_3 = FUNC_2(VAR_5, 1);

  if (VAR_3 < 0)
   return VAR_3;
 }

 return 0;
}
