
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int saved_trap_no; } ;
struct uprobe_task {int xol_vaddr; TYPE_2__ autask; } ;
struct pt_regs {int ARM_pc; } ;
struct arch_uprobe {int (* prehandler ) (struct arch_uprobe*,TYPE_2__*,struct pt_regs*) ;} ;
struct TYPE_4__ {int trap_no; } ;
struct TYPE_6__ {TYPE_1__ thread; struct uprobe_task* utask; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (struct arch_uprobe*,TYPE_2__*,struct pt_regs*) ;

int FUNC_1(struct arch_uprobe *VAR_2, struct pt_regs *VAR_3)
{
 struct uprobe_task *VAR_4 = VAR_1->utask;

 if (VAR_2->prehandler)
  VAR_2->prehandler(VAR_2, &VAR_4->autask, VAR_3);

 VAR_4->autask.saved_trap_no = VAR_1->thread.trap_no;
 VAR_1->thread.trap_no = VAR_0;
 VAR_3->ARM_pc = VAR_4->xol_vaddr;

 return 0;
}
