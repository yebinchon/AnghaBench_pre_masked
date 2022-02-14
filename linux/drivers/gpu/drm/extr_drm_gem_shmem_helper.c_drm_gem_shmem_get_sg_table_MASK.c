
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_table {int dummy; } ;
struct drm_gem_shmem_object {int pages; } ;
struct drm_gem_object {int size; } ;


 int VAR_0 ;
 struct sg_table* FUNC_0 (int ,int) ;
 struct drm_gem_shmem_object* FUNC_1 (struct drm_gem_object*) ;

struct sg_table *FUNC_2(struct drm_gem_object *VAR_1)
{
 struct drm_gem_shmem_object *VAR_2 = FUNC_1(VAR_1);

 return FUNC_0(VAR_2->pages, VAR_1->size >> VAR_0);
}
