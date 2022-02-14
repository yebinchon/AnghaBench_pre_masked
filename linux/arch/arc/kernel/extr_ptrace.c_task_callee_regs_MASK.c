
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ callee_reg; } ;
struct task_struct {TYPE_1__ thread; } ;
struct callee_regs {int dummy; } ;



__attribute__((used)) static struct callee_regs *FUNC_0(struct task_struct *VAR_0)
{
 struct callee_regs *VAR_1 = (struct callee_regs *)VAR_0->thread.callee_reg;
 return VAR_1;
}
