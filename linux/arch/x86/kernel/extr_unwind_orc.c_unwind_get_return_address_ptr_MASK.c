
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct unwind_state {scalar_t__ sp; TYPE_1__* regs; } ;
struct TYPE_2__ {unsigned long ip; } ;


 scalar_t__ FUNC_0 (struct unwind_state*) ;

unsigned long *FUNC_1(struct unwind_state *VAR_0)
{
 if (FUNC_0(VAR_0))
  return ((void*)0);

 if (VAR_0->regs)
  return &VAR_0->regs->ip;

 if (VAR_0->sp)
  return (unsigned long *)VAR_0->sp - 1;

 return ((void*)0);
}
