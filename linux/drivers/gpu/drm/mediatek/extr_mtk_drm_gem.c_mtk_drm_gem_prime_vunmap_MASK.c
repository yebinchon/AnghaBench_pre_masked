
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_drm_gem_obj {scalar_t__ pages; scalar_t__ kvaddr; } ;
struct drm_gem_object {int dummy; } ;


 int FUNC_0 (void*) ;
 struct mtk_drm_gem_obj* FUNC_1 (struct drm_gem_object*) ;
 int FUNC_2 (void*) ;

void FUNC_3(struct drm_gem_object *VAR_0, void *VAR_1)
{
 struct mtk_drm_gem_obj *VAR_2 = FUNC_1(VAR_0);

 if (!VAR_2->pages)
  return;

 FUNC_2(VAR_1);
 VAR_2->kvaddr = 0;
 FUNC_0((void *)VAR_2->pages);
}
