
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_fault_t ;
struct vm_fault {size_t pgoff; int page; struct vm_area_struct* vma; } ;
struct vm_area_struct {struct udmabuf* vm_private_data; } ;
struct udmabuf {int * pages; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static vm_fault_t FUNC_1(struct vm_fault *VAR_0)
{
 struct vm_area_struct *VAR_1 = VAR_0->vma;
 struct udmabuf *VAR_2 = VAR_1->vm_private_data;

 VAR_0->page = VAR_2->pages[VAR_0->pgoff];
 FUNC_0(VAR_0->page);
 return 0;
}
