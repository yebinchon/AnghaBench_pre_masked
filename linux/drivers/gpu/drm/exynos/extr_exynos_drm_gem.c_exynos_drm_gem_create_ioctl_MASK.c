
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_drm_gem {int base; } ;
struct drm_file {int dummy; } ;
struct drm_exynos_gem_create {int handle; int size; int flags; } ;
struct drm_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct exynos_drm_gem*) ;
 int FUNC_1 (struct exynos_drm_gem*) ;
 struct exynos_drm_gem* FUNC_2 (struct drm_device*,int ,int ) ;
 int FUNC_3 (struct exynos_drm_gem*) ;
 int FUNC_4 (int *,struct drm_file*,int *) ;

int FUNC_5(struct drm_device *VAR_0, void *VAR_1,
    struct drm_file *VAR_2)
{
 struct drm_exynos_gem_create *VAR_3 = VAR_1;
 struct exynos_drm_gem *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_0, VAR_3->flags, VAR_3->size);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_5 = FUNC_4(&VAR_4->base, VAR_2,
        &VAR_3->handle);
 if (VAR_5) {
  FUNC_3(VAR_4);
  return VAR_5;
 }

 return 0;
}
