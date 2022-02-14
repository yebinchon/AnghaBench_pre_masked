
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_power_domains {int wakeref; } ;
struct drm_i915_private {struct i915_power_domains power_domains; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_i915_private*,int ) ;
 int FUNC_2 (struct drm_i915_private*) ;

void FUNC_3(struct drm_i915_private *VAR_1)
{
 struct i915_power_domains *VAR_2 = &VAR_1->power_domains;

 FUNC_0(VAR_2->wakeref);
 VAR_2->wakeref =
  FUNC_1(VAR_1, VAR_0);

 FUNC_2(VAR_1);
}
