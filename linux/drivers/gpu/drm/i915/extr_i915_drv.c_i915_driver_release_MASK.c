
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_runtime_pm {int dummy; } ;
struct drm_i915_private {struct intel_runtime_pm runtime_pm; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct intel_runtime_pm*) ;
 int FUNC_1 (struct intel_runtime_pm*) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (struct drm_i915_private*) ;
 int FUNC_7 (struct intel_runtime_pm*) ;
 int FUNC_8 (struct drm_i915_private*) ;
 struct drm_i915_private* FUNC_9 (struct drm_device*) ;

__attribute__((used)) static void FUNC_10(struct drm_device *VAR_0)
{
 struct drm_i915_private *VAR_1 = FUNC_9(VAR_0);
 struct intel_runtime_pm *VAR_2 = &VAR_1->runtime_pm;

 FUNC_0(VAR_2);

 FUNC_5(VAR_1);

 FUNC_6(VAR_1);


 FUNC_8(VAR_1);

 FUNC_4(VAR_1);

 FUNC_1(VAR_2);
 FUNC_7(VAR_2);

 FUNC_3(VAR_1);
 FUNC_2(VAR_1);
}
