
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_opregion {TYPE_1__* asle; TYPE_2__* acpi; int header; } ;
struct drm_i915_private {struct intel_opregion opregion; } ;
struct TYPE_4__ {int drdy; scalar_t__ csts; } ;
struct TYPE_3__ {int ardy; int tche; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*,int ) ;
 int FUNC_2 (struct drm_i915_private*) ;

void FUNC_3(struct drm_i915_private *VAR_3)
{
 struct intel_opregion *VAR_4 = &VAR_3->opregion;

 if (!VAR_4->header)
  return;

 if (VAR_4->acpi) {
  FUNC_0(VAR_3);
  FUNC_2(VAR_3);






  VAR_4->acpi->csts = 0;
  VAR_4->acpi->drdy = 1;
 }

 if (VAR_4->asle) {
  VAR_4->asle->tche = VAR_1;
  VAR_4->asle->ardy = VAR_0;
 }

 FUNC_1(VAR_3, VAR_2);
}
