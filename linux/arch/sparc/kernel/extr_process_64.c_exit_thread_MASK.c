
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {int* utraps; } ;
struct task_struct {int dummy; } ;


 int FUNC_0 (int*) ;
 struct thread_info* FUNC_1 (struct task_struct*) ;

void FUNC_2(struct task_struct *VAR_0)
{
 struct thread_info *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->utraps) {
  if (VAR_1->utraps[0] < 2)
   FUNC_0 (VAR_1->utraps);
  else
   VAR_1->utraps[0]--;
 }
}
