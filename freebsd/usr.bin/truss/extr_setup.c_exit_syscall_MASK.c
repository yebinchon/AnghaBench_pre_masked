
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int ;
struct trussinfo {struct threadinfo* curthread; } ;
struct TYPE_3__ {char** s_args; int * args; struct syscall* sc; } ;
struct threadinfo {TYPE_1__ cs; int tid; struct procinfo* proc; int after; int in_syscall; } ;
struct syscall {size_t nargs; TYPE_2__* args; } ;
struct ptrace_sc_ret {scalar_t__ sr_error; int sr_retval; } ;
struct ptrace_lwpinfo {int pl_flags; } ;
struct procinfo {int pid; int * abi; int threadlist; } ;
typedef int psr ;
typedef int caddr_t ;
struct TYPE_4__ {int type; size_t offset; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char**,char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int VAR_5 ;
 int FUNC_5 (int,char*) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (struct procinfo*) ;
 int FUNC_8 (struct threadinfo*) ;
 char* FUNC_9 (TYPE_2__*,int *,int ,struct trussinfo*) ;
 int FUNC_10 (struct trussinfo*,scalar_t__,int ) ;
 scalar_t__ FUNC_11 (int ,int ,int ,int) ;

__attribute__((used)) static void
FUNC_12(struct trussinfo *VAR_6, struct ptrace_lwpinfo *VAR_7)
{
 struct threadinfo *VAR_8;
 struct procinfo *VAR_9;
 struct syscall *VAR_10;
 struct ptrace_sc_ret VAR_11;
 u_int VAR_12;

 VAR_8 = VAR_6->curthread;
 if (!VAR_8->in_syscall)
  return;

 FUNC_4(VAR_0, &VAR_8->after);
 VAR_9 = VAR_8->proc;
 if (FUNC_11(VAR_4, VAR_8->tid, (caddr_t)&VAR_11, sizeof(VAR_11)) != 0) {
  FUNC_8(VAR_8);
  return;
 }

 VAR_10 = VAR_8->cs.sc;




 for (VAR_12 = 0; VAR_12 < VAR_10->nargs; VAR_12++) {
  char *VAR_13;

  if (VAR_10->args[VAR_12].type & VAR_1) {




   if (VAR_11.sr_error != 0) {
    FUNC_2(&VAR_13, "0x%x",
        VAR_8->cs.args[VAR_10->args[VAR_12].offset]);
   } else {
    VAR_13 = FUNC_9(&VAR_10->args[VAR_12],
        VAR_8->cs.args, VAR_11.sr_retval, VAR_6);
   }
   VAR_8->cs.s_args[VAR_12] = VAR_13;
  }
 }

 FUNC_10(VAR_6, VAR_11.sr_error, VAR_11.sr_retval);
 FUNC_8(VAR_8);





 if (VAR_7->pl_flags & VAR_2) {
  FUNC_3(FUNC_1(FUNC_0(&VAR_9->threadlist), VAR_5) == ((void*)0));
  VAR_9->abi = FUNC_6(VAR_9->pid);
  if (VAR_9->abi == ((void*)0)) {
   if (FUNC_11(VAR_3, VAR_9->pid, (caddr_t)1, 0) < 0)
    FUNC_5(1, "Can not detach the process");
   FUNC_7(VAR_9);
  }
 }
}
