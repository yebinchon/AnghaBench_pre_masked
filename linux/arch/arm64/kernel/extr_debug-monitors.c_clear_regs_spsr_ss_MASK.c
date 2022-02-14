
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int pstate; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct pt_regs *VAR_1)
{
 VAR_1->pstate &= ~VAR_0;
}
