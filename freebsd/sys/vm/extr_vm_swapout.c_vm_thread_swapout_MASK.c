
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * vm_page_t ;
typedef int vm_object_t ;
struct thread {int td_kstack_pages; int td_kstack; int td_kstack_obj; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct thread*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ,int) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static void
FUNC_8(struct thread *VAR_1)
{
 vm_object_t VAR_2;
 vm_page_t VAR_3;
 int VAR_4, VAR_5;

 FUNC_2(VAR_1);
 VAR_5 = VAR_1->td_kstack_pages;
 VAR_2 = VAR_1->td_kstack_obj;
 FUNC_4(VAR_1->td_kstack, VAR_5);
 FUNC_0(VAR_2);
 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  VAR_3 = FUNC_6(VAR_2, VAR_4);
  if (VAR_3 == ((void*)0))
   FUNC_3("vm_thread_swapout: kstack already missing?");
  FUNC_5(VAR_3);
  FUNC_7(VAR_3, VAR_0);
 }
 FUNC_1(VAR_2);
}
