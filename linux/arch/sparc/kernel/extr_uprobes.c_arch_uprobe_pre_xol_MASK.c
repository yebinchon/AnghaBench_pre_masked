
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct arch_uprobe_task {int saved_tnpc; int saved_tpc; } ;
struct uprobe_task {int xol_vaddr; struct arch_uprobe_task autask; } ;
struct pt_regs {int tnpc; int tpc; } ;
struct arch_uprobe {int dummy; } ;
struct TYPE_2__ {struct uprobe_task* utask; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct pt_regs*,int ) ;

int FUNC_1(struct arch_uprobe *VAR_1, struct pt_regs *VAR_2)
{
 struct uprobe_task *VAR_3 = VAR_0->utask;
 struct arch_uprobe_task *VAR_4 = &VAR_0->utask->autask;




 VAR_4->saved_tpc = VAR_2->tpc;
 VAR_4->saved_tnpc = VAR_2->tnpc;




 FUNC_0(VAR_2, VAR_3->xol_vaddr);

 return 0;
}
