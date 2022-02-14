
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_fault_t ;
struct vm_fault {struct vm_area_struct* vma; } ;
struct vm_area_struct {struct drm_gem_object* vm_private_data; } ;
struct vc4_bo {scalar_t__ madv; int madv_lock; } ;
struct drm_gem_object {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct vc4_bo* FUNC_3 (struct drm_gem_object*) ;

vm_fault_t FUNC_4(struct vm_fault *VAR_2)
{
 struct vm_area_struct *VAR_3 = VAR_2->vma;
 struct drm_gem_object *VAR_4 = VAR_3->vm_private_data;
 struct vc4_bo *VAR_5 = FUNC_3(VAR_4);




 FUNC_1(&VAR_5->madv_lock);
 FUNC_0(VAR_5->madv != VAR_1);
 FUNC_2(&VAR_5->madv_lock);

 return VAR_0;
}
