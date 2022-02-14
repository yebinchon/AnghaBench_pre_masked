
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_drm_gem {int base; } ;
struct drm_mode_create_dumb {int pitch; int width; int bpp; int size; int height; int handle; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (struct exynos_drm_gem*) ;
 int FUNC_1 (struct exynos_drm_gem*) ;
 int FUNC_2 (int ,char*) ;
 struct exynos_drm_gem* FUNC_3 (struct drm_device*,unsigned int,int) ;
 int FUNC_4 (struct exynos_drm_gem*) ;
 int FUNC_5 (int *,struct drm_file*,int *) ;
 scalar_t__ FUNC_6 (struct drm_device*) ;

int FUNC_7(struct drm_file *VAR_3,
          struct drm_device *VAR_4,
          struct drm_mode_create_dumb *VAR_5)
{
 struct exynos_drm_gem *VAR_6;
 unsigned int VAR_7;
 int VAR_8;







 VAR_5->pitch = VAR_5->width * ((VAR_5->bpp + 7) / 8);
 VAR_5->size = VAR_5->pitch * VAR_5->height;

 if (FUNC_6(VAR_4))
  VAR_7 = VAR_1 | VAR_2;
 else
  VAR_7 = VAR_0 | VAR_2;

 VAR_6 = FUNC_3(VAR_4, VAR_7, VAR_5->size);
 if (FUNC_0(VAR_6)) {
  FUNC_2(VAR_4->dev, "FB allocation failed.\n");
  return FUNC_1(VAR_6);
 }

 VAR_8 = FUNC_5(&VAR_6->base, VAR_3,
        &VAR_5->handle);
 if (VAR_8) {
  FUNC_4(VAR_6);
  return VAR_8;
 }

 return 0;
}
