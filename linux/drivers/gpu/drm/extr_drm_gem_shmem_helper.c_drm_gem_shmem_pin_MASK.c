
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_shmem_object {int dummy; } ;
struct drm_gem_object {int dummy; } ;


 int FUNC_0 (struct drm_gem_shmem_object*) ;
 struct drm_gem_shmem_object* FUNC_1 (struct drm_gem_object*) ;

int FUNC_2(struct drm_gem_object *VAR_0)
{
 struct drm_gem_shmem_object *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(VAR_1);
}
