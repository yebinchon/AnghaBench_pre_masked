
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_drm_gem {int base; } ;
struct drm_mode_fb_cmd2 {int dummy; } ;
struct drm_framebuffer {int ** obj; } ;
struct drm_device {int dev; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 struct drm_framebuffer* FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (struct drm_device*,struct exynos_drm_gem*) ;
 int FUNC_3 (struct drm_device*,struct drm_framebuffer*,int *) ;
 int FUNC_4 (struct drm_device*,struct drm_framebuffer*,struct drm_mode_fb_cmd2 const*) ;
 int VAR_2 ;
 int FUNC_5 (struct drm_framebuffer*) ;
 struct drm_framebuffer* FUNC_6 (int,int ) ;

struct drm_framebuffer *
FUNC_7(struct drm_device *VAR_3,
       const struct drm_mode_fb_cmd2 *VAR_4,
       struct exynos_drm_gem **VAR_5,
       int VAR_6)
{
 struct drm_framebuffer *VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_7 = FUNC_6(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return FUNC_1(-VAR_0);

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  VAR_9 = FUNC_2(VAR_3, VAR_5[VAR_8]);
  if (VAR_9 < 0)
   goto err;

  VAR_7->obj[VAR_8] = &VAR_5[VAR_8]->base;
 }

 FUNC_4(VAR_3, VAR_7, VAR_4);

 VAR_9 = FUNC_3(VAR_3, VAR_7, &VAR_2);
 if (VAR_9 < 0) {
  FUNC_0(VAR_3->dev,
         "failed to initialize framebuffer\n");
  goto err;
 }

 return VAR_7;

err:
 FUNC_5(VAR_7);
 return FUNC_1(VAR_9);
}
