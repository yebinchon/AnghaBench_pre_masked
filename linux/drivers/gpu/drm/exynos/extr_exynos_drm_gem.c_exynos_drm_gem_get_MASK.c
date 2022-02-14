
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_drm_gem {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;


 struct drm_gem_object* FUNC_0 (struct drm_file*,unsigned int) ;
 struct exynos_drm_gem* FUNC_1 (struct drm_gem_object*) ;

struct exynos_drm_gem *FUNC_2(struct drm_file *VAR_0,
       unsigned int VAR_1)
{
 struct drm_gem_object *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_2)
  return ((void*)0);
 return FUNC_1(VAR_2);
}
