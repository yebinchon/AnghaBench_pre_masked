
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int notifier_call; } ;
struct intel_opregion {TYPE_1__ acpi_notifier; scalar_t__ acpi; int header; } ;
struct drm_i915_private {struct intel_opregion opregion; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(struct drm_i915_private *VAR_1)
{
 struct intel_opregion *VAR_2 = &VAR_1->opregion;

 if (!VAR_2->header)
  return;

 if (VAR_2->acpi) {
  VAR_2->acpi_notifier.notifier_call =
   VAR_0;
  FUNC_1(&VAR_2->acpi_notifier);
 }

 FUNC_0(VAR_1);
}
