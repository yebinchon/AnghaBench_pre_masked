
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct dma_fence_array {unsigned int num_fences; TYPE_1__** fences; } ;
struct dma_fence {scalar_t__ context; } ;
struct TYPE_2__ {scalar_t__ context; } ;


 int FUNC_0 (struct dma_fence*) ;
 struct dma_fence_array* FUNC_1 (struct dma_fence*) ;

bool FUNC_2(struct dma_fence *VAR_0, u64 VAR_1)
{
 struct dma_fence_array *VAR_2 = FUNC_1(VAR_0);
 unsigned VAR_3;

 if (!FUNC_0(VAR_0))
  return VAR_0->context == VAR_1;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_fences; VAR_3++) {
  if (VAR_2->fences[VAR_3]->context != VAR_1)
   return 0;
 }

 return 1;
}
