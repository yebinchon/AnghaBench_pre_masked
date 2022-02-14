
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_sw_fence {int dummy; } ;
struct dma_fence {int dummy; } ;


 int VAR_0 ;
 struct i915_sw_fence* FUNC_0 (int) ;
 int VAR_1 ;
 struct i915_sw_fence* FUNC_1 () ;
 int FUNC_2 (struct i915_sw_fence*) ;
 int FUNC_3 (struct i915_sw_fence*,struct dma_fence*,unsigned long,int ) ;
 int FUNC_4 (struct i915_sw_fence*) ;

__attribute__((used)) static struct i915_sw_fence *
FUNC_5(struct dma_fence *VAR_2, unsigned long VAR_3)
{
 struct i915_sw_fence *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1();
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_3(VAR_4, VAR_2, VAR_3, VAR_1);
 FUNC_4(VAR_4);
 if (VAR_5 < 0) {
  FUNC_2(VAR_4);
  return FUNC_0(VAR_5);
 }

 return VAR_4;
}
