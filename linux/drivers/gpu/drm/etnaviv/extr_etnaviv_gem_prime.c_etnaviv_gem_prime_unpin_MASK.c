
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etnaviv_gem_object {int lock; } ;
struct drm_gem_object {int import_attach; } ;


 int FUNC_0 (struct etnaviv_gem_object*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct etnaviv_gem_object* FUNC_3 (struct drm_gem_object*) ;

void FUNC_4(struct drm_gem_object *VAR_0)
{
 if (!VAR_0->import_attach) {
  struct etnaviv_gem_object *VAR_1 = FUNC_3(VAR_0);

  FUNC_1(&VAR_1->lock);
  FUNC_0(FUNC_3(VAR_0));
  FUNC_2(&VAR_1->lock);
 }
}
