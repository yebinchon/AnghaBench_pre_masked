
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int saved_tf; int saved_trap_nr; } ;
struct uprobe_task {TYPE_3__ autask; int vaddr; } ;
struct pt_regs {int flags; int ip; } ;
struct arch_uprobe {TYPE_1__* ops; } ;
struct TYPE_6__ {int trap_nr; } ;
struct TYPE_8__ {TYPE_2__ thread; struct uprobe_task* utask; } ;
struct TYPE_5__ {int (* abort ) (struct arch_uprobe*,struct pt_regs*) ;} ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 int FUNC_0 (struct arch_uprobe*,struct pt_regs*) ;

void FUNC_1(struct arch_uprobe *VAR_2, struct pt_regs *VAR_3)
{
 struct uprobe_task *VAR_4 = VAR_1->utask;

 if (VAR_2->ops->abort)
  VAR_2->ops->abort(VAR_2, VAR_3);

 VAR_1->thread.trap_nr = VAR_4->autask.saved_trap_nr;
 VAR_3->ip = VAR_4->vaddr;

 if (!VAR_4->autask.saved_tf)
  VAR_3->flags &= ~VAR_0;
}
