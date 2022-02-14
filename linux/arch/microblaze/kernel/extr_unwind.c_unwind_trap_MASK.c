
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct stack_trace {int dummy; } ;
struct pt_regs {int r15; int r1; int pc; } ;


 int FUNC_0 (struct task_struct*,int ,int ,int ,struct stack_trace*) ;

__attribute__((used)) static inline void FUNC_1(struct task_struct *VAR_0, unsigned long VAR_1,
    unsigned long VAR_2, struct stack_trace *VAR_3)
{
 const struct pt_regs *VAR_4 = (const struct pt_regs *) VAR_2;
 FUNC_0(VAR_0, VAR_4->pc, VAR_4->r1, VAR_4->r15, VAR_3);
}
