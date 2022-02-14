
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_table {int dummy; } ;
struct msm_gem_object {int pages; } ;
struct drm_gem_object {int size; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct sg_table* FUNC_1 (int ,int) ;
 struct msm_gem_object* FUNC_2 (struct drm_gem_object*) ;

struct sg_table *FUNC_3(struct drm_gem_object *VAR_1)
{
 struct msm_gem_object *VAR_2 = FUNC_2(VAR_1);
 int VAR_3 = VAR_1->size >> VAR_0;

 if (FUNC_0(!VAR_2->pages))
  return ((void*)0);

 return FUNC_1(VAR_2->pages, VAR_3);
}
