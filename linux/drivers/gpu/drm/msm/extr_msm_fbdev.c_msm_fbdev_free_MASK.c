
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_fbdev {scalar_t__ fb; } ;
struct msm_drm_private {struct drm_fb_helper* fbdev; } ;
struct drm_gem_object {int dummy; } ;
struct drm_fb_helper {int dummy; } ;
struct drm_device {struct msm_drm_private* dev_private; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct drm_fb_helper*) ;
 int FUNC_2 (struct drm_fb_helper*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct msm_fbdev*) ;
 struct drm_gem_object* FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (struct drm_gem_object*) ;
 struct msm_fbdev* FUNC_7 (struct drm_fb_helper*) ;

void FUNC_8(struct drm_device *VAR_0)
{
 struct msm_drm_private *VAR_1 = VAR_0->dev_private;
 struct drm_fb_helper *VAR_2 = VAR_1->fbdev;
 struct msm_fbdev *VAR_3;

 FUNC_0();

 FUNC_2(VAR_2);

 FUNC_1(VAR_2);

 VAR_3 = FUNC_7(VAR_1->fbdev);


 if (VAR_3->fb) {
  struct drm_gem_object *VAR_4 =
   FUNC_5(VAR_3->fb, 0);
  FUNC_6(VAR_4);
  FUNC_3(VAR_3->fb);
 }

 FUNC_4(VAR_3);

 VAR_1->fbdev = ((void*)0);
}
