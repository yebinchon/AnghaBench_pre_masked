
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int ARM_pc; int ARM_cpsr; } ;
struct TYPE_2__ {int (* insn_check_cc ) (int ) ;} ;
struct arch_uprobe {TYPE_1__ asi; } ;


 int FUNC_0 (int ) ;

bool FUNC_1(struct arch_uprobe *VAR_0, struct pt_regs *VAR_1)
{
 if (!VAR_0->asi.insn_check_cc(VAR_1->ARM_cpsr)) {
  VAR_1->ARM_pc += 4;
  return 1;
 }

 return 0;
}
