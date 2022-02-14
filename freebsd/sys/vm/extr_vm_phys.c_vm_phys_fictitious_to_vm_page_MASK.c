
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef scalar_t__ vm_paddr_t ;
struct vm_phys_fictitious_seg {scalar_t__ start; TYPE_1__* first_page; scalar_t__ end; } ;
struct TYPE_3__ {int flags; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 struct vm_phys_fictitious_seg* FUNC_1 (int ,int *,struct vm_phys_fictitious_seg*) ;
 size_t FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

vm_page_t
FUNC_5(vm_paddr_t VAR_4)
{
 struct vm_phys_fictitious_seg VAR_5, *VAR_6;
 vm_page_t VAR_7;

 VAR_7 = ((void*)0);
 VAR_5.start = VAR_4;
 VAR_5.end = 0;

 FUNC_3(&VAR_2);
 VAR_6 = FUNC_1(VAR_1, &VAR_3, &VAR_5);
 FUNC_4(&VAR_2);
 if (VAR_6 == ((void*)0))
  return (((void*)0));

 VAR_7 = &VAR_6->first_page[FUNC_2(VAR_4 - VAR_6->start)];
 FUNC_0((VAR_7->flags & VAR_0) != 0, ("%p not fictitious", VAR_7));

 return (VAR_7);
}
