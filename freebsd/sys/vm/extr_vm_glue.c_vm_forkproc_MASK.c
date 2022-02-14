
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmspace {int vm_refcnt; scalar_t__ vm_shm; } ;
struct TYPE_2__ {struct domainset* dr_policy; } ;
struct thread {TYPE_1__ td_domain; struct proc* td_proc; } ;
struct proc {struct vmspace* p_vmspace; } ;
struct domainset {int ds_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (struct thread*,struct proc*,struct thread*,int) ;
 int FUNC_2 (struct proc*,struct proc*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct proc*) ;

int
FUNC_6(struct thread *VAR_2, struct proc *VAR_3, struct thread *VAR_4,
    struct vmspace *VAR_5, int VAR_6)
{
 struct proc *VAR_7 = VAR_2->td_proc;
 struct domainset *VAR_8;
 int VAR_9;

 if ((VAR_6 & VAR_1) == 0) {





  if ((VAR_6 & VAR_0) == 0) {
   if (VAR_7->p_vmspace->vm_refcnt > 1) {
    VAR_9 = FUNC_5(VAR_7);
    if (VAR_9)
     return (VAR_9);
   }
  }
  FUNC_1(VAR_2, VAR_3, VAR_4, VAR_6);
  return (0);
 }

 if (VAR_6 & VAR_0) {
  VAR_3->p_vmspace = VAR_7->p_vmspace;
  FUNC_0(&VAR_7->p_vmspace->vm_refcnt, 1);
 }
 VAR_8 = VAR_4->td_domain.dr_policy;
 while (FUNC_3(&VAR_8->ds_mask)) {
  FUNC_4(&VAR_8->ds_mask);
 }

 if ((VAR_6 & VAR_0) == 0) {
  VAR_3->p_vmspace = VAR_5;
  if (VAR_7->p_vmspace->vm_shm)
   FUNC_2(VAR_7, VAR_3);
 }





 FUNC_1(VAR_2, VAR_3, VAR_4, VAR_6);
 return (0);
}
