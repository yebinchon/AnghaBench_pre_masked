
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * xstate; } ;
struct task_struct {TYPE_1__ thread; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;

void FUNC_1(struct task_struct *VAR_1)
{
 if (VAR_1->thread.xstate) {
  FUNC_0(VAR_0, VAR_1->thread.xstate);
  VAR_1->thread.xstate = ((void*)0);
 }
}
