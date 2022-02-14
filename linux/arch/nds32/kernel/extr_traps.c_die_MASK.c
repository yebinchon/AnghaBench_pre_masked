
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {char const* comm; int pid; } ;
struct pt_regs {int sp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 struct task_struct* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pt_regs*) ;
 int FUNC_4 (char*,int,int) ;
 int FUNC_5 () ;
 int FUNC_6 (struct task_struct*) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (char*,char const*,...) ;
 int FUNC_9 () ;
 int FUNC_10 (struct pt_regs*) ;
 int FUNC_11 () ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct pt_regs*) ;

void FUNC_15(const char *VAR_5, struct pt_regs *VAR_6, int VAR_7)
{
 struct task_struct *VAR_8 = VAR_3;
 static int VAR_9;

 FUNC_1();
 FUNC_12(&VAR_4);
 FUNC_0(1);

 FUNC_8("Internal error: %s: %x [#%d]\n", VAR_5, VAR_7, ++VAR_9);
 FUNC_9();
 FUNC_8("CPU: %i\n", FUNC_11());
 FUNC_10(VAR_6);
 FUNC_8("Process %s (pid: %d, stack limit = 0x%p)\n",
   VAR_8->comm, VAR_8->pid, FUNC_6(VAR_8));

 if (!FUNC_14(VAR_6) || FUNC_7()) {
  FUNC_4("Stack: ", VAR_6->sp, (VAR_6->sp + VAR_1) & VAR_0);
  FUNC_3(VAR_6);
  FUNC_5();
 }

 FUNC_0(0);
 FUNC_13(&VAR_4);
 FUNC_2(VAR_2);
}
