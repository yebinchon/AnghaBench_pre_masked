
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_power_domains {int lock; } ;
struct drm_i915_private {int runtime_pm; struct i915_power_domains power_domains; } ;
typedef int intel_wakeref_t ;
typedef enum intel_display_power_domain { ____Placeholder_intel_display_power_domain } intel_display_power_domain ;


 int FUNC_0 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

intel_wakeref_t
FUNC_6(struct drm_i915_private *VAR_0,
       enum intel_display_power_domain VAR_1)
{
 struct i915_power_domains *VAR_2 = &VAR_0->power_domains;
 intel_wakeref_t VAR_3;
 bool VAR_4;

 VAR_3 = FUNC_2(&VAR_0->runtime_pm);
 if (!VAR_3)
  return 0;

 FUNC_4(&VAR_2->lock);

 if (FUNC_1(VAR_0, VAR_1)) {
  FUNC_0(VAR_0, VAR_1);
  VAR_4 = 1;
 } else {
  VAR_4 = 0;
 }

 FUNC_5(&VAR_2->lock);

 if (!VAR_4) {
  FUNC_3(&VAR_0->runtime_pm, VAR_3);
  VAR_3 = 0;
 }

 return VAR_3;
}
