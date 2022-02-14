
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gem_object {int vmap_count; int lock; } ;
struct drm_gem_object {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct msm_gem_object* FUNC_3 (struct drm_gem_object*) ;

void FUNC_4(struct drm_gem_object *VAR_0)
{
 struct msm_gem_object *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(&VAR_1->lock);
 FUNC_0(VAR_1->vmap_count < 1);
 VAR_1->vmap_count--;
 FUNC_2(&VAR_1->lock);
}
