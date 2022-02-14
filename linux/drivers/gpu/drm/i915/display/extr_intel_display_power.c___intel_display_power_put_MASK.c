
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_power_domains {int lock; } ;
struct drm_i915_private {struct i915_power_domains power_domains; } ;
typedef enum intel_display_power_domain { ____Placeholder_intel_display_power_domain } intel_display_power_domain ;


 int FUNC_0 (struct drm_i915_private*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct drm_i915_private *VAR_0,
          enum intel_display_power_domain VAR_1)
{
 struct i915_power_domains *VAR_2 = &VAR_0->power_domains;

 FUNC_1(&VAR_2->lock);
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_2->lock);
}
