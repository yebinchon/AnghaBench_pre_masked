
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_gem_object {int dummy; } ;
struct vm_area_struct {int dummy; } ;
struct drm_gem_object {int size; } ;


 int FUNC_0 (struct drm_gem_object*,int ,struct vm_area_struct*) ;
 int FUNC_1 (struct xen_gem_object*,struct vm_area_struct*) ;
 struct xen_gem_object* FUNC_2 (struct drm_gem_object*) ;

int FUNC_3(struct drm_gem_object *VAR_0,
     struct vm_area_struct *VAR_1)
{
 struct xen_gem_object *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_0->size, VAR_1);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_2 = FUNC_2(VAR_0);
 return FUNC_1(VAR_2, VAR_1);
}
