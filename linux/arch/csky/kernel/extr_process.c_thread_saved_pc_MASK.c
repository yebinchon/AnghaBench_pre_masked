
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ksp; } ;
struct task_struct {TYPE_1__ thread; } ;
struct switch_stack {unsigned long r15; } ;



unsigned long FUNC_0(struct task_struct *VAR_0)
{
 struct switch_stack *VAR_1 = (struct switch_stack *)VAR_0->thread.ksp;

 return VAR_1->r15;
}
