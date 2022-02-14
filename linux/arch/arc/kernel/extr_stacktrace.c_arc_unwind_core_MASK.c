
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int r31; int r63; } ;
struct unwind_frame_info {TYPE_1__ regs; } ;
struct task_struct {int dummy; } ;
struct pt_regs {int dummy; } ;


 unsigned int FUNC_0 (struct unwind_frame_info*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct unwind_frame_info*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct task_struct*,struct pt_regs*,struct unwind_frame_info*) ;

unsigned int
FUNC_5(struct task_struct *VAR_0, struct pt_regs *VAR_1,
  int (*VAR_2) (unsigned int, void *), void *VAR_3)
{
 FUNC_3("CONFIG_ARC_DW2_UNWIND needs to be enabled\n");
 return 0;


}
