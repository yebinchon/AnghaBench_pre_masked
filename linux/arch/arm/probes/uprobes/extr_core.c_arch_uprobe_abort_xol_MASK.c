
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int saved_trap_no; } ;
struct uprobe_task {int vaddr; TYPE_2__ autask; } ;
struct pt_regs {int dummy; } ;
struct arch_uprobe {int dummy; } ;
struct TYPE_4__ {int trap_no; } ;
struct TYPE_6__ {TYPE_1__ thread; struct uprobe_task* utask; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (struct pt_regs*,int ) ;

void FUNC_1(struct arch_uprobe *VAR_1, struct pt_regs *VAR_2)
{
 struct uprobe_task *VAR_3 = VAR_0->utask;

 VAR_0->thread.trap_no = VAR_3->autask.saved_trap_no;
 FUNC_0(VAR_2, VAR_3->vaddr);
}
