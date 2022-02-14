
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_object {scalar_t__ import_attach; int handle_count; int dev; } ;
struct exynos_drm_gem {int sgt; struct drm_gem_object base; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct drm_gem_object*) ;
 int FUNC_2 (struct drm_gem_object*,int ) ;
 int FUNC_3 (struct exynos_drm_gem*) ;
 int FUNC_4 (struct exynos_drm_gem*) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct exynos_drm_gem *VAR_0)
{
 struct drm_gem_object *VAR_1 = &VAR_0->base;

 FUNC_0(FUNC_5(VAR_1->dev), "handle count = %d\n",
     VAR_1->handle_count);







 if (VAR_1->import_attach)
  FUNC_2(VAR_1, VAR_0->sgt);
 else
  FUNC_3(VAR_0);


 FUNC_1(VAR_1);

 FUNC_4(VAR_0);
}
