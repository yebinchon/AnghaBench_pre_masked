
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_power_domains {int async_put_wakeref; int async_put_work; } ;
struct drm_i915_private {int runtime_pm; struct i915_power_domains power_domains; } ;
typedef enum intel_display_power_domain { ____Placeholder_intel_display_power_domain } intel_display_power_domain ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct i915_power_domains*,int) ;
 int FUNC_2 (struct i915_power_domains*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct i915_power_domains*) ;

__attribute__((used)) static bool
FUNC_7(struct drm_i915_private *VAR_0,
           enum intel_display_power_domain VAR_1)
{
 struct i915_power_domains *VAR_2 = &VAR_0->power_domains;
 bool VAR_3 = 0;

 if (!(FUNC_2(VAR_2) & FUNC_0(VAR_1)))
  goto out_verify;

 FUNC_1(VAR_2, VAR_1);

 VAR_3 = 1;

 if (FUNC_2(VAR_2))
  goto out_verify;

 FUNC_3(&VAR_2->async_put_work);
 FUNC_5(&VAR_0->runtime_pm,
     FUNC_4(&VAR_2->async_put_wakeref));
out_verify:
 FUNC_6(VAR_2);

 return VAR_3;
}
