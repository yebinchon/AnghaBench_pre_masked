
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_gem_object {scalar_t__ pages; } ;
struct drm_gem_object {int dummy; } ;


 struct rockchip_gem_object* FUNC_0 (struct drm_gem_object*) ;
 int FUNC_1 (void*) ;

void FUNC_2(struct drm_gem_object *VAR_0, void *VAR_1)
{
 struct rockchip_gem_object *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2->pages) {
  FUNC_1(VAR_1);
  return;
 }


}
