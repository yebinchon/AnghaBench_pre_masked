
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_fault_t ;
struct vm_fault {int pgoff; struct page* page; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (void*) ;

__attribute__((used)) static vm_fault_t FUNC_2(struct vm_fault *VAR_2)
{
 struct page *VAR_3;

 VAR_3 = FUNC_1((void *)(VAR_2->pgoff << VAR_0));
 if (!VAR_3)
  return VAR_1;

 FUNC_0(VAR_3);
 VAR_2->page = VAR_3;

 return 0;
}
