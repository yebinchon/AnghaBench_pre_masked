
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int _mc_tstate; int _mc_sp; int _mc_tpc; } ;
struct TYPE_5__ {int uc_sigmask; TYPE_2__ uc_mcontext; } ;
typedef TYPE_1__ ucontext_t ;
typedef int uc ;
struct thread {struct proc* td_proc; } ;
struct sigreturn_args {int sigcntxp; } ;
struct proc {int dummy; } ;
typedef TYPE_2__ mcontext_t ;


 int FUNC_0 (int ,char*,struct thread*) ;
 int FUNC_1 (int ,char*,struct thread*,int ) ;
 int FUNC_2 (int ,char*,struct thread*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct proc*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int ,TYPE_1__*,int) ;
 int FUNC_5 (struct thread*,int ,int *,int *,int ) ;
 scalar_t__ FUNC_6 (struct thread*) ;
 int FUNC_7 (struct thread*,TYPE_2__*) ;
 int FUNC_8 (struct thread*,int ) ;

int
FUNC_9(struct thread *VAR_5, struct sigreturn_args *VAR_6)
{
 struct proc *VAR_7;
 mcontext_t *VAR_8;
 ucontext_t VAR_9;
 int VAR_10;

 VAR_7 = VAR_5->td_proc;
 if (FUNC_6(VAR_5)) {
  FUNC_3(VAR_7);
  FUNC_8(VAR_5, VAR_3);
 }

 FUNC_1(VAR_2, "sigreturn: td=%p ucp=%p", VAR_5, VAR_6->sigcntxp);
 if (FUNC_4(VAR_6->sigcntxp, &VAR_9, sizeof(VAR_9)) != 0) {
  FUNC_0(VAR_2, "sigreturn: efault td=%p", VAR_5);
  return (VAR_0);
 }

 VAR_8 = &VAR_9.uc_mcontext;
 VAR_10 = FUNC_7(VAR_5, VAR_8);
 if (VAR_10 != 0)
  return (VAR_10);

 FUNC_5(VAR_5, VAR_4, &VAR_9.uc_sigmask, ((void*)0), 0);

 FUNC_2(VAR_2, "sigreturn: return td=%p pc=%#lx sp=%#lx tstate=%#lx",
     VAR_5, VAR_8->_mc_tpc, VAR_8->_mc_sp, VAR_8->_mc_tstate);
 return (VAR_1);
}
