
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_2__ {int (* handler ) (int ,unsigned long,struct pt_regs*) ;} ;
struct arch_uprobe {TYPE_1__ api; int * insn; int simulate; } ;
typedef int probe_opcode_t ;


 unsigned long FUNC_0 (struct pt_regs*) ;
 int FUNC_1 (int ,unsigned long,struct pt_regs*) ;

bool FUNC_2(struct arch_uprobe *VAR_0, struct pt_regs *VAR_1)
{
 probe_opcode_t VAR_2;
 unsigned long VAR_3;

 if (!VAR_0->simulate)
  return 0;

 VAR_2 = *(probe_opcode_t *)(&VAR_0->insn[0]);
 VAR_3 = FUNC_0(VAR_1);

 if (VAR_0->api.handler)
  VAR_0->api.handler(VAR_2, VAR_3, VAR_1);

 return 1;
}
