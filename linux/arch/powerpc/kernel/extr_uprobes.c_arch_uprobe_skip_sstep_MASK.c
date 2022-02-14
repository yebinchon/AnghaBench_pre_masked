
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct arch_uprobe {int insn; } ;


 int FUNC_0 (struct pt_regs*,int ) ;

bool FUNC_1(struct arch_uprobe *VAR_0, struct pt_regs *VAR_1)
{
 int VAR_2;





 VAR_2 = FUNC_0(VAR_1, VAR_0->insn);
 if (VAR_2 > 0)
  return 1;

 return 0;
}
