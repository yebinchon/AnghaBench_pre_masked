
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ xstate; } ;
struct task_struct {TYPE_1__ thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (struct task_struct*) ;
 int VAR_2 ;
 int FUNC_3 (struct task_struct*,int ) ;
 int VAR_3 ;

int FUNC_4(struct task_struct *VAR_4, struct task_struct *VAR_5)
{



 *VAR_4 = *VAR_5;

 if (VAR_5->thread.xstate) {
  VAR_4->thread.xstate = FUNC_0(VAR_2,
            VAR_1);
  if (!VAR_4->thread.xstate)
   return -VAR_0;
  FUNC_1(VAR_4->thread.xstate, VAR_5->thread.xstate, VAR_3);
 }

 return 0;
}
