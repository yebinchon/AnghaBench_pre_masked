
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * gp; } ;
struct TYPE_7__ {TYPE_2__ regs; } ;
struct TYPE_5__ {int fs; } ;
struct TYPE_8__ {TYPE_3__ regs; TYPE_1__ arch; } ;
struct task_struct {TYPE_4__ thread; } ;


 int VAR_0 ;

int FUNC_0(struct task_struct *VAR_1)
{





 VAR_1->thread.arch.fs = VAR_1->thread.regs.regs.gp[VAR_0 / sizeof(long)];

 return 0;
}
