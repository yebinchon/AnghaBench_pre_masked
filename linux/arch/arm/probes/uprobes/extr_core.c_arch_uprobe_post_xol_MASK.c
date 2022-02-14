
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ saved_trap_no; } ;
struct uprobe_task {TYPE_2__ autask; scalar_t__ vaddr; } ;
struct pt_regs {scalar_t__ ARM_pc; } ;
struct arch_uprobe {int (* posthandler ) (struct arch_uprobe*,TYPE_2__*,struct pt_regs*) ;} ;
struct TYPE_4__ {scalar_t__ trap_no; } ;
struct TYPE_6__ {TYPE_1__ thread; struct uprobe_task* utask; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_3__* VAR_1 ;
 int FUNC_1 (struct arch_uprobe*,TYPE_2__*,struct pt_regs*) ;

int FUNC_2(struct arch_uprobe *VAR_2, struct pt_regs *VAR_3)
{
 struct uprobe_task *VAR_4 = VAR_1->utask;

 FUNC_0(VAR_1->thread.trap_no != VAR_0);

 VAR_1->thread.trap_no = VAR_4->autask.saved_trap_no;
 VAR_3->ARM_pc = VAR_4->vaddr + 4;

 if (VAR_2->posthandler)
  VAR_2->posthandler(VAR_2, &VAR_4->autask, VAR_3);

 return 0;
}
