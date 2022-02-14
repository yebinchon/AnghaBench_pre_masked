
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ regs; } ;
struct task_struct {TYPE_1__ thread; } ;
struct pvr_s {int dummy; } ;
struct pt_regs {int dummy; } ;
struct TYPE_4__ {unsigned long* pvr; } ;


 unsigned int VAR_0 ;
 TYPE_2__ VAR_1 ;

void FUNC_0(unsigned long *VAR_2, struct task_struct *VAR_3)
{
 unsigned int VAR_4;
 unsigned long *VAR_5 = (unsigned long *)(VAR_3->thread.regs);


 for (VAR_4 = 0; VAR_4 < (sizeof(struct pt_regs) / 4) - 1; VAR_4++)
  VAR_2[VAR_4] = VAR_5[VAR_4];


 for (VAR_4 = 0; VAR_4 < sizeof(struct pvr_s)/4; VAR_4++)
  VAR_2[VAR_0 + VAR_4] = VAR_1.pvr[VAR_4];
}
