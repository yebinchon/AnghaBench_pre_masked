
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_shmem_object {int pages_lock; } ;
struct drm_gem_object {int dummy; } ;


 int FUNC_0 (struct drm_gem_object*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 struct drm_gem_shmem_object* FUNC_4 (struct drm_gem_object*) ;
 int FUNC_5 (struct drm_gem_object*) ;

__attribute__((used)) static bool FUNC_6(struct drm_gem_object *VAR_0)
{
 struct drm_gem_shmem_object *VAR_1 = FUNC_4(VAR_0);

 if (!FUNC_1(&VAR_1->pages_lock))
  return 0;

 FUNC_3(FUNC_5(VAR_0));
 FUNC_0(VAR_0);

 FUNC_2(&VAR_1->pages_lock);
 return 1;
}
