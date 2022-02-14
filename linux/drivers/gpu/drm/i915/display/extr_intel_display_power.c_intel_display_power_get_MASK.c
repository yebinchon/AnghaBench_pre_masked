
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_power_domains {int lock; } ;
struct drm_i915_private {int runtime_pm; struct i915_power_domains power_domains; } ;
typedef int intel_wakeref_t ;
typedef enum intel_display_power_domain { ____Placeholder_intel_display_power_domain } intel_display_power_domain ;


 int FUNC_0 (struct drm_i915_private*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

intel_wakeref_t FUNC_4(struct drm_i915_private *VAR_0,
     enum intel_display_power_domain VAR_1)
{
 struct i915_power_domains *VAR_2 = &VAR_0->power_domains;
 intel_wakeref_t VAR_3 = FUNC_1(&VAR_0->runtime_pm);

 FUNC_2(&VAR_2->lock);
 FUNC_0(VAR_0, VAR_1);
 FUNC_3(&VAR_2->lock);

 return VAR_3;
}
