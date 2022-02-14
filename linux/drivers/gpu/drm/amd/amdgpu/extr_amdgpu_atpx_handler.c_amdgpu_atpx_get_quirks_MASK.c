
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {scalar_t__ vendor; scalar_t__ device; scalar_t__ subsystem_vendor; scalar_t__ subsystem_device; } ;
struct amdgpu_px_quirk {scalar_t__ chip_device; scalar_t__ chip_vendor; scalar_t__ subsys_vendor; scalar_t__ subsys_device; int px_quirk_flags; } ;
struct TYPE_2__ {int quirks; } ;


 TYPE_1__ VAR_0 ;
 struct amdgpu_px_quirk* VAR_1 ;

__attribute__((used)) static void FUNC_0(struct pci_dev *VAR_2)
{
 const struct amdgpu_px_quirk *VAR_3 = VAR_1;


 while (VAR_3 && VAR_3->chip_device != 0) {
  if (VAR_2->vendor == VAR_3->chip_vendor &&
      VAR_2->device == VAR_3->chip_device &&
      VAR_2->subsystem_vendor == VAR_3->subsys_vendor &&
      VAR_2->subsystem_device == VAR_3->subsys_device) {
   VAR_0.quirks |= VAR_3->px_quirk_flags;
   break;
  }
  ++VAR_3;
 }
}
