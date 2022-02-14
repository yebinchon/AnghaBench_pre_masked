
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct arch_uprobe_task {scalar_t__ saved_tnpc; } ;
struct uprobe_task {scalar_t__ state; scalar_t__ vaddr; struct arch_uprobe_task autask; } ;
struct pt_regs {scalar_t__ tpc; scalar_t__ tnpc; } ;
struct arch_uprobe {int ixol; } ;
struct TYPE_2__ {struct uprobe_task* utask; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct uprobe_task*,struct pt_regs*) ;
 int FUNC_1 (struct pt_regs*,int ,unsigned long) ;

int FUNC_2(struct arch_uprobe *VAR_2, struct pt_regs *VAR_3)
{
 struct uprobe_task *VAR_4 = VAR_1->utask;
 struct arch_uprobe_task *VAR_5 = &VAR_4->autask;
 u32 VAR_6 = VAR_2->ixol;
 int VAR_7 = 0;

 if (VAR_4->state == VAR_0) {
  VAR_3->tnpc = FUNC_0(VAR_6, VAR_4, VAR_3);
  VAR_3->tpc = VAR_5->saved_tnpc;
  VAR_7 = FUNC_1(VAR_3, VAR_6, (unsigned long) VAR_4->vaddr);
 } else {
  VAR_3->tnpc = VAR_4->vaddr+4;
  VAR_3->tpc = VAR_5->saved_tnpc+4;
 }
 return VAR_7;
}
