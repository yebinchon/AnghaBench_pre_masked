
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_fault_t ;
struct vm_fault {unsigned long address; struct page* page; struct vm_area_struct* vma; } ;
struct vm_area_struct {unsigned long vm_start; struct drm_local_map* vm_private_data; } ;
struct page {int dummy; } ;
struct drm_local_map {scalar_t__ handle; } ;


 int FUNC_0 (char*,unsigned long) ;
 int VAR_0 ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (void*) ;

__attribute__((used)) static vm_fault_t FUNC_3(struct vm_fault *VAR_1)
{
 struct vm_area_struct *VAR_2 = VAR_1->vma;
 struct drm_local_map *VAR_3 = VAR_2->vm_private_data;
 unsigned long VAR_4;
 unsigned long VAR_5;
 struct page *VAR_6;

 if (!VAR_3)
  return VAR_0;

 VAR_4 = VAR_1->address - VAR_2->vm_start;
 VAR_5 = (unsigned long)VAR_3->handle + VAR_4;
 VAR_6 = FUNC_2((void *)VAR_5);
 if (!VAR_6)
  return VAR_0;
 FUNC_1(VAR_6);
 VAR_1->page = VAR_6;

 FUNC_0("shm_fault 0x%lx\n", VAR_4);
 return 0;
}
