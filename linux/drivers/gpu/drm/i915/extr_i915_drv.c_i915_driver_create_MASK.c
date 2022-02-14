
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_device_id {scalar_t__ driver_data; } ;
struct pci_dev {int device; int dev; } ;
struct intel_device_info {scalar_t__ gen; int gen_mask; } ;
struct TYPE_3__ {struct pci_dev* pdev; struct drm_i915_private* dev_private; } ;
struct drm_i915_private {TYPE_1__ drm; } ;
struct TYPE_4__ {int device_id; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 struct drm_i915_private* FUNC_2 (int) ;
 int VAR_1 ;
 TYPE_2__* FUNC_3 (struct drm_i915_private*) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*,int *,int *) ;
 int FUNC_5 (struct drm_i915_private*) ;
 struct drm_i915_private* FUNC_6 (int,int ) ;
 int FUNC_7 (struct intel_device_info*,struct intel_device_info const*,int) ;
 struct intel_device_info* FUNC_8 (struct drm_i915_private*) ;
 int FUNC_9 (struct pci_dev*,struct drm_i915_private*) ;

__attribute__((used)) static struct drm_i915_private *
FUNC_10(struct pci_dev *VAR_3, const struct pci_device_id *VAR_4)
{
 const struct intel_device_info *VAR_5 =
  (struct intel_device_info *)VAR_4->driver_data;
 struct intel_device_info *VAR_6;
 struct drm_i915_private *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_6(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return FUNC_2(-VAR_0);

 VAR_8 = FUNC_4(&VAR_7->drm, &VAR_2, &VAR_3->dev);
 if (VAR_8) {
  FUNC_5(VAR_7);
  return FUNC_2(VAR_8);
 }

 VAR_7->drm.dev_private = VAR_7;

 VAR_7->drm.pdev = VAR_3;
 FUNC_9(VAR_3, VAR_7);


 VAR_6 = FUNC_8(VAR_7);
 FUNC_7(VAR_6, VAR_5, sizeof(*VAR_6));
 FUNC_3(VAR_7)->device_id = VAR_3->device;

 FUNC_1(VAR_6->gen > FUNC_0(VAR_6->gen_mask));

 return VAR_7;
}
