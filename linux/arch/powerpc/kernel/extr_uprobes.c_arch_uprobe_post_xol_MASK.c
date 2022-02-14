
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ saved_trap_nr; } ;
struct uprobe_task {scalar_t__ vaddr; TYPE_2__ autask; } ;
struct pt_regs {scalar_t__ nip; } ;
struct arch_uprobe {int dummy; } ;
struct TYPE_5__ {scalar_t__ trap_nr; } ;
struct TYPE_7__ {TYPE_1__ thread; struct uprobe_task* utask; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_3__* VAR_2 ;
 int FUNC_1 (TYPE_3__*) ;

int FUNC_2(struct arch_uprobe *VAR_3, struct pt_regs *VAR_4)
{
 struct uprobe_task *VAR_5 = VAR_2->utask;

 FUNC_0(VAR_2->thread.trap_nr != VAR_1);

 VAR_2->thread.trap_nr = VAR_5->autask.saved_trap_nr;
 VAR_4->nip = VAR_5->vaddr + VAR_0;

 FUNC_1(VAR_2);
 return 0;
}
