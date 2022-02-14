
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {struct pci_dev* pdev; } ;
struct drm_i915_private {int runtime_pm; int gt; int uncore; TYPE_1__ drm; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (struct drm_i915_private*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (struct drm_i915_private*) ;
 int FUNC_10 (struct drm_i915_private*) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct pci_dev*,int ) ;
 struct drm_i915_private* FUNC_15 (struct drm_device*) ;
 int FUNC_16 (struct drm_i915_private*,int) ;

__attribute__((used)) static int FUNC_17(struct drm_device *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_15(VAR_2);
 struct pci_dev *VAR_4 = VAR_3->drm.pdev;
 int VAR_5;
 VAR_5 = FUNC_14(VAR_4, VAR_1);
 if (VAR_5) {
  FUNC_0("failed to set PCI D0 power state (%d)\n", VAR_5);
  return VAR_5;
 }
 if (FUNC_12(VAR_4))
  return -VAR_0;

 FUNC_13(VAR_4);

 FUNC_3(&VAR_3->runtime_pm);

 if (FUNC_2(VAR_3) || FUNC_1(VAR_3))
  VAR_5 = FUNC_16(VAR_3, 0);
 if (VAR_5)
  FUNC_0("Resume prepare failed: %d, continuing anyway\n",
     VAR_5);

 FUNC_11(&VAR_3->uncore);

 FUNC_7(&VAR_3->gt);

 FUNC_6(VAR_3);

 FUNC_10(VAR_3);

 FUNC_9(VAR_3);

 FUNC_5(VAR_3);

 FUNC_8(&VAR_3->gt, 1);

 FUNC_4(&VAR_3->runtime_pm);

 return VAR_5;
}
