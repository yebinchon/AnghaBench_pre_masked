
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_shmem_object {int vmap_lock; } ;
struct drm_gem_object {int dummy; } ;


 int FUNC_0 (struct drm_gem_shmem_object*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct drm_gem_shmem_object* FUNC_3 (struct drm_gem_object*) ;

void FUNC_4(struct drm_gem_object *VAR_0, void *VAR_1)
{
 struct drm_gem_shmem_object *VAR_2 = FUNC_3(VAR_0);

 FUNC_1(&VAR_2->vmap_lock);
 FUNC_0(VAR_2);
 FUNC_2(&VAR_2->vmap_lock);
}
