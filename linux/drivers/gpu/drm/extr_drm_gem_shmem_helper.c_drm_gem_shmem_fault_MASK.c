
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_fault_t ;
struct vm_fault {int pgoff; int address; struct vm_area_struct* vma; } ;
struct vm_area_struct {struct drm_gem_object* vm_private_data; } ;
struct page {int dummy; } ;
struct drm_gem_shmem_object {struct page** pages; } ;
struct drm_gem_object {int size; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct drm_gem_shmem_object* FUNC_1 (struct drm_gem_object*) ;
 int FUNC_2 (struct vm_area_struct*,int ,struct page*) ;

__attribute__((used)) static vm_fault_t FUNC_3(struct vm_fault *VAR_2)
{
 struct vm_area_struct *VAR_3 = VAR_2->vma;
 struct drm_gem_object *VAR_4 = VAR_3->vm_private_data;
 struct drm_gem_shmem_object *VAR_5 = FUNC_1(VAR_4);
 loff_t VAR_6 = VAR_4->size >> VAR_0;
 struct page *VAR_7;

 if (VAR_2->pgoff >= VAR_6 || FUNC_0(!VAR_5->pages))
  return VAR_1;

 VAR_7 = VAR_5->pages[VAR_2->pgoff];

 return FUNC_2(VAR_3, VAR_2->address, VAR_7);
}
