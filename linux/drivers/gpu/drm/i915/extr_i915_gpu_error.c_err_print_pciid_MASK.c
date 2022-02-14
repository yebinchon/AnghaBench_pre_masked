
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int subsystem_device; int subsystem_vendor; int revision; int device; } ;
struct TYPE_2__ {struct pci_dev* pdev; } ;
struct drm_i915_private {TYPE_1__ drm; } ;
struct drm_i915_error_state_buf {int dummy; } ;


 int FUNC_0 (struct drm_i915_error_state_buf*,char*,int ,...) ;

__attribute__((used)) static void FUNC_1(struct drm_i915_error_state_buf *VAR_0,
       struct drm_i915_private *VAR_1)
{
 struct pci_dev *VAR_2 = VAR_1->drm.pdev;

 FUNC_0(VAR_0, "PCI ID: 0x%04x\n", VAR_2->device);
 FUNC_0(VAR_0, "PCI Revision: 0x%02x\n", VAR_2->revision);
 FUNC_0(VAR_0, "PCI Subsystem: %04x:%04x\n",
     VAR_2->subsystem_vendor,
     VAR_2->subsystem_device);
}
