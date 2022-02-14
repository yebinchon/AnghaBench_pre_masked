
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hibmc_framebuffer {int fb; } ;
struct drm_fb_helper {int dummy; } ;
struct hibmc_fbdev {struct drm_fb_helper helper; struct hibmc_framebuffer* fb; } ;


 int FUNC_0 (struct drm_fb_helper*) ;
 int FUNC_1 (struct drm_fb_helper*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct hibmc_fbdev *VAR_0)
{
 struct hibmc_framebuffer *VAR_1 = VAR_0->fb;
 struct drm_fb_helper *VAR_2 = &VAR_0->helper;

 FUNC_1(VAR_2);

 FUNC_0(VAR_2);

 if (VAR_1)
  FUNC_2(&VAR_1->fb);
}
