
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_fault_t ;
struct vm_fault {size_t address; struct vm_area_struct* vma; } ;
struct vm_area_struct {size_t vm_start; struct drm_gem_object* vm_private_data; } ;
struct page {int dummy; } ;
struct etnaviv_gem_object {int lock; } ;
struct drm_gem_object {int dummy; } ;
typedef size_t pgoff_t ;


 scalar_t__ FUNC_0 (struct page**) ;
 size_t VAR_0 ;
 int FUNC_1 (struct page**) ;
 int FUNC_2 (char*,void*,size_t,size_t) ;
 int VAR_1 ;
 struct page** FUNC_3 (struct etnaviv_gem_object*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 size_t FUNC_6 (struct page*) ;
 struct etnaviv_gem_object* FUNC_7 (struct drm_gem_object*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct vm_area_struct*,size_t,struct page*) ;

vm_fault_t FUNC_10(struct vm_fault *VAR_2)
{
 struct vm_area_struct *VAR_3 = VAR_2->vma;
 struct drm_gem_object *VAR_4 = VAR_3->vm_private_data;
 struct etnaviv_gem_object *VAR_5 = FUNC_7(VAR_4);
 struct page **VAR_6, *VAR_7;
 pgoff_t VAR_8;
 int VAR_9;






 VAR_9 = FUNC_4(&VAR_5->lock);
 if (VAR_9)
  return VAR_1;

 VAR_6 = FUNC_3(VAR_5);
 FUNC_5(&VAR_5->lock);

 if (FUNC_0(VAR_6)) {
  VAR_9 = FUNC_1(VAR_6);
  return FUNC_8(VAR_9);
 }


 VAR_8 = (VAR_2->address - VAR_3->vm_start) >> VAR_0;

 VAR_7 = VAR_6[VAR_8];

 FUNC_2("Inserting %p pfn %lx, pa %lx", (void *)VAR_2->address,
      FUNC_6(VAR_7), FUNC_6(VAR_7) << VAR_0);

 return FUNC_9(VAR_3, VAR_2->address, VAR_7);
}
