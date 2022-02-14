
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_gem_object {int dummy; } ;
struct vm_area_struct {struct drm_gem_object* vm_private_data; } ;
struct file {int dummy; } ;
struct drm_gem_object {int dummy; } ;


 int FUNC_0 (struct file*,struct vm_area_struct*) ;
 int FUNC_1 (struct xen_gem_object*,struct vm_area_struct*) ;
 struct xen_gem_object* FUNC_2 (struct drm_gem_object*) ;

int FUNC_3(struct file *VAR_0, struct vm_area_struct *VAR_1)
{
 struct xen_gem_object *VAR_2;
 struct drm_gem_object *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_3 = VAR_1->vm_private_data;
 VAR_2 = FUNC_2(VAR_3);
 return FUNC_1(VAR_2, VAR_1);
}
