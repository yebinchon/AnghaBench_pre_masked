
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * vm_page_t ;
typedef scalar_t__ vm_paddr_t ;
struct vm_phys_seg {scalar_t__ start; scalar_t__ end; int * first_page; } ;


 size_t FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 struct vm_phys_seg* VAR_1 ;

vm_page_t
FUNC_1(vm_paddr_t VAR_2)
{
 struct vm_phys_seg *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3 = &VAR_1[VAR_4];
  if (VAR_2 >= VAR_3->start && VAR_2 < VAR_3->end)
   return (&VAR_3->first_page[FUNC_0(VAR_2 - VAR_3->start)]);
 }
 return (((void*)0));
}
