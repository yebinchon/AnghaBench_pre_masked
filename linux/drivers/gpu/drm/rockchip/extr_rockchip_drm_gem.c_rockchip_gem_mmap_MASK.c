
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct drm_gem_object* vm_private_data; scalar_t__ vm_pgoff; } ;
struct file {int dummy; } ;
struct drm_gem_object {int dummy; } ;


 int FUNC_0 (struct file*,struct vm_area_struct*) ;
 int FUNC_1 (struct drm_gem_object*,struct vm_area_struct*) ;

int FUNC_2(struct file *VAR_0, struct vm_area_struct *VAR_1)
{
 struct drm_gem_object *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3)
  return VAR_3;





 VAR_1->vm_pgoff = 0;

 VAR_2 = VAR_1->vm_private_data;

 return FUNC_1(VAR_2, VAR_1);
}
