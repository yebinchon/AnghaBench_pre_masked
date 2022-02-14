
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_power_domains {int lock; int async_put_work; int async_put_wakeref; } ;
struct drm_i915_private {int runtime_pm; struct i915_power_domains power_domains; } ;
typedef scalar_t__ intel_wakeref_t ;


 int FUNC_0 (struct i915_power_domains*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct i915_power_domains*,int ) ;
 int FUNC_7 (struct i915_power_domains*) ;

void FUNC_8(struct drm_i915_private *VAR_0)
{
 struct i915_power_domains *VAR_1 = &VAR_0->power_domains;
 intel_wakeref_t VAR_2;

 FUNC_4(&VAR_1->lock);

 VAR_2 = FUNC_2(&VAR_1->async_put_wakeref);
 if (!VAR_2)
  goto out_verify;

 FUNC_6(VAR_1,
      FUNC_0(VAR_1));
 FUNC_1(&VAR_1->async_put_work);

out_verify:
 FUNC_7(VAR_1);

 FUNC_5(&VAR_1->lock);

 if (VAR_2)
  FUNC_3(&VAR_0->runtime_pm, VAR_2);
}
