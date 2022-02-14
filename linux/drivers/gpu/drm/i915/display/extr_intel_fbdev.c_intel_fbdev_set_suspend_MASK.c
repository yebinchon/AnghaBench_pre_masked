
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {struct fb_info* fbdev; } ;
struct intel_fbdev {TYPE_3__ helper; TYPE_1__* fb; int vma; } ;
struct fb_info {int screen_size; int screen_base; } ;
struct drm_i915_private {int fbdev_suspend_work; struct intel_fbdev* fbdev; } ;
struct drm_device {int dummy; } ;
struct TYPE_5__ {scalar_t__ stolen; } ;
struct TYPE_4__ {int base; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (int *) ;
 TYPE_2__* FUNC_6 (int *) ;
 int FUNC_7 (struct intel_fbdev*,int) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int *) ;
 struct drm_i915_private* FUNC_10 (struct drm_device*) ;

void FUNC_11(struct drm_device *VAR_1, int VAR_2, bool VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_10(VAR_1);
 struct intel_fbdev *VAR_5 = VAR_4->fbdev;
 struct fb_info *VAR_6;

 if (!VAR_5 || !VAR_5->vma)
  return;

 VAR_6 = VAR_5->helper.fbdev;

 if (VAR_3) {







  if (VAR_2 != VAR_0)
   FUNC_5(&VAR_4->fbdev_suspend_work);

  FUNC_1();
 } else {





  FUNC_0(VAR_2 != VAR_0);
  if (!FUNC_2()) {



   FUNC_9(&VAR_4->fbdev_suspend_work);
   return;
  }
 }





 if (VAR_2 == VAR_0 &&
     FUNC_6(&VAR_5->fb->base)->stolen)
  FUNC_8(VAR_6->screen_base, 0, VAR_6->screen_size);

 FUNC_4(&VAR_5->helper, VAR_2);
 FUNC_3();

 FUNC_7(VAR_5, VAR_2);
}
