
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_power_well {int dummy; } ;
struct i915_power_domains {int lock; } ;
struct drm_i915_private {struct i915_power_domains power_domains; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*,struct i915_power_well*) ;
 struct i915_power_well* FUNC_5 (struct drm_i915_private*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static void FUNC_9(struct drm_i915_private *VAR_1)
{
 struct i915_power_domains *VAR_2 = &VAR_1->power_domains;
 struct i915_power_well *VAR_3;

 FUNC_1(VAR_1);




 FUNC_0(VAR_1);


 FUNC_2(VAR_1);






 FUNC_6(&VAR_2->lock);
 VAR_3 = FUNC_5(VAR_1, VAR_0);
 FUNC_4(VAR_1, VAR_3);
 FUNC_7(&VAR_2->lock);

 FUNC_8(10, 30);


 FUNC_3(VAR_1);
}
