
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_fbdev {int helper; } ;
struct drm_i915_private {int fbdev_suspend_work; struct intel_fbdev* fbdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct intel_fbdev*) ;

void FUNC_4(struct drm_i915_private *VAR_0)
{
 struct intel_fbdev *VAR_1 = VAR_0->fbdev;

 if (!VAR_1)
  return;

 FUNC_0(&VAR_0->fbdev_suspend_work);
 if (!FUNC_1())
  FUNC_3(VAR_1);

 FUNC_2(&VAR_1->helper);
}
