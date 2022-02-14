
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct drm_gem_object* vm_private_data; } ;
struct drm_gem_object {int dummy; } ;


 int FUNC_0 (struct drm_gem_object*) ;

void FUNC_1(struct vm_area_struct *VAR_0)
{
 struct drm_gem_object *VAR_1 = VAR_0->vm_private_data;

 FUNC_0(VAR_1);
}
