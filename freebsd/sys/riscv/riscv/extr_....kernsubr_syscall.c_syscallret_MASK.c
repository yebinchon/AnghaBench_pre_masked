
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct syscall_args {int code; } ;
struct thread {int td_pflags; int td_dbgflags; int * td_retval; int td_errno; int td_frame; struct syscall_args td_sa; struct proc* td_proc; } ;
struct proc {int p_flag2; int p_flag; int p_ptevents; } ;
struct TYPE_4__ {int ksi_code; int ksi_errno; int ksi_signo; } ;
typedef TYPE_1__ ksiginfo_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct thread*) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (struct thread*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct proc*) ;
 int FUNC_4 (struct proc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct proc*,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct thread*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (struct thread*,int ,int *) ;
 scalar_t__ VAR_14 ;
 int FUNC_11 (struct thread*,TYPE_1__*) ;
 int FUNC_12 (struct thread*,int ) ;

__attribute__((used)) static inline void
FUNC_13(struct thread *VAR_15)
{
 struct proc *VAR_16;
 struct syscall_args *VAR_17;
 ksiginfo_t VAR_18;
 int VAR_19;

 FUNC_1((VAR_15->td_pflags & VAR_11) == 0,
     ("fork() did not clear TDP_FORKING upon completion"));

 VAR_16 = VAR_15->td_proc;
 VAR_17 = &VAR_15->td_sa;
 if ((VAR_14 || (VAR_16->p_flag2 & VAR_3) != 0) &&
     FUNC_0(VAR_15)) {
  if (VAR_15->td_errno == VAR_1 || VAR_15->td_errno == VAR_0) {
   FUNC_8(&VAR_18);
   VAR_18.ksi_signo = VAR_6;
   VAR_18.ksi_errno = VAR_15->td_errno;
   VAR_18.ksi_code = VAR_13;
   FUNC_11(VAR_15, &VAR_18);
  }
 }




 FUNC_12(VAR_15, VAR_15->td_frame);







 if (VAR_16->p_flag & VAR_5) {
  VAR_19 = 1;
  FUNC_3(VAR_16);
  VAR_15->td_dbgflags |= VAR_10;
  FUNC_4(VAR_16);
 } else
  VAR_19 = 0;





 FUNC_5(VAR_16, VAR_7, VAR_17->code);
 if (VAR_19 || (VAR_15->td_dbgflags & (VAR_8 | VAR_9)) != 0) {
  FUNC_3(VAR_16);






  if (VAR_19 &&
      ((VAR_15->td_dbgflags & (VAR_9 | VAR_8)) != 0 ||
      (VAR_16->p_ptevents & VAR_4) != 0))
   FUNC_10(VAR_15, VAR_6, ((void*)0));
  VAR_15->td_dbgflags &= ~(VAR_10 | VAR_8 | VAR_9);
  FUNC_4(VAR_16);
 }

 if (FUNC_6(VAR_15->td_pflags & VAR_12))
  FUNC_7(VAR_15);
}
