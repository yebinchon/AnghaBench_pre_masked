
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_power_well {int count; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (struct drm_i915_private*,struct i915_power_well*) ;

__attribute__((used)) static void FUNC_1(struct drm_i915_private *VAR_0,
     struct i915_power_well *VAR_1)
{
 if (!VAR_1->count++)
  FUNC_0(VAR_0, VAR_1);
}
