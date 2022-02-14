
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_runtime_pm {int dummy; } ;
struct i915_power_domains {int* domain_use_count; int lock; int * async_put_domains; scalar_t__ async_put_wakeref; } ;
struct drm_i915_private {struct intel_runtime_pm runtime_pm; struct i915_power_domains power_domains; } ;
typedef scalar_t__ intel_wakeref_t ;
typedef enum intel_display_power_domain { ____Placeholder_intel_display_power_domain } intel_display_power_domain ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct drm_i915_private*,int) ;
 int FUNC_3 (scalar_t__*) ;
 scalar_t__ FUNC_4 (struct intel_runtime_pm*) ;
 int FUNC_5 (struct intel_runtime_pm*,scalar_t__) ;
 int FUNC_6 (struct intel_runtime_pm*,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct i915_power_domains*,int ) ;
 int FUNC_10 (struct i915_power_domains*) ;

void FUNC_11(struct drm_i915_private *VAR_0,
         enum intel_display_power_domain VAR_1,
         intel_wakeref_t VAR_2)
{
 struct i915_power_domains *VAR_3 = &VAR_0->power_domains;
 struct intel_runtime_pm *VAR_4 = &VAR_0->runtime_pm;
 intel_wakeref_t VAR_5 = FUNC_4(VAR_4);

 FUNC_7(&VAR_3->lock);

 if (VAR_3->domain_use_count[VAR_1] > 1) {
  FUNC_2(VAR_0, VAR_1);

  goto out_verify;
 }

 FUNC_1(VAR_3->domain_use_count[VAR_1] != 1);


 if (VAR_3->async_put_wakeref) {
  VAR_3->async_put_domains[1] |= FUNC_0(VAR_1);
 } else {
  VAR_3->async_put_domains[0] |= FUNC_0(VAR_1);
  FUNC_9(VAR_3,
          FUNC_3(&VAR_5));
 }

out_verify:
 FUNC_10(VAR_3);

 FUNC_8(&VAR_3->lock);

 if (VAR_5)
  FUNC_6(VAR_4, VAR_5);

 FUNC_5(VAR_4, VAR_2);
}
