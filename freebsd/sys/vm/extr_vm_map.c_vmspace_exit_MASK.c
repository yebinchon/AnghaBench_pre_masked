
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmspace {int vm_refcnt; } ;
struct thread {struct proc* td_proc; } ;
struct proc {struct vmspace* p_vmspace; } ;


 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (struct thread*) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_0 ;
 struct vmspace VAR_1 ;
 int FUNC_6 (struct proc*) ;
 int FUNC_7 (struct vmspace*) ;
 int FUNC_8 (struct vmspace*) ;

void
FUNC_9(struct thread *VAR_2)
{
 int VAR_3;
 struct vmspace *VAR_4;
 struct proc *VAR_5;
 VAR_5 = VAR_2->td_proc;
 VAR_4 = VAR_5->p_vmspace;
 FUNC_2(&VAR_1, 1);
 VAR_3 = VAR_4->vm_refcnt;
 do {
  if (VAR_3 > 1 && VAR_5->p_vmspace != &VAR_1) {

   FUNC_0(VAR_5);
   VAR_5->p_vmspace = &VAR_1;
   FUNC_1(VAR_5);
   FUNC_4(VAR_2);
  }
 } while (!FUNC_3(&VAR_4->vm_refcnt, &VAR_3, VAR_3 - 1));
 if (VAR_3 == 1) {
  if (VAR_5->p_vmspace != VAR_4) {

   FUNC_0(VAR_5);
   VAR_5->p_vmspace = VAR_4;
   FUNC_1(VAR_5);
   FUNC_4(VAR_2);
  }
  FUNC_5(FUNC_8(VAR_4));

  FUNC_0(VAR_5);
  VAR_5->p_vmspace = &VAR_1;
  FUNC_1(VAR_5);
  FUNC_4(VAR_2);
  FUNC_7(VAR_4);
 }




}
