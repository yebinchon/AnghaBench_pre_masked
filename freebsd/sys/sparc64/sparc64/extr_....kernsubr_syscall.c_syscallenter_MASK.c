
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct syscall_args {int code; TYPE_2__* callp; int * args; int narg; } ;
struct thread {scalar_t__ td_cowgen; int td_dbgflags; int td_errno; int td_pflags; int* td_retval; struct proc* td_proc; scalar_t__ td_pticks; struct syscall_args td_sa; } ;
struct proc {scalar_t__ p_cowgen; int p_flag; int p_ptevents; TYPE_1__* p_sysent; int p_pid; } ;
struct TYPE_5__ {int sy_flags; scalar_t__ sy_entry; int (* sy_call ) (struct thread*,int *) ;scalar_t__ sy_return; } ;
struct TYPE_4__ {int (* sv_fetch_syscall_args ) (struct thread*) ;int (* sv_set_syscall_retval ) (struct thread*,int) ;} ;


 int FUNC_0 (int ,struct thread*) ;
 int FUNC_1 (int,struct thread*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct thread*) ;
 scalar_t__ FUNC_3 (struct thread*,int ) ;
 int FUNC_4 (int ,char*,int ,uintptr_t,char*,int ,char*,int ,char*,int ,char*,int ) ;
 int FUNC_5 (int ,char*,int ,uintptr_t,char*,int ,char*,int,char*,int,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (struct proc*) ;
 int FUNC_7 (struct proc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (struct proc*,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int ,int ,int *) ;
 int FUNC_12 (struct thread*,int ,int *) ;
 int FUNC_13 (struct thread*) ;
 int FUNC_14 (struct thread*) ;
 int FUNC_15 (struct syscall_args*,int ,int) ;
 int FUNC_16 (struct thread*,int *) ;
 int FUNC_17 (struct syscall_args*,int ,int) ;
 int FUNC_18 (struct thread*,int) ;
 int FUNC_19 (struct thread*,TYPE_2__*) ;
 int FUNC_20 (struct thread*,TYPE_2__*) ;
 int FUNC_21 (struct proc*,int ) ;
 scalar_t__ VAR_13 ;
 int FUNC_22 (struct syscall_args*,int ,int) ;
 int FUNC_23 (struct thread*) ;
 int VAR_14 ;

__attribute__((used)) static inline void
FUNC_24(struct thread *VAR_15)
{
 struct proc *VAR_16;
 struct syscall_args *VAR_17;
 int VAR_18, VAR_19;

 FUNC_9(VAR_14);
 VAR_16 = VAR_15->td_proc;
 VAR_17 = &VAR_15->td_sa;

 VAR_15->td_pticks = 0;
 if (FUNC_10(VAR_15->td_cowgen != VAR_16->p_cowgen))
  FUNC_23(VAR_15);
 VAR_19 = (VAR_16->p_flag & VAR_4) != 0;
 if (VAR_19 || VAR_15->td_dbgflags & VAR_11) {
  FUNC_6(VAR_16);
  VAR_15->td_dbgflags &= ~VAR_11;
  if (VAR_19)
   VAR_15->td_dbgflags |= VAR_10;
  FUNC_7(VAR_16);
 }
 VAR_18 = (VAR_16->p_sysent->sv_fetch_syscall_args)(VAR_15);




 FUNC_4(VAR_1, "syscall", FUNC_21(VAR_16, VAR_17->code),
     (uintptr_t)VAR_15, "pid:%d", VAR_15->td_proc->p_pid, "arg0:%p", VAR_17->args[0],
     "arg1:%p", VAR_17->args[1], "arg2:%p", VAR_17->args[2]);

 if (VAR_18 != 0) {
  VAR_15->td_errno = VAR_18;
  goto retval;
 }

 FUNC_8(VAR_16, VAR_9, VAR_17->narg);
 if ((VAR_16->p_flag & VAR_4) != 0) {
  FUNC_6(VAR_16);
  if (VAR_16->p_ptevents & VAR_3)
   FUNC_12((VAR_15), VAR_5, ((void*)0));
  FUNC_7(VAR_16);
 }
 if ((VAR_15->td_dbgflags & VAR_11) != 0) {




  VAR_18 = (VAR_16->p_sysent->sv_fetch_syscall_args)(VAR_15);




  if (VAR_18 != 0) {
   VAR_15->td_errno = VAR_18;
   goto retval;
  }
 }
 VAR_18 = FUNC_19(VAR_15, VAR_17->callp);
 if (VAR_18 != 0) {
  VAR_15->td_errno = VAR_18;
  goto retval;
 }
 VAR_15->td_pflags &= ~VAR_12;

 FUNC_0(VAR_17->code, VAR_15);
 VAR_18 = (VAR_17->callp->sy_call)(VAR_15, VAR_17->args);
 FUNC_1(VAR_18, VAR_15);


 if ((VAR_15->td_pflags & VAR_12) == 0)
  VAR_15->td_errno = VAR_18;







 FUNC_20(VAR_15, VAR_17->callp);

 retval:
 FUNC_5(VAR_1, "syscall", FUNC_21(VAR_16, VAR_17->code),
     (uintptr_t)VAR_15, "pid:%d", VAR_15->td_proc->p_pid, "error:%d", VAR_18,
     "retval0:%#lx", VAR_15->td_retval[0], "retval1:%#lx",
     VAR_15->td_retval[1]);
 if (VAR_19) {
  FUNC_6(VAR_16);
  VAR_15->td_dbgflags &= ~VAR_10;
  FUNC_7(VAR_16);
 }
 (VAR_16->p_sysent->sv_set_syscall_retval)(VAR_15, VAR_18);
}
