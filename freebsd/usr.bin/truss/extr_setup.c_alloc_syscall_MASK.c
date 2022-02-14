
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_2__ {scalar_t__ number; scalar_t__ nargs; int args; int ** s_args; int * sc; } ;
struct threadinfo {int in_syscall; TYPE_1__ cs; } ;
struct ptrace_lwpinfo {scalar_t__ pl_syscall_code; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;
 size_t FUNC_2 (int **) ;

__attribute__((used)) static void
FUNC_3(struct threadinfo *VAR_0, struct ptrace_lwpinfo *VAR_1)
{
 u_int VAR_2;

 FUNC_0(VAR_0->in_syscall == 0);
 FUNC_0(VAR_0->cs.number == 0);
 FUNC_0(VAR_0->cs.sc == ((void*)0));
 FUNC_0(VAR_0->cs.nargs == 0);
 for (VAR_2 = 0; VAR_2 < FUNC_2(VAR_0->cs.s_args); VAR_2++)
  FUNC_0(VAR_0->cs.s_args[VAR_2] == ((void*)0));
 FUNC_1(VAR_0->cs.args, 0, sizeof(VAR_0->cs.args));
 VAR_0->cs.number = VAR_1->pl_syscall_code;
 VAR_0->in_syscall = 1;
}
