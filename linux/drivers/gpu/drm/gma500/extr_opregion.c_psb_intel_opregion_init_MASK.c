
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psb_intel_opregion {TYPE_1__* acpi; int header; } ;
struct drm_psb_private {struct psb_intel_opregion opregion; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;
struct TYPE_2__ {int drdy; scalar_t__ csts; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct psb_intel_opregion* VAR_1 ;

void FUNC_1(struct drm_device *VAR_2)
{
 struct drm_psb_private *VAR_3 = VAR_2->dev_private;
 struct psb_intel_opregion *VAR_4 = &VAR_3->opregion;

 if (!VAR_4->header)
  return;

 if (VAR_4->acpi) {



  VAR_4->acpi->csts = 0;
  VAR_4->acpi->drdy = 1;

  VAR_1 = VAR_4;
  FUNC_0(&VAR_0);
 }
}
