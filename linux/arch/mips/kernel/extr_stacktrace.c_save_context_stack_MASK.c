
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct stack_trace {scalar_t__ skip; unsigned long* entries; scalar_t__ nr_entries; scalar_t__ max_entries; } ;
struct pt_regs {unsigned long* regs; unsigned long cp0_epc; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct stack_trace*,unsigned long,int) ;
 scalar_t__ FUNC_3 (struct task_struct*) ;
 unsigned long FUNC_4 (struct task_struct*,unsigned long*,unsigned long,unsigned long*) ;

__attribute__((used)) static void FUNC_5(struct stack_trace *VAR_2,
 struct task_struct *VAR_3, struct pt_regs *VAR_4, int VAR_5)
{
 unsigned long VAR_6 = VAR_4->regs[29];
 FUNC_2(VAR_2, VAR_6, VAR_5);

}
