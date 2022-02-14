
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int runtime_pm; } ;
typedef enum intel_display_power_domain { ____Placeholder_intel_display_power_domain } intel_display_power_domain ;


 int FUNC_0 (struct drm_i915_private*,int) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct drm_i915_private *VAR_0,
           enum intel_display_power_domain VAR_1)
{
 FUNC_0(VAR_0, VAR_1);
 FUNC_1(&VAR_0->runtime_pm);
}
