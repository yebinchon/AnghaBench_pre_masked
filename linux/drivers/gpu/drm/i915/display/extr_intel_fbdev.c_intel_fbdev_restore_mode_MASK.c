
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_fbdev {int helper; int vma; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {struct intel_fbdev* fbdev; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct intel_fbdev*) ;
 int FUNC_2 (struct intel_fbdev*) ;
 TYPE_1__* FUNC_3 (struct drm_device*) ;

void FUNC_4(struct drm_device *VAR_0)
{
 struct intel_fbdev *VAR_1 = FUNC_3(VAR_0)->fbdev;

 if (!VAR_1)
  return;

 FUNC_2(VAR_1);
 if (!VAR_1->vma)
  return;

 if (FUNC_0(&VAR_1->helper) == 0)
  FUNC_1(VAR_1);
}
