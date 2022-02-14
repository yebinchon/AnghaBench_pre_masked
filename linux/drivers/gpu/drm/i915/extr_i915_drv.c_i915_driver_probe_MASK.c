
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_device_id {scalar_t__ driver_data; } ;
struct pci_dev {int dummy; } ;
struct intel_device_info {int gen; } ;
struct TYPE_4__ {int driver_features; } ;
struct drm_i915_private {int runtime_pm; TYPE_2__ drm; } ;
struct TYPE_3__ {int nuclear_pageflip; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct drm_i915_private*) ;
 struct drm_i915_private* FUNC_5 (struct pci_dev*,struct pci_device_id const*) ;
 int FUNC_6 (struct drm_i915_private*) ;
 int FUNC_7 (struct drm_i915_private*) ;
 int FUNC_8 (struct drm_i915_private*) ;
 int FUNC_9 (struct drm_i915_private*) ;
 int FUNC_10 (struct drm_i915_private*) ;
 int FUNC_11 (struct drm_i915_private*) ;
 int FUNC_12 (struct drm_i915_private*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (struct drm_i915_private*) ;
 int FUNC_15 (struct drm_i915_private*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_16 (struct drm_i915_private*,char*,int) ;
 int FUNC_17 (struct drm_i915_private*) ;
 int FUNC_18 (struct drm_i915_private*) ;
 int FUNC_19 (struct pci_dev*) ;
 int FUNC_20 (struct pci_dev*) ;

int FUNC_21(struct pci_dev *VAR_2, const struct pci_device_id *VAR_3)
{
 const struct intel_device_info *VAR_4 =
  (struct intel_device_info *)VAR_3->driver_data;
 struct drm_i915_private *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_5(VAR_2, VAR_3);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);


 if (!VAR_1.nuclear_pageflip && VAR_4->gen < 5)
  VAR_5->drm.driver_features &= ~VAR_0;

 VAR_6 = FUNC_20(VAR_2);
 if (VAR_6)
  goto out_fini;

 VAR_6 = FUNC_7(VAR_5);
 if (VAR_6 < 0)
  goto out_pci_disable;

 FUNC_2(&VAR_5->runtime_pm);

 FUNC_4(VAR_5);

 VAR_6 = FUNC_11(VAR_5);
 if (VAR_6 < 0)
  goto out_runtime_pm_put;

 VAR_6 = FUNC_8(VAR_5);
 if (VAR_6 < 0)
  goto out_cleanup_mmio;

 VAR_6 = FUNC_13(&VAR_5->drm);
 if (VAR_6 < 0)
  goto out_cleanup_hw;

 FUNC_14(VAR_5);

 FUNC_3(&VAR_5->runtime_pm);

 FUNC_17(VAR_5);

 return 0;

out_cleanup_hw:
 FUNC_9(VAR_5);
 FUNC_15(VAR_5);


 FUNC_18(VAR_5);
out_cleanup_mmio:
 FUNC_12(VAR_5);
out_runtime_pm_put:
 FUNC_3(&VAR_5->runtime_pm);
 FUNC_10(VAR_5);
out_pci_disable:
 FUNC_19(VAR_2);
out_fini:
 FUNC_16(VAR_5, "Device initialization failed (%d)\n", VAR_6);
 FUNC_6(VAR_5);
 return VAR_6;
}
