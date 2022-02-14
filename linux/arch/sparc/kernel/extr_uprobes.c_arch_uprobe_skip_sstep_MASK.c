
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int tnpc; int tpc; } ;
struct arch_uprobe {int ixol; } ;



bool FUNC_0(struct arch_uprobe *VAR_0, struct pt_regs *VAR_1)
{



 if (VAR_0->ixol == (1 << 24)) {
  VAR_1->tnpc += 4;
  VAR_1->tpc += 4;
  return 1;
 }

 return 0;
}
