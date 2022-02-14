
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_gem_object {struct page** pages; } ;
struct page {int dummy; } ;
struct drm_gem_object {int dummy; } ;


 struct xen_gem_object* FUNC_0 (struct drm_gem_object*) ;

struct page **FUNC_1(struct drm_gem_object *VAR_0)
{
 struct xen_gem_object *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->pages;
}
