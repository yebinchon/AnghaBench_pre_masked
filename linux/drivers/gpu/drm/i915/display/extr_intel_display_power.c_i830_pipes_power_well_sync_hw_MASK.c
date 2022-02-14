
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_power_well {scalar_t__ count; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (struct drm_i915_private*,struct i915_power_well*) ;
 int FUNC_1 (struct drm_i915_private*,struct i915_power_well*) ;

__attribute__((used)) static void FUNC_2(struct drm_i915_private *VAR_0,
       struct i915_power_well *VAR_1)
{
 if (VAR_1->count > 0)
  FUNC_1(VAR_0, VAR_1);
 else
  FUNC_0(VAR_0, VAR_1);
}
