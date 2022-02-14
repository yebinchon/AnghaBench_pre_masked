
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_opregion {TYPE_2__* acpi; int asle_work; TYPE_1__* asle; int header; } ;
struct drm_i915_private {struct intel_opregion opregion; } ;
typedef int pci_power_t ;
struct TYPE_4__ {scalar_t__ drdy; } ;
struct TYPE_3__ {int ardy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct drm_i915_private*,int ) ;

void FUNC_2(struct drm_i915_private *VAR_1, pci_power_t VAR_2)
{
 struct intel_opregion *VAR_3 = &VAR_1->opregion;

 if (!VAR_3->header)
  return;

 FUNC_1(VAR_1, VAR_2);

 if (VAR_3->asle)
  VAR_3->asle->ardy = VAR_0;

 FUNC_0(&VAR_1->opregion.asle_work);

 if (VAR_3->acpi)
  VAR_3->acpi->drdy = 0;
}
