
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_drm_gem {int kvaddr; } ;
struct exynos_drm_fbdev {struct exynos_drm_gem* exynos_gem; } ;
struct drm_framebuffer {scalar_t__ funcs; } ;
struct drm_fb_helper {struct drm_framebuffer* fb; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_fb_helper*) ;
 int FUNC_1 (struct drm_fb_helper*) ;
 int FUNC_2 (struct drm_framebuffer*) ;
 struct exynos_drm_fbdev* FUNC_3 (struct drm_fb_helper*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct drm_device *VAR_0,
          struct drm_fb_helper *VAR_1)
{
 struct exynos_drm_fbdev *VAR_2 = FUNC_3(VAR_1);
 struct exynos_drm_gem *VAR_3 = VAR_2->exynos_gem;
 struct drm_framebuffer *VAR_4;

 FUNC_4(VAR_3->kvaddr);


 if (VAR_1->fb && VAR_1->fb->funcs) {
  VAR_4 = VAR_1->fb;
  if (VAR_4)
   FUNC_2(VAR_4);
 }

 FUNC_1(VAR_1);

 FUNC_0(VAR_1);
}
