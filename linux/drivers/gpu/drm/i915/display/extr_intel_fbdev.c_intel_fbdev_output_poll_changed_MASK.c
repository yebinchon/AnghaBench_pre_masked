
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ deferred_setup; } ;
struct intel_fbdev {int hpd_waiting; TYPE_2__ helper; scalar_t__ vma; int hpd_lock; int hpd_suspended; } ;
struct drm_device {int dummy; } ;
struct TYPE_3__ {struct intel_fbdev* fbdev; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct intel_fbdev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (struct drm_device*) ;

void FUNC_5(struct drm_device *VAR_0)
{
 struct intel_fbdev *VAR_1 = FUNC_4(VAR_0)->fbdev;
 bool VAR_2;

 if (!VAR_1)
  return;

 FUNC_1(VAR_1);

 FUNC_2(&VAR_1->hpd_lock);
 VAR_2 = !VAR_1->hpd_suspended;
 VAR_1->hpd_waiting = 1;
 FUNC_3(&VAR_1->hpd_lock);

 if (VAR_2 && (VAR_1->vma || VAR_1->helper.deferred_setup))
  FUNC_0(&VAR_1->helper);
}
