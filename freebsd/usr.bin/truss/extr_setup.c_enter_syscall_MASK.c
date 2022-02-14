
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct trussinfo {int outfile; } ;
struct TYPE_7__ {int number; scalar_t__ nargs; int * args; int * s_args; struct syscall* sc; } ;
struct threadinfo {int before; TYPE_3__ cs; TYPE_2__* proc; int tid; } ;
struct syscall {scalar_t__ nargs; char* name; TYPE_4__* args; scalar_t__ unknown; } ;
struct ptrace_lwpinfo {int pl_syscall_narg; } ;
typedef int caddr_t ;
struct TYPE_8__ {size_t offset; int type; } ;
struct TYPE_6__ {TYPE_1__* abi; } ;
struct TYPE_5__ {char* type; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct threadinfo*,struct ptrace_lwpinfo*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct threadinfo*) ;
 struct syscall* FUNC_6 (struct threadinfo*,int,scalar_t__) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (TYPE_4__*,int *,int *,struct trussinfo*) ;
 scalar_t__ FUNC_9 (int ,int ,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_10(struct trussinfo *VAR_4, struct threadinfo *VAR_5,
    struct ptrace_lwpinfo *VAR_6)
{
 struct syscall *VAR_7;
 u_int VAR_8, VAR_9;

 FUNC_1(VAR_5, VAR_6);
 VAR_9 = FUNC_0(VAR_6->pl_syscall_narg, FUNC_7(VAR_5->cs.args));
 if (VAR_9 != 0 && FUNC_9(VAR_2, VAR_5->tid, (caddr_t)VAR_5->cs.args,
     sizeof(VAR_5->cs.args)) != 0) {
  FUNC_5(VAR_5);
  return;
 }

 VAR_7 = FUNC_6(VAR_5, VAR_5->cs.number, VAR_9);
 if (VAR_7->unknown)
  FUNC_4(VAR_4->outfile, "-- UNKNOWN %s SYSCALL %d --\n",
      VAR_5->proc->abi->type, VAR_5->cs.number);

 VAR_5->cs.nargs = VAR_7->nargs;
 FUNC_2(VAR_7->nargs <= FUNC_7(VAR_5->cs.s_args));

 VAR_5->cs.sc = VAR_7;
 for (VAR_8 = 0; VAR_8 < VAR_5->cs.nargs; VAR_8++) {




  if (!(VAR_7->args[VAR_8].type & VAR_1)) {
   VAR_5->cs.s_args[VAR_8] = FUNC_8(&VAR_7->args[VAR_8],
       VAR_5->cs.args, ((void*)0), VAR_4);
  }
 }




 FUNC_3(VAR_0, &VAR_5->before);
}
