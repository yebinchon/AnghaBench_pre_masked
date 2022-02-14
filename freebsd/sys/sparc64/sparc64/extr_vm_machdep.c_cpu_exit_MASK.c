
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {struct proc* td_proc; } ;
struct TYPE_2__ {int * md_utrap; int * md_sigtramp; } ;
struct proc {TYPE_1__ p_md; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct thread *VAR_0)
{
 struct proc *VAR_1;

 VAR_1 = VAR_0->td_proc;
 VAR_1->p_md.md_sigtramp = ((void*)0);
 if (VAR_1->p_md.md_utrap != ((void*)0)) {
  FUNC_0(VAR_1->p_md.md_utrap);
  VAR_1->p_md.md_utrap = ((void*)0);
 }
}
