
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct unwind_state {unsigned long* bp; TYPE_1__* regs; } ;
struct TYPE_2__ {unsigned long ip; } ;


 scalar_t__ FUNC_0 (struct unwind_state*) ;

unsigned long *FUNC_1(struct unwind_state *VAR_0)
{
 if (FUNC_0(VAR_0))
  return ((void*)0);

 return VAR_0->regs ? &VAR_0->regs->ip : VAR_0->bp + 1;
}
