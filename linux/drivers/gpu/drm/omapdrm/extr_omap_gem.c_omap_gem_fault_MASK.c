
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_fault_t ;
struct vm_fault {struct vm_area_struct* vma; } ;
struct vm_area_struct {struct drm_gem_object* vm_private_data; } ;
struct omap_gem_object {int flags; int lock; } ;
struct drm_gem_object {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_gem_object*) ;
 int FUNC_3 (struct drm_gem_object*,struct vm_area_struct*,struct vm_fault*) ;
 int FUNC_4 (struct drm_gem_object*,struct vm_area_struct*,struct vm_fault*) ;
 struct omap_gem_object* FUNC_5 (struct drm_gem_object*) ;
 int FUNC_6 (int) ;

vm_fault_t FUNC_7(struct vm_fault *VAR_1)
{
 struct vm_area_struct *VAR_2 = VAR_1->vma;
 struct drm_gem_object *VAR_3 = VAR_2->vm_private_data;
 struct omap_gem_object *VAR_4 = FUNC_5(VAR_3);
 int VAR_5;
 vm_fault_t VAR_6;




 FUNC_0(&VAR_4->lock);


 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5) {
  VAR_6 = FUNC_6(VAR_5);
  goto fail;
 }







 if (VAR_4->flags & VAR_0)
  VAR_6 = FUNC_4(VAR_3, VAR_2, VAR_1);
 else
  VAR_6 = FUNC_3(VAR_3, VAR_2, VAR_1);


fail:
 FUNC_1(&VAR_4->lock);
 return VAR_6;
}
