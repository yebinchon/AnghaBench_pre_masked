
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;
struct vc4_bo {scalar_t__ validated_shader; } ;
struct drm_gem_object {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct drm_gem_object*,struct vm_area_struct*) ;
 struct vc4_bo* FUNC_2 (struct drm_gem_object*) ;

int FUNC_3(struct drm_gem_object *VAR_2, struct vm_area_struct *VAR_3)
{
 struct vc4_bo *VAR_4 = FUNC_2(VAR_2);

 if (VAR_4->validated_shader && (VAR_3->vm_flags & VAR_1)) {
  FUNC_0("mmaping of shader BOs for writing not allowed.\n");
  return -VAR_0;
 }

 return FUNC_1(VAR_2, VAR_3);
}
