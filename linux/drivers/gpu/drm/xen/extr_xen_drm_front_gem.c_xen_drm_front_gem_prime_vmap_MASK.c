
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_gem_object {int num_pages; int pages; } ;
struct drm_gem_object {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct xen_gem_object* FUNC_0 (struct drm_gem_object*) ;
 void* FUNC_1 (int ,int ,int ,int ) ;

void *FUNC_2(struct drm_gem_object *VAR_2)
{
 struct xen_gem_object *VAR_3 = FUNC_0(VAR_2);

 if (!VAR_3->pages)
  return ((void*)0);


 return FUNC_1(VAR_3->pages, VAR_3->num_pages,
      VAR_1, VAR_0);
}
