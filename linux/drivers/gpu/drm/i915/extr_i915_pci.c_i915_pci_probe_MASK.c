
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_device_id {scalar_t__ driver_data; } ;
struct pci_dev {int devfn; int device; } ;
struct intel_device_info {scalar_t__ require_force_probe; } ;
struct TYPE_2__ {int force_probe; } ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct pci_dev*,struct pci_device_id const*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct pci_dev*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 scalar_t__ FUNC_8 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_9(struct pci_dev *VAR_4, const struct pci_device_id *VAR_5)
{
 struct intel_device_info *VAR_6 =
  (struct intel_device_info *) VAR_5->driver_data;
 int VAR_7;

 if (VAR_6->require_force_probe &&
     !FUNC_2(VAR_4->device, VAR_3.force_probe)) {
  FUNC_0("Your graphics device %04x is not properly supported by the driver in this\n"
    "kernel version. To force driver probe anyway, use i915.force_probe=%04x\n"
    "module parameter or CONFIG_DRM_I915_FORCE_PROBE=%04x configuration option,\n"
    "or (recommended) check for kernel updates.\n",
    VAR_4->device, VAR_4->device, VAR_4->device);
  return -VAR_0;
 }






 if (FUNC_1(VAR_4->devfn))
  return -VAR_0;





 if (FUNC_8(VAR_4))
  return -VAR_2;

 VAR_7 = FUNC_3(VAR_4, VAR_5);
 if (VAR_7)
  return VAR_7;

 if (FUNC_4(FUNC_7(VAR_4))) {
  FUNC_6(VAR_4);
  return -VAR_0;
 }

 VAR_7 = FUNC_5(VAR_4);
 if (VAR_7) {
  FUNC_6(VAR_4);
  return VAR_7 > 0 ? -VAR_1 : VAR_7;
 }

 return 0;
}
