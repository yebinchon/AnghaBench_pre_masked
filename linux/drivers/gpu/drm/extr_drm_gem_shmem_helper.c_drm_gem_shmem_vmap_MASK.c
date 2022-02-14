
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_shmem_object {int vmap_lock; } ;
struct drm_gem_object {int dummy; } ;


 void* FUNC_0 (int) ;
 void* FUNC_1 (struct drm_gem_shmem_object*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct drm_gem_shmem_object* FUNC_4 (struct drm_gem_object*) ;

void *FUNC_5(struct drm_gem_object *VAR_0)
{
 struct drm_gem_shmem_object *VAR_1 = FUNC_4(VAR_0);
 void *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_2(&VAR_1->vmap_lock);
 if (VAR_3)
  return FUNC_0(VAR_3);
 VAR_2 = FUNC_1(VAR_1);
 FUNC_3(&VAR_1->vmap_lock);

 return VAR_2;
}
