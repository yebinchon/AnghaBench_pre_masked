
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ksp; } ;
struct task_struct {scalar_t__ state; TYPE_1__ thread; } ;
struct stack_frame {int * gprs; int back_chain; } ;


 unsigned long FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 struct task_struct* VAR_1 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct task_struct*) ;
 scalar_t__ FUNC_3 (struct task_struct*) ;
 struct stack_frame* FUNC_4 (struct task_struct*) ;
 int FUNC_5 (struct task_struct*) ;

unsigned long FUNC_6(struct task_struct *VAR_2)
{
 struct stack_frame *VAR_3, *VAR_4, *VAR_5;
 unsigned long VAR_6;
 int VAR_7;

 if (!VAR_2 || VAR_2 == VAR_1 || VAR_2->state == VAR_0 || !FUNC_4(VAR_2))
  return 0;

 if (!FUNC_5(VAR_2))
  return 0;

 VAR_4 = FUNC_4(VAR_2);
 VAR_5 = (struct stack_frame *) FUNC_3(VAR_2);
 VAR_3 = (struct stack_frame *) VAR_2->thread.ksp;
 if (VAR_3 <= VAR_4 || VAR_3 > VAR_5) {
  VAR_6 = 0;
  goto out;
 }
 for (VAR_7 = 0; VAR_7 < 16; VAR_7++) {
  VAR_3 = (struct stack_frame *)FUNC_0(VAR_3->back_chain);
  if (VAR_3 <= VAR_4 || VAR_3 > VAR_5) {
   VAR_6 = 0;
   goto out;
  }
  VAR_6 = FUNC_0(VAR_3->gprs[8]);
  if (!FUNC_1(VAR_6))
   goto out;
 }
out:
 FUNC_2(VAR_2);
 return VAR_6;
}
