
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_runtime_pm {int suspended; } ;
struct TYPE_3__ {scalar_t__ enabled; } ;
struct TYPE_4__ {TYPE_1__ rc6; } ;
struct drm_i915_private {int uncore; int gt; TYPE_2__ gt_pm; struct intel_runtime_pm runtime_pm; } ;
struct device {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct intel_runtime_pm*) ;
 int FUNC_10 (struct intel_runtime_pm*) ;
 int FUNC_11 (struct drm_i915_private*) ;
 int FUNC_12 (struct drm_i915_private*) ;
 int FUNC_13 (struct drm_i915_private*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct drm_i915_private*) ;
 int FUNC_17 (struct drm_i915_private*,int ) ;
 int FUNC_18 (struct drm_i915_private*) ;
 int FUNC_19 (struct intel_runtime_pm*) ;
 int FUNC_20 (struct drm_i915_private*) ;
 scalar_t__ FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 struct drm_i915_private* FUNC_24 (struct device*) ;
 int FUNC_25 (struct drm_i915_private*) ;

__attribute__((used)) static int FUNC_26(struct device *VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_24(VAR_3);
 struct intel_runtime_pm *VAR_5 = &VAR_4->runtime_pm;
 int VAR_6 = 0;

 if (FUNC_7(!(VAR_4->gt_pm.rc6.enabled && FUNC_2(VAR_4))))
  return -VAR_0;

 if (FUNC_7(!FUNC_3(VAR_4)))
  return -VAR_0;

 FUNC_0("Suspending device\n");

 FUNC_9(VAR_5);





 FUNC_12(VAR_4);

 FUNC_15(&VAR_4->gt);

 FUNC_18(VAR_4);

 FUNC_23(&VAR_4->uncore);

 FUNC_13(VAR_4);

 if (FUNC_6(VAR_4) || FUNC_5(VAR_4))
  VAR_6 = FUNC_25(VAR_4);

 if (VAR_6) {
  FUNC_1("Runtime suspend failed, disabling it (%d)\n", VAR_6);
  FUNC_22(&VAR_4->uncore);

  FUNC_20(VAR_4);

  FUNC_14(&VAR_4->gt);

  FUNC_11(VAR_4);

  FUNC_10(VAR_5);

  return VAR_6;
 }

 FUNC_10(VAR_5);
 FUNC_19(VAR_5);

 if (FUNC_21(&VAR_4->uncore))
  FUNC_1("Unclaimed access detected prior to suspending\n");

 VAR_5->suspended = 1;





 if (FUNC_4(VAR_4)) {






  FUNC_17(VAR_4, VAR_2);
 } else {







  FUNC_17(VAR_4, VAR_1);
 }

 FUNC_8(&VAR_4->uncore);

 if (!FUNC_6(VAR_4) && !FUNC_5(VAR_4))
  FUNC_16(VAR_4);

 FUNC_0("Device suspended\n");
 return 0;
}
