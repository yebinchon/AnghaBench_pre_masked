
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack_trace {int dummy; } ;
struct pt_regs {int * gpr; } ;


 int VAR_0 ;
 int FUNC_0 (struct stack_trace*,int ,int ,int ) ;

void
FUNC_1(struct pt_regs *VAR_1, struct stack_trace *VAR_2)
{
 FUNC_0(VAR_2, VAR_1->gpr[1], VAR_0, 0);
}
