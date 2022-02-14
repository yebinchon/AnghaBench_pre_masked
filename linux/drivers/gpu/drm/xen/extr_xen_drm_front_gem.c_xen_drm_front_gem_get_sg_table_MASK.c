
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_gem_object {int num_pages; int pages; } ;
struct sg_table {int dummy; } ;
struct drm_gem_object {int dummy; } ;


 int VAR_0 ;
 struct sg_table* FUNC_0 (int ) ;
 struct sg_table* FUNC_1 (int ,int ) ;
 struct xen_gem_object* FUNC_2 (struct drm_gem_object*) ;

struct sg_table *FUNC_3(struct drm_gem_object *VAR_1)
{
 struct xen_gem_object *VAR_2 = FUNC_2(VAR_1);

 if (!VAR_2->pages)
  return FUNC_0(-VAR_0);

 return FUNC_1(VAR_2->pages, VAR_2->num_pages);
}
