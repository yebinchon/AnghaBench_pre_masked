
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct pt_regs {unsigned long* regs; unsigned long cp0_epc; } ;


 int FUNC_0 (unsigned long) ;
 struct task_struct* VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (unsigned long) ;
 unsigned long FUNC_5 (struct task_struct*,unsigned long*,unsigned long,unsigned long*) ;
 scalar_t__ FUNC_6 (struct pt_regs const*) ;

__attribute__((used)) static void FUNC_7(struct task_struct *VAR_2, const struct pt_regs *VAR_3)
{
 unsigned long VAR_4 = VAR_3->regs[29];
 unsigned long VAR_5 = VAR_3->regs[31];
 unsigned long VAR_6 = VAR_3->cp0_epc;

 if (!VAR_2)
  VAR_2 = VAR_0;

 if (VAR_1 || FUNC_6(VAR_3) || !FUNC_0(VAR_6)) {
  FUNC_4(VAR_4);
  return;
 }
 FUNC_3("Call Trace:\n");
 do {
  FUNC_2(VAR_6);
  VAR_6 = FUNC_5(VAR_2, &VAR_4, VAR_6, &VAR_5);
 } while (VAR_6);
 FUNC_1("\n");
}
