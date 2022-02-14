
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psb_intel_opregion {int * vbt; int * asle; int * swsci; TYPE_1__* acpi; int * header; int asle_work; } ;
struct drm_psb_private {struct psb_intel_opregion opregion; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;
struct TYPE_2__ {scalar_t__ drdy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_2 (int *) ;

void FUNC_3(struct drm_device *VAR_2)
{
 struct drm_psb_private *VAR_3 = VAR_2->dev_private;
 struct psb_intel_opregion *VAR_4 = &VAR_3->opregion;

 if (!VAR_4->header)
  return;

 if (VAR_4->acpi) {
  VAR_4->acpi->drdy = 0;

  VAR_1 = ((void*)0);
  FUNC_2(&VAR_0);
 }

 FUNC_0(&VAR_4->asle_work);


 FUNC_1(VAR_4->header);
 VAR_4->header = ((void*)0);
 VAR_4->acpi = ((void*)0);
 VAR_4->swsci = ((void*)0);
 VAR_4->asle = ((void*)0);
 VAR_4->vbt = ((void*)0);
}
