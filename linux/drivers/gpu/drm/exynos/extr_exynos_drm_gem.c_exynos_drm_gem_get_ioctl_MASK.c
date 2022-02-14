
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_drm_gem {int size; int flags; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_exynos_gem_info {int size; int flags; int handle; } ;
struct drm_device {int dev; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 struct drm_gem_object* FUNC_1 (struct drm_file*,int ) ;
 int FUNC_2 (struct drm_gem_object*) ;
 struct exynos_drm_gem* FUNC_3 (struct drm_gem_object*) ;

int FUNC_4(struct drm_device *VAR_1, void *VAR_2,
          struct drm_file *VAR_3)
{
 struct exynos_drm_gem *VAR_4;
 struct drm_exynos_gem_info *VAR_5 = VAR_2;
 struct drm_gem_object *VAR_6;

 VAR_6 = FUNC_1(VAR_3, VAR_5->handle);
 if (!VAR_6) {
  FUNC_0(VAR_1->dev, "failed to lookup gem object.\n");
  return -VAR_0;
 }

 VAR_4 = FUNC_3(VAR_6);

 VAR_5->flags = VAR_4->flags;
 VAR_5->size = VAR_4->size;

 FUNC_2(VAR_6);

 return 0;
}
