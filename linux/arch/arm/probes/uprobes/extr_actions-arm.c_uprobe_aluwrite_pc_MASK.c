
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct pt_regs {int * uregs; } ;
struct arch_uprobe_task {int backup; } ;
struct arch_uprobe {size_t pcreg; } ;


 int FUNC_0 (int ,struct pt_regs*) ;

__attribute__((used)) static void FUNC_1(struct arch_uprobe *VAR_0,
          struct arch_uprobe_task *VAR_1,
          struct pt_regs *VAR_2)
{
 u32 VAR_3 = VAR_0->pcreg;

 FUNC_0(VAR_2->uregs[VAR_3], VAR_2);
 VAR_2->uregs[VAR_3] = VAR_1->backup;
}
