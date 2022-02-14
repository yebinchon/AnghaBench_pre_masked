
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct drm_gem_object {int size; } ;


 int FUNC_0 (struct drm_gem_object*,int ,struct vm_area_struct*) ;
 int FUNC_1 (struct vm_area_struct*) ;

int FUNC_2(struct drm_gem_object *VAR_0, struct vm_area_struct *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_0->size, VAR_1);
 if (VAR_2)
  return VAR_2;

 FUNC_1(VAR_1);
 return 0;
}
