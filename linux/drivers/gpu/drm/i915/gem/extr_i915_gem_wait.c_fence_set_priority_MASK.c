
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_sched_attr {int dummy; } ;
struct dma_fence_array {int num_fences; struct dma_fence** fences; } ;
struct dma_fence {int dummy; } ;


 int FUNC_0 (struct dma_fence*,struct i915_sched_attr const*) ;
 scalar_t__ FUNC_1 (struct dma_fence*) ;
 struct dma_fence_array* FUNC_2 (struct dma_fence*) ;

__attribute__((used)) static void FUNC_3(struct dma_fence *VAR_0,
          const struct i915_sched_attr *VAR_1)
{

 if (FUNC_1(VAR_0)) {
  struct dma_fence_array *VAR_2 = FUNC_2(VAR_0);
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_2->num_fences; VAR_3++)
   FUNC_0(VAR_2->fences[VAR_3], VAR_1);
 } else {
  FUNC_0(VAR_0, VAR_1);
 }
}
