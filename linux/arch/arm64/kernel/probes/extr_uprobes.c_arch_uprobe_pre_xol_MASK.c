
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uprobe_task {int xol_vaddr; } ;
struct pt_regs {int dummy; } ;
struct arch_uprobe {int dummy; } ;
struct TYPE_4__ {int fault_code; } ;
struct TYPE_5__ {TYPE_1__ thread; struct uprobe_task* utask; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (struct pt_regs*,int ) ;
 int FUNC_1 (TYPE_2__*) ;

int FUNC_2(struct arch_uprobe *VAR_2, struct pt_regs *VAR_3)
{
 struct uprobe_task *VAR_4 = VAR_1->utask;


 VAR_1->thread.fault_code = VAR_0;


 FUNC_0(VAR_3, VAR_4->xol_vaddr);

 FUNC_1(VAR_1);

 return 0;
}
