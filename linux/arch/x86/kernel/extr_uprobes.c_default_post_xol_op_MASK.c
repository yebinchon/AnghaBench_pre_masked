
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int saved_tf; } ;
struct uprobe_task {long vaddr; long xol_vaddr; TYPE_1__ autask; } ;
struct pt_regs {long ip; int sp; } ;
struct TYPE_5__ {int fixups; long ilen; } ;
struct arch_uprobe {TYPE_2__ defparam; } ;
struct TYPE_6__ {struct uprobe_task* utask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 scalar_t__ FUNC_0 (struct pt_regs*,long) ;
 int FUNC_1 (struct arch_uprobe*,struct pt_regs*) ;
 scalar_t__ FUNC_2 (struct pt_regs*) ;

__attribute__((used)) static int FUNC_3(struct arch_uprobe *VAR_5, struct pt_regs *VAR_6)
{
 struct uprobe_task *VAR_7 = VAR_4->utask;

 FUNC_1(VAR_5, VAR_6);
 if (VAR_5->defparam.fixups & VAR_2) {
  long VAR_8 = VAR_7->vaddr - VAR_7->xol_vaddr;
  VAR_6->ip += VAR_8;
 } else if (VAR_5->defparam.fixups & VAR_1) {
  VAR_6->sp += FUNC_2(VAR_6);
  if (FUNC_0(VAR_6, VAR_7->vaddr + VAR_5->defparam.ilen))
   return -VAR_0;
 }

 if (VAR_5->defparam.fixups & VAR_3)
  VAR_7->autask.saved_tf = 1;

 return 0;
}
