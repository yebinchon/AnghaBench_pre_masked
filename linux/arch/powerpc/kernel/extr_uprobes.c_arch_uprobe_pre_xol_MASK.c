
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pt_regs {int nip; } ;
struct arch_uprobe_task {int saved_trap_nr; } ;
struct arch_uprobe {int dummy; } ;
struct TYPE_5__ {int trap_nr; } ;
struct TYPE_7__ {TYPE_2__* utask; TYPE_1__ thread; } ;
struct TYPE_6__ {int xol_vaddr; struct arch_uprobe_task autask; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;

int FUNC_1(struct arch_uprobe *VAR_2, struct pt_regs *VAR_3)
{
 struct arch_uprobe_task *VAR_4 = &VAR_1->utask->autask;

 VAR_4->saved_trap_nr = VAR_1->thread.trap_nr;
 VAR_1->thread.trap_nr = VAR_0;
 VAR_3->nip = VAR_1->utask->xol_vaddr;

 FUNC_0(VAR_1);
 return 0;
}
