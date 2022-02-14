
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_fbdev {int preferred_bpp; int helper; int hpd_lock; } ;
struct drm_i915_private {int fbdev_suspend_work; struct intel_fbdev* fbdev; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct drm_device*,int *,int) ;
 int FUNC_4 (struct drm_device*,int *,int *) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int FUNC_6 (struct drm_device*,struct intel_fbdev*) ;
 int VAR_4 ;
 int FUNC_7 (struct intel_fbdev*) ;
 struct intel_fbdev* FUNC_8 (int,int ) ;
 int FUNC_9 (int *) ;
 struct drm_i915_private* FUNC_10 (struct drm_device*) ;

int FUNC_11(struct drm_device *VAR_5)
{
 struct drm_i915_private *VAR_6 = FUNC_10(VAR_5);
 struct intel_fbdev *VAR_7;
 int VAR_8;

 if (FUNC_2(!FUNC_0(VAR_6)))
  return -VAR_0;

 VAR_7 = FUNC_8(sizeof(struct intel_fbdev), VAR_2);
 if (VAR_7 == ((void*)0))
  return -VAR_1;

 FUNC_9(&VAR_7->hpd_lock);
 FUNC_4(VAR_5, &VAR_7->helper, &VAR_3);

 if (!FUNC_6(VAR_5, VAR_7))
  VAR_7->preferred_bpp = 32;

 VAR_8 = FUNC_3(VAR_5, &VAR_7->helper, 4);
 if (VAR_8) {
  FUNC_7(VAR_7);
  return VAR_8;
 }

 VAR_6->fbdev = VAR_7;
 FUNC_1(&VAR_6->fbdev_suspend_work, VAR_4);

 FUNC_5(&VAR_7->helper);

 return 0;
}
