
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_table {int dummy; } ;
struct exynos_drm_gem {int size; int pages; } ;
struct drm_gem_object {int dummy; } ;


 int VAR_0 ;
 struct sg_table* FUNC_0 (int ,int) ;
 struct exynos_drm_gem* FUNC_1 (struct drm_gem_object*) ;

struct sg_table *FUNC_2(struct drm_gem_object *VAR_1)
{
 struct exynos_drm_gem *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 VAR_3 = VAR_2->size >> VAR_0;

 return FUNC_0(VAR_2->pages, VAR_3);
}
