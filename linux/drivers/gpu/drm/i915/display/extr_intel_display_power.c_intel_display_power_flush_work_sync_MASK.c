
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_power_domains {int async_put_wakeref; int async_put_work; } ;
struct drm_i915_private {struct i915_power_domains power_domains; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct i915_power_domains*) ;

__attribute__((used)) static void
FUNC_4(struct drm_i915_private *VAR_0)
{
 struct i915_power_domains *VAR_1 = &VAR_0->power_domains;

 FUNC_2(VAR_0);
 FUNC_1(&VAR_1->async_put_work);

 FUNC_3(VAR_1);

 FUNC_0(VAR_1->async_put_wakeref);
}
