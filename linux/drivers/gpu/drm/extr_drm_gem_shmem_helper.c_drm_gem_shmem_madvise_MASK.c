
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_shmem_object {int madv; int pages_lock; } ;
struct drm_gem_object {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct drm_gem_shmem_object* FUNC_2 (struct drm_gem_object*) ;

int FUNC_3(struct drm_gem_object *VAR_0, int VAR_1)
{
 struct drm_gem_shmem_object *VAR_2 = FUNC_2(VAR_0);

 FUNC_0(&VAR_2->pages_lock);

 if (VAR_2->madv >= 0)
  VAR_2->madv = VAR_1;

 VAR_1 = VAR_2->madv;

 FUNC_1(&VAR_2->pages_lock);

 return (VAR_1 >= 0);
}
