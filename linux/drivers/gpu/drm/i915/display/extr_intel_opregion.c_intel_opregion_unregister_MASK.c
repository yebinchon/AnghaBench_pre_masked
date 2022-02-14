
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * notifier_call; } ;
struct intel_opregion {int * lid_state; int * vbt; int * asle; int * swsci; int * acpi; int * header; int * vbt_firmware; int * rvda; TYPE_1__ acpi_notifier; } ;
struct drm_i915_private {struct intel_opregion opregion; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_private*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(struct drm_i915_private *VAR_1)
{
 struct intel_opregion *VAR_2 = &VAR_1->opregion;

 FUNC_0(VAR_1, VAR_0);

 if (!VAR_2->header)
  return;

 if (VAR_2->acpi_notifier.notifier_call) {
  FUNC_3(&VAR_2->acpi_notifier);
  VAR_2->acpi_notifier.notifier_call = ((void*)0);
 }


 FUNC_2(VAR_2->header);
 if (VAR_2->rvda) {
  FUNC_2(VAR_2->rvda);
  VAR_2->rvda = ((void*)0);
 }
 if (VAR_2->vbt_firmware) {
  FUNC_1(VAR_2->vbt_firmware);
  VAR_2->vbt_firmware = ((void*)0);
 }
 VAR_2->header = ((void*)0);
 VAR_2->acpi = ((void*)0);
 VAR_2->swsci = ((void*)0);
 VAR_2->asle = ((void*)0);
 VAR_2->vbt = ((void*)0);
 VAR_2->lid_state = ((void*)0);
}
