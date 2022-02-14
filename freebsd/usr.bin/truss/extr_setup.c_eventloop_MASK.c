
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct trussinfo {int flags; TYPE_5__* curthread; int proclist; } ;
struct ptrace_lwpinfo {int pl_flags; int pl_lwpid; } ;
struct TYPE_8__ {scalar_t__ si_signo; int si_code; int si_status; int si_pid; } ;
typedef TYPE_1__ siginfo_t ;
typedef int pl ;
typedef int caddr_t ;
struct TYPE_10__ {int * abi; } ;
struct TYPE_9__ {int proc; } ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_7__* FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct trussinfo*) ;
 scalar_t__ VAR_15 ;
 int FUNC_4 (struct trussinfo*,TYPE_5__*,struct ptrace_lwpinfo*) ;
 int FUNC_5 (int,char*) ;
 scalar_t__ VAR_16 ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (struct trussinfo*,struct ptrace_lwpinfo*) ;
 int FUNC_8 (struct trussinfo*,int ) ;
 int FUNC_9 (struct trussinfo*,int ) ;
 int FUNC_10 (struct trussinfo*,int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (struct trussinfo*,int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ,int ,int) ;
 int FUNC_16 (struct trussinfo*,TYPE_1__*) ;
 int FUNC_17 (struct trussinfo*) ;
 int FUNC_18 (struct trussinfo*,TYPE_1__*,struct ptrace_lwpinfo*) ;
 int FUNC_19 (struct trussinfo*) ;
 int FUNC_20 (struct trussinfo*) ;
 int FUNC_21 (struct trussinfo*) ;
 int FUNC_22 (int ,int ,TYPE_1__*,int) ;

void
FUNC_23(struct trussinfo *VAR_17)
{
 struct ptrace_lwpinfo VAR_18;
 siginfo_t VAR_19;
 int VAR_20;

 while (!FUNC_0(&VAR_17->proclist)) {
  if (VAR_15) {
   FUNC_3(VAR_17);
   return;
  }

  if (FUNC_22(VAR_10, 0, &VAR_19, VAR_14 | VAR_13) == -1) {
   if (VAR_16 == VAR_1)
    continue;
   FUNC_5(1, "Unexpected error from waitid");
  }

  FUNC_2(VAR_19.si_signo == VAR_11);

  switch (VAR_19.si_code) {
  case 131:
  case 130:
  case 132:
   FUNC_8(VAR_17, VAR_19.si_pid);
   if ((VAR_17->flags & VAR_0) == 0) {
    if (VAR_19.si_code == 131)
     FUNC_21(VAR_17);
    FUNC_16(VAR_17, &VAR_19);
   }
   FUNC_11(VAR_17->curthread->proc);
   VAR_17->curthread = ((void*)0);
   break;
  case 128:
   if (FUNC_15(VAR_8, VAR_19.si_pid, (caddr_t)&VAR_18,
       sizeof(VAR_18)) == -1)
    FUNC_5(1, "ptrace(PT_LWPINFO)");

   if (VAR_18.pl_flags & VAR_4) {
    FUNC_13(VAR_17, VAR_19.si_pid, VAR_18.pl_lwpid);
    FUNC_2(FUNC_1(&VAR_17->proclist)->abi !=
        ((void*)0));
   } else if (VAR_18.pl_flags & VAR_3)
    FUNC_14(FUNC_9(VAR_17, VAR_19.si_pid),
        VAR_18.pl_lwpid);
   FUNC_10(VAR_17, VAR_19.si_pid, VAR_18.pl_lwpid);

   if (VAR_19.si_status == VAR_12 &&
       (VAR_18.pl_flags & (VAR_3|VAR_5|
       VAR_6|VAR_7)) != 0) {
    if (VAR_18.pl_flags & VAR_3) {
     if ((VAR_17->flags & VAR_0) == 0)
      FUNC_19(VAR_17);
    } else if (VAR_18.pl_flags & VAR_5) {
     if ((VAR_17->flags & VAR_0) == 0)
      FUNC_20(VAR_17);
     FUNC_12(VAR_17->curthread);
     VAR_17->curthread = ((void*)0);
    } else if (VAR_18.pl_flags & VAR_6)
     FUNC_4(VAR_17, VAR_17->curthread, &VAR_18);
    else if (VAR_18.pl_flags & VAR_7)
     FUNC_7(VAR_17, &VAR_18);
    VAR_20 = 0;
   } else if (VAR_18.pl_flags & VAR_4) {
    if ((VAR_17->flags & VAR_0) == 0)
     FUNC_17(VAR_17);
    VAR_20 = 0;
   } else {
    if ((VAR_17->flags & VAR_2) == 0)
     FUNC_18(VAR_17, &VAR_19, &VAR_18);
    VAR_20 = VAR_19.si_status;
   }
   FUNC_15(VAR_9, VAR_19.si_pid, (caddr_t)1,
       VAR_20);
   break;
  case 129:
   FUNC_6(1, "waitid reported CLD_STOPPED");
  case 133:
   break;
  }
 }
}
