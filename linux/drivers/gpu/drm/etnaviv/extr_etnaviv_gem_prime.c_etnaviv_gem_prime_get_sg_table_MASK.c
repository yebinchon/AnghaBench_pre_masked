
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_table {int dummy; } ;
struct etnaviv_gem_object {int pages; } ;
struct drm_gem_object {int size; } ;


 int VAR_0 ;
 struct sg_table* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 struct sg_table* FUNC_2 (int ,int) ;
 struct etnaviv_gem_object* FUNC_3 (struct drm_gem_object*) ;

struct sg_table *FUNC_4(struct drm_gem_object *VAR_2)
{
 struct etnaviv_gem_object *VAR_3 = FUNC_3(VAR_2);
 int VAR_4 = VAR_2->size >> VAR_1;

 if (FUNC_1(!VAR_3->pages))
  return FUNC_0(-VAR_0);

 return FUNC_2(VAR_3->pages, VAR_4);
}
