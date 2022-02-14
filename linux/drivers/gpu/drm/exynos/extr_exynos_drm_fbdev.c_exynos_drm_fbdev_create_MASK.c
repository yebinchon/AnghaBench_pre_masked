
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_drm_gem {int dummy; } ;
struct exynos_drm_fbdev {struct exynos_drm_gem* exynos_gem; } ;
struct drm_mode_fb_cmd2 {int width; unsigned long height; int* pitches; int pixel_format; int member_0; } ;
struct drm_fb_helper_surface_size {int surface_width; unsigned long surface_height; int surface_bpp; int surface_depth; } ;
struct drm_fb_helper {struct exynos_drm_gem* fb; struct drm_device* dev; } ;
struct drm_device {int dev; } ;


 int FUNC_0 (int ,char*,int,unsigned long,int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct exynos_drm_gem*) ;
 int FUNC_3 (struct exynos_drm_gem*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct exynos_drm_gem*) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (struct drm_fb_helper*,struct drm_fb_helper_surface_size*,struct exynos_drm_gem*) ;
 struct exynos_drm_gem* FUNC_8 (struct drm_device*,struct drm_mode_fb_cmd2*,struct exynos_drm_gem**,int) ;
 struct exynos_drm_gem* FUNC_9 (struct drm_device*,int ,unsigned long) ;
 int FUNC_10 (struct exynos_drm_gem*) ;
 scalar_t__ FUNC_11 (struct drm_device*) ;
 struct exynos_drm_fbdev* FUNC_12 (struct drm_fb_helper*) ;

__attribute__((used)) static int FUNC_13(struct drm_fb_helper *VAR_2,
        struct drm_fb_helper_surface_size *VAR_3)
{
 struct exynos_drm_fbdev *VAR_4 = FUNC_12(VAR_2);
 struct exynos_drm_gem *VAR_5;
 struct drm_device *VAR_6 = VAR_2->dev;
 struct drm_mode_fb_cmd2 VAR_7 = { 0 };
 unsigned long VAR_8;
 int VAR_9;

 FUNC_0(VAR_6->dev,
     "surface width(%d), height(%d) and bpp(%d\n",
     VAR_3->surface_width, VAR_3->surface_height,
     VAR_3->surface_bpp);

 VAR_7.width = VAR_3->surface_width;
 VAR_7.height = VAR_3->surface_height;
 VAR_7.pitches[0] = VAR_3->surface_width * (VAR_3->surface_bpp >> 3);
 VAR_7.pixel_format = FUNC_6(VAR_3->surface_bpp,
         VAR_3->surface_depth);

 VAR_8 = VAR_7.pitches[0] * VAR_7.height;

 VAR_5 = FUNC_9(VAR_6, VAR_0, VAR_8);





 if (FUNC_2(VAR_5) && FUNC_11(VAR_6)) {
  FUNC_4(VAR_6->dev, "contiguous FB allocation failed, falling back to non-contiguous\n");
  VAR_5 = FUNC_9(VAR_6, VAR_1,
         VAR_8);
 }

 if (FUNC_2(VAR_5))
  return FUNC_3(VAR_5);

 VAR_4->exynos_gem = VAR_5;

 VAR_2->fb =
  FUNC_8(VAR_6, &VAR_7, &VAR_5, 1);
 if (FUNC_2(VAR_2->fb)) {
  FUNC_1(VAR_6->dev, "failed to create drm framebuffer.\n");
  VAR_9 = FUNC_3(VAR_2->fb);
  goto err_destroy_gem;
 }

 VAR_9 = FUNC_7(VAR_2, VAR_3, VAR_5);
 if (VAR_9 < 0)
  goto err_destroy_framebuffer;

 return VAR_9;

err_destroy_framebuffer:
 FUNC_5(VAR_2->fb);
err_destroy_gem:
 FUNC_10(VAR_5);







 return VAR_9;
}
