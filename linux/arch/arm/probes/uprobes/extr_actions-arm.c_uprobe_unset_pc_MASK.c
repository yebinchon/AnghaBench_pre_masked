
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int * uregs; } ;
struct arch_uprobe_task {int backup; } ;
struct arch_uprobe {size_t pcreg; } ;



__attribute__((used)) static void FUNC_0(struct arch_uprobe *VAR_0,
       struct arch_uprobe_task *VAR_1,
       struct pt_regs *VAR_2)
{

 VAR_2->uregs[VAR_0->pcreg] = VAR_1->backup;
}
