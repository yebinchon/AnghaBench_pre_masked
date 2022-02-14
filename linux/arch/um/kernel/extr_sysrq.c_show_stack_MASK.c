
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct pt_regs {int dummy; } ;
struct TYPE_4__ {struct pt_regs* segv_regs; } ;
struct TYPE_5__ {TYPE_1__ thread; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (TYPE_2__*,int *,int *) ;
 unsigned long* FUNC_1 (struct task_struct*,struct pt_regs*) ;
 scalar_t__ FUNC_2 (unsigned long*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int VAR_2 ;

void FUNC_7(struct task_struct *VAR_3, unsigned long *VAR_4)
{
 unsigned long *VAR_5 = VAR_4;
 struct pt_regs *VAR_6 = VAR_1->thread.segv_regs;
 int VAR_7;

 if (!VAR_6 && FUNC_3()) {
  FUNC_5("Received SIGSEGV in SIGSEGV handler,"
    " aborting stack trace!\n");
  return;
 }

 if (!VAR_4)
  VAR_5 = FUNC_1(VAR_3, VAR_6);

 FUNC_6("Stack:\n");
 VAR_4 = VAR_5;
 for (VAR_7 = 0; VAR_7 < 3 * VAR_0; VAR_7++) {
  if (FUNC_2(VAR_4))
   break;
  if (VAR_7 && ((VAR_7 % VAR_0) == 0))
   FUNC_4("\n");
  FUNC_4(" %08lx", *VAR_4++);
 }
 FUNC_4("\n");

 FUNC_6("Call Trace:\n");
 FUNC_0(VAR_1, &VAR_2, ((void*)0));
 FUNC_6("\n");
}
