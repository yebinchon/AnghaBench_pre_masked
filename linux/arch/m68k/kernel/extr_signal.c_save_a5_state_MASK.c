
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_stack {int a5; } ;
struct sigcontext {int sc_a5; } ;
struct pt_regs {int dummy; } ;



__attribute__((used)) static inline void FUNC_0(struct sigcontext *VAR_0, struct pt_regs *VAR_1)
{
 VAR_0->sc_a5 = ((struct switch_stack *)VAR_1 - 1)->a5;
}
