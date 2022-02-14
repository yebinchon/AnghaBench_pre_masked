
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * mc_gpr; int mc_srr0; } ;
struct TYPE_4__ {TYPE_2__ uc_mcontext; int uc_sigmask; } ;
typedef TYPE_1__ ucontext_t ;
typedef int uc ;
struct thread {int dummy; } ;
struct sigreturn_args {int sigcntxp; } ;


 int FUNC_0 (int ,char*,struct thread*) ;
 int FUNC_1 (int ,char*,struct thread*,int ) ;
 int FUNC_2 (int ,char*,struct thread*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*,int) ;
 int FUNC_4 (struct thread*,int ,int *,int *,int ) ;
 int FUNC_5 (struct thread*,TYPE_2__*) ;

int
FUNC_6(struct thread *VAR_4, struct sigreturn_args *VAR_5)
{
 ucontext_t VAR_6;
 int VAR_7;

 FUNC_1(VAR_2, "sigreturn: td=%p ucp=%p", VAR_4, VAR_5->sigcntxp);

 if (FUNC_3(VAR_5->sigcntxp, &VAR_6, sizeof(VAR_6)) != 0) {
  FUNC_0(VAR_2, "sigreturn: efault td=%p", VAR_4);
  return (VAR_0);
 }

 VAR_7 = FUNC_5(VAR_4, &VAR_6.uc_mcontext);
 if (VAR_7 != 0)
  return (VAR_7);

 FUNC_4(VAR_4, VAR_3, &VAR_6.uc_sigmask, ((void*)0), 0);

 FUNC_2(VAR_2, "sigreturn: return td=%p pc=%#x sp=%#x",
      VAR_4, VAR_6.uc_mcontext.mc_srr0, VAR_6.uc_mcontext.mc_gpr[1]);

 return (VAR_1);
}
