
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sync_file {struct dma_fence* fence; } ;
struct dma_fence_array {int num_fences; struct dma_fence** fences; } ;
struct dma_fence {int dummy; } ;


 scalar_t__ FUNC_0 (struct dma_fence*) ;
 struct dma_fence_array* FUNC_1 (struct dma_fence*) ;

__attribute__((used)) static struct dma_fence **FUNC_2(struct sync_file *VAR_0,
         int *VAR_1)
{
 if (FUNC_0(VAR_0->fence)) {
  struct dma_fence_array *VAR_2 = FUNC_1(VAR_0->fence);

  *VAR_1 = VAR_2->num_fences;
  return VAR_2->fences;
 }

 *VAR_1 = 1;
 return &VAR_0->fence;
}
