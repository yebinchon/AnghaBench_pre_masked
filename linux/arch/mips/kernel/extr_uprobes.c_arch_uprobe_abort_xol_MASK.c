
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uprobe_task {int vaddr; } ;
struct pt_regs {int dummy; } ;
struct arch_uprobe {int dummy; } ;
struct TYPE_2__ {struct uprobe_task* utask; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct pt_regs*,int ) ;

void FUNC_1(struct arch_uprobe *VAR_1,
 struct pt_regs *VAR_2)
{
 struct uprobe_task *VAR_3 = VAR_0->utask;

 FUNC_0(VAR_2, VAR_3->vaddr);
}
