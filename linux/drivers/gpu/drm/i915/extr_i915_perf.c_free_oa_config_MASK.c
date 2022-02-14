
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_oa_config {struct i915_oa_config* mux_regs; struct i915_oa_config* b_counter_regs; struct i915_oa_config* flex_regs; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (struct i915_oa_config*) ;
 int FUNC_1 (struct i915_oa_config*) ;

__attribute__((used)) static void FUNC_2(struct drm_i915_private *VAR_0,
      struct i915_oa_config *VAR_1)
{
 if (!FUNC_0(VAR_1->flex_regs))
  FUNC_1(VAR_1->flex_regs);
 if (!FUNC_0(VAR_1->b_counter_regs))
  FUNC_1(VAR_1->b_counter_regs);
 if (!FUNC_0(VAR_1->mux_regs))
  FUNC_1(VAR_1->mux_regs);
 FUNC_1(VAR_1);
}
