
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct pt_regs {scalar_t__ ARM_pc; scalar_t__* uregs; } ;
struct arch_uprobe_task {scalar_t__ backup; } ;
struct arch_uprobe {size_t pcreg; } ;



__attribute__((used)) static void FUNC_0(struct arch_uprobe *VAR_0,
     struct arch_uprobe_task *VAR_1,
     struct pt_regs *VAR_2)
{
 u32 VAR_3 = VAR_0->pcreg;

 VAR_1->backup = VAR_2->uregs[VAR_3];
 VAR_2->uregs[VAR_3] = VAR_2->ARM_pc + 8;
}
