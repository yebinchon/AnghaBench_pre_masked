
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int td_siglist; int td_sigmask; struct proc* td_proc; } ;
struct proc {TYPE_1__* p_sigacts; int p_siglist; } ;
typedef int sigset_t ;
struct TYPE_2__ {int ps_mtx; int ps_sigignore; } ;


 int VAR_0 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int
FUNC_8(struct thread *VAR_1)
{
 struct proc *VAR_2;
 sigset_t VAR_3;

 if (VAR_1 == ((void*)0))
  return 0;

 VAR_2 = VAR_1->td_proc;
 FUNC_0(VAR_2);
 VAR_3 = VAR_2->p_siglist;
 FUNC_4(VAR_3, VAR_1->td_siglist);
 FUNC_3(VAR_3, VAR_1->td_sigmask);
 FUNC_6(&VAR_2->p_sigacts->ps_mtx);
 FUNC_3(VAR_3, VAR_2->p_sigacts->ps_sigignore);
 FUNC_7(&VAR_2->p_sigacts->ps_mtx);
 if (FUNC_2(VAR_1->td_siglist) && FUNC_5(VAR_3)) {
  FUNC_1(VAR_2);
                return VAR_0;
 }
 FUNC_1(VAR_2);
 return 0;
}
