
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_runtime_pm {int suspended; int wakeref_count; } ;
struct drm_i915_private {int gt; int uncore; struct intel_runtime_pm runtime_pm; } ;
struct device {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int VAR_0 ;
 int FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct intel_runtime_pm*) ;
 int FUNC_9 (struct intel_runtime_pm*) ;
 int FUNC_10 (struct drm_i915_private*) ;
 int FUNC_11 (struct drm_i915_private*) ;
 int FUNC_12 (struct drm_i915_private*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct drm_i915_private*) ;
 int FUNC_15 (struct drm_i915_private*,int ) ;
 int FUNC_16 (struct drm_i915_private*) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int *) ;
 struct drm_i915_private* FUNC_19 (struct device*) ;
 int FUNC_20 (struct drm_i915_private*,int) ;

__attribute__((used)) static int FUNC_21(struct device *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_19(VAR_2);
 struct intel_runtime_pm *VAR_4 = &VAR_3->runtime_pm;
 int VAR_5 = 0;

 if (FUNC_6(!FUNC_3(VAR_3)))
  return -VAR_0;

 FUNC_1("Resuming device\n");

 FUNC_6(FUNC_7(&VAR_4->wakeref_count));
 FUNC_8(VAR_4);

 FUNC_15(VAR_3, VAR_1);
 VAR_4->suspended = 0;
 if (FUNC_18(&VAR_3->uncore))
  FUNC_0("Unclaimed access during suspend, bios?\n");

 FUNC_11(VAR_3);

 if (FUNC_5(VAR_3) || FUNC_4(VAR_3))
  VAR_5 = FUNC_20(VAR_3, 1);

 FUNC_17(&VAR_3->uncore);

 FUNC_16(VAR_3);





 FUNC_13(&VAR_3->gt);
 FUNC_10(VAR_3);






 if (!FUNC_5(VAR_3) && !FUNC_4(VAR_3))
  FUNC_14(VAR_3);

 FUNC_12(VAR_3);

 FUNC_9(VAR_4);

 if (VAR_5)
  FUNC_2("Runtime resume failed, disabling it (%d)\n", VAR_5);
 else
  FUNC_1("Device resumed\n");

 return VAR_5;
}
