
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {int gp_sstatus; } ;
struct TYPE_8__ {TYPE_1__ mc_gpregs; } ;
struct TYPE_7__ {int uc_sigmask; TYPE_3__ uc_mcontext; } ;
typedef TYPE_2__ ucontext_t ;
typedef int uc ;
struct thread {int dummy; } ;
struct sigreturn_args {int sigcntxp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,TYPE_2__*,int) ;
 int FUNC_1 (struct thread*,int ,int *,int *,int ) ;
 int FUNC_2 (struct thread*,TYPE_3__*) ;
 int FUNC_3 (struct thread*,TYPE_3__*) ;

int
FUNC_4(struct thread *VAR_5, struct sigreturn_args *VAR_6)
{
 uint64_t VAR_7;
 ucontext_t VAR_8;
 int VAR_9;

 if (VAR_6 == ((void*)0))
  return (VAR_0);
 if (FUNC_0(VAR_6->sigcntxp, &VAR_8, sizeof(VAR_8)))
  return (VAR_0);






 VAR_7 = VAR_8.uc_mcontext.mc_gpregs.gp_sstatus;
 if ((VAR_7 & VAR_4) != 0)
  return (VAR_1);

 VAR_9 = FUNC_3(VAR_5, &VAR_8.uc_mcontext);
 if (VAR_9 != 0)
  return (VAR_9);

 FUNC_2(VAR_5, &VAR_8.uc_mcontext);


 FUNC_1(VAR_5, VAR_3, &VAR_8.uc_sigmask, ((void*)0), 0);

 return (VAR_2);
}
