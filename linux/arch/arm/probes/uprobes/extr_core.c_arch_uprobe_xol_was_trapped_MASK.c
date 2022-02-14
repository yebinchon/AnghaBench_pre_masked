
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ trap_no; } ;
struct task_struct {TYPE_1__ thread; } ;


 scalar_t__ VAR_0 ;

bool FUNC_0(struct task_struct *VAR_1)
{
 if (VAR_1->thread.trap_no != VAR_0)
  return 1;

 return 0;
}
