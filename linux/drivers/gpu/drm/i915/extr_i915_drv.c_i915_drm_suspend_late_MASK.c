
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct intel_runtime_pm {int dummy; } ;
struct TYPE_4__ {int user_forcewake_count; } ;
struct TYPE_3__ {struct pci_dev* pdev; } ;
struct drm_i915_private {TYPE_2__ uncore; struct intel_runtime_pm runtime_pm; TYPE_1__ drm; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int VAR_0 ;
 int FUNC_4 (struct intel_runtime_pm*) ;
 int FUNC_5 (struct intel_runtime_pm*) ;
 int FUNC_6 (struct drm_i915_private*,int) ;
 int FUNC_7 (struct drm_i915_private*) ;
 int FUNC_8 (struct drm_i915_private*) ;
 int FUNC_9 (struct drm_i915_private*) ;
 int FUNC_10 (struct drm_i915_private*) ;
 int FUNC_11 (struct drm_i915_private*,int ) ;
 int FUNC_12 (struct intel_runtime_pm*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (struct pci_dev*) ;
 int FUNC_15 (struct pci_dev*,int ) ;
 struct drm_i915_private* FUNC_16 (struct drm_device*) ;
 int FUNC_17 (struct drm_i915_private*) ;

__attribute__((used)) static int FUNC_18(struct drm_device *VAR_1, bool VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_16(VAR_1);
 struct pci_dev *VAR_4 = VAR_3->drm.pdev;
 struct intel_runtime_pm *VAR_5 = &VAR_3->runtime_pm;
 int VAR_6 = 0;

 FUNC_4(VAR_5);

 FUNC_7(VAR_3);

 FUNC_8(VAR_3);

 FUNC_13(&VAR_3->uncore);

 FUNC_11(VAR_3,
        FUNC_6(VAR_3, VAR_2));

 FUNC_9(VAR_3);

 if (FUNC_3(VAR_3) || FUNC_2(VAR_3))
  VAR_6 = FUNC_17(VAR_3);

 if (VAR_6) {
  FUNC_0("Suspend complete failed: %d\n", VAR_6);
  FUNC_10(VAR_3);

  goto out;
 }

 FUNC_14(VAR_4);
 if (!(VAR_2 && FUNC_1(VAR_3) < 6))
  FUNC_15(VAR_4, VAR_0);

out:
 FUNC_5(VAR_5);
 if (!VAR_3->uncore.user_forcewake_count)
  FUNC_12(VAR_5);

 return VAR_6;
}
