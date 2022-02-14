
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_sw_fence {int dummy; } ;
struct i915_sw_dma_fence_cb {int base; struct i915_sw_fence* fence; } ;
struct dma_fence {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dma_fence*,int *) ;
 int FUNC_1 (struct i915_sw_fence*) ;
 int FUNC_2 (struct dma_fence*,int *,int (*) (struct dma_fence*,int *)) ;
 scalar_t__ FUNC_3 (struct dma_fence*) ;
 int FUNC_4 (struct i915_sw_fence*) ;

int FUNC_5(struct i915_sw_fence *VAR_1,
        struct dma_fence *VAR_2,
        struct i915_sw_dma_fence_cb *VAR_3)
{
 int VAR_4;

 FUNC_1(VAR_1);

 if (FUNC_3(VAR_2))
  return 0;

 VAR_3->fence = VAR_1;
 FUNC_4(VAR_1);

 VAR_4 = FUNC_2(VAR_2, &VAR_3->base, FUNC_0);
 if (VAR_4 == 0) {
  VAR_4 = 1;
 } else {
  FUNC_0(VAR_2, &VAR_3->base);
  if (VAR_4 == -VAR_0)
   VAR_4 = 0;
 }

 return VAR_4;
}
