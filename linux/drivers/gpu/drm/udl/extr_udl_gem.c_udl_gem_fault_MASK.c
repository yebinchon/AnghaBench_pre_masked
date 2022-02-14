
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_fault_t ;
struct vm_fault {unsigned int address; struct vm_area_struct* vma; } ;
struct vm_area_struct {unsigned int vm_start; int vm_private_data; } ;
struct udl_gem_object {struct page** pages; } ;
struct page {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 struct udl_gem_object* FUNC_0 (int ) ;
 int FUNC_1 (struct vm_area_struct*,unsigned int,struct page*) ;

vm_fault_t FUNC_2(struct vm_fault *VAR_2)
{
 struct vm_area_struct *VAR_3 = VAR_2->vma;
 struct udl_gem_object *VAR_4 = FUNC_0(VAR_3->vm_private_data);
 struct page *VAR_5;
 unsigned int VAR_6;

 VAR_6 = (VAR_2->address - VAR_3->vm_start) >> VAR_0;

 if (!VAR_4->pages)
  return VAR_1;

 VAR_5 = VAR_4->pages[VAR_6];
 return FUNC_1(VAR_3, VAR_2->address, VAR_5);
}
