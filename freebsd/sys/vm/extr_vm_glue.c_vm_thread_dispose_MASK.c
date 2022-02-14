
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int vm_object_t ;
struct thread {int td_kstack_pages; scalar_t__ td_kstack; int td_kstack_obj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,void*) ;
 int FUNC_1 (int ,scalar_t__,int) ;

void
FUNC_2(struct thread *VAR_2)
{
 vm_object_t VAR_3;
 vm_offset_t VAR_4;
 int VAR_5;

 VAR_5 = VAR_2->td_kstack_pages;
 VAR_3 = VAR_2->td_kstack_obj;
 VAR_4 = VAR_2->td_kstack;
 VAR_2->td_kstack = 0;
 VAR_2->td_kstack_pages = 0;
 if (VAR_5 == VAR_1)
  FUNC_0(VAR_0, (void *)VAR_4);
 else
  FUNC_1(VAR_3, VAR_4, VAR_5);
}
