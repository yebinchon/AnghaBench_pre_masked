
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uprobe_task {scalar_t__ xol_vaddr; } ;
struct pt_regs {int dummy; } ;
struct TYPE_2__ {struct uprobe_task* utask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_1 (struct pt_regs*) ;
 scalar_t__ FUNC_2 (struct pt_regs*) ;

__attribute__((used)) static int FUNC_3(struct pt_regs *VAR_3,
  unsigned int VAR_4)
{
 struct uprobe_task *VAR_5 = VAR_2->utask;

 FUNC_0(VAR_5 && (FUNC_1(VAR_3) != VAR_5->xol_vaddr + 4));
 if (FUNC_2(VAR_3))
  return VAR_1;

 return VAR_0;
}
