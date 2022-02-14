
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_2__ {int (* insn_singlestep ) (int ,TYPE_1__*,struct pt_regs*) ;} ;
struct arch_uprobe {TYPE_1__ asi; scalar_t__ insn; int simulate; } ;
typedef int probes_opcode_t ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,TYPE_1__*,struct pt_regs*) ;

bool FUNC_2(struct arch_uprobe *VAR_0, struct pt_regs *VAR_1)
{
 probes_opcode_t VAR_2;

 if (!VAR_0->simulate)
  return 0;

 VAR_2 = FUNC_0(*(unsigned int *) VAR_0->insn);

 VAR_0->asi.insn_singlestep(VAR_2, &VAR_0->asi, VAR_1);

 return 1;
}
