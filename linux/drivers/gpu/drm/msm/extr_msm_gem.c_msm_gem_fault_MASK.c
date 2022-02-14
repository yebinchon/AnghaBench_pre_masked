
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_fault_t ;
struct vm_fault {unsigned long address; struct vm_area_struct* vma; } ;
struct vm_area_struct {unsigned long vm_start; struct drm_gem_object* vm_private_data; } ;
struct page {int dummy; } ;
struct msm_gem_object {scalar_t__ madv; int lock; } ;
struct drm_gem_object {int dummy; } ;
typedef size_t pgoff_t ;


 scalar_t__ FUNC_0 (struct page**) ;
 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct page**) ;
 int FUNC_2 (char*,void*,unsigned long,unsigned long) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (unsigned long,int ) ;
 struct page** FUNC_5 (struct drm_gem_object*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 unsigned long FUNC_8 (struct page*) ;
 struct msm_gem_object* FUNC_9 (struct drm_gem_object*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct vm_area_struct*,unsigned long,int ) ;

vm_fault_t FUNC_12(struct vm_fault *VAR_5)
{
 struct vm_area_struct *VAR_6 = VAR_5->vma;
 struct drm_gem_object *VAR_7 = VAR_6->vm_private_data;
 struct msm_gem_object *VAR_8 = FUNC_9(VAR_7);
 struct page **VAR_9;
 unsigned long VAR_10;
 pgoff_t VAR_11;
 int VAR_12;
 vm_fault_t VAR_13;





 VAR_12 = FUNC_6(&VAR_8->lock);
 if (VAR_12) {
  VAR_13 = VAR_3;
  goto out;
 }

 if (FUNC_3(VAR_8->madv != VAR_0)) {
  FUNC_7(&VAR_8->lock);
  return VAR_4;
 }


 VAR_9 = FUNC_5(VAR_7);
 if (FUNC_0(VAR_9)) {
  VAR_13 = FUNC_10(FUNC_1(VAR_9));
  goto out_unlock;
 }


 VAR_11 = (VAR_5->address - VAR_6->vm_start) >> VAR_1;

 VAR_10 = FUNC_8(VAR_9[VAR_11]);

 FUNC_2("Inserting %p pfn %lx, pa %lx", (void *)VAR_5->address,
   VAR_10, VAR_10 << VAR_1);

 VAR_13 = FUNC_11(VAR_6, VAR_5->address, FUNC_4(VAR_10, VAR_2));
out_unlock:
 FUNC_7(&VAR_8->lock);
out:
 return VAR_13;
}
