
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* xstate; } ;
struct task_struct {TYPE_1__ thread; } ;
struct sh_fpu_soft_struct {void* fpscr; } ;
struct sh_fpu_hard_struct {void* fpscr; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {struct sh_fpu_soft_struct softfpu; struct sh_fpu_soft_struct hardfpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 struct task_struct* VAR_5 ;
 TYPE_2__* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sh_fpu_soft_struct*,int ,int ) ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (struct task_struct*) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (struct task_struct*) ;
 int FUNC_5 (struct task_struct*,int ) ;
 int VAR_7 ;

int FUNC_6(struct task_struct *VAR_8)
{
 if (FUNC_4(VAR_8)) {
  if ((VAR_4.flags & VAR_0) && VAR_8 == VAR_5)
   FUNC_5(VAR_8, FUNC_3(VAR_8));
  return 0;
 }




 if (!VAR_8->thread.xstate) {
  VAR_8->thread.xstate = FUNC_0(VAR_6,
            VAR_3);
  if (!VAR_8->thread.xstate)
   return -VAR_1;
 }

 if (VAR_4.flags & VAR_0) {
  struct sh_fpu_hard_struct *VAR_9 = &VAR_8->thread.xstate->hardfpu;
  FUNC_1(VAR_9, 0, VAR_7);
  VAR_9->fpscr = VAR_2;
 } else {
  struct sh_fpu_soft_struct *VAR_10 = &VAR_8->thread.xstate->softfpu;
  FUNC_1(VAR_10, 0, VAR_7);
  VAR_10->fpscr = VAR_2;
 }

 FUNC_2(VAR_8);
 return 0;
}
