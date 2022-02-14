
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_info {size_t cpu; struct thread_info* real_thread; } ;
struct task_struct {struct thread_info* stack; } ;
struct TYPE_2__ {struct task_struct* task; } ;


 TYPE_1__* VAR_0 ;
 struct thread_info* FUNC_0 () ;
 int VAR_1 ;
 struct thread_info* FUNC_1 (struct task_struct*) ;
 unsigned long FUNC_2 (int *,unsigned long) ;

unsigned long FUNC_3(unsigned long *VAR_2)
{
 struct thread_info *VAR_3;
 unsigned long VAR_4, VAR_5;
 int VAR_6;

 VAR_4 = FUNC_2(&VAR_1, *VAR_2);
 if (VAR_4 != 0) {
  VAR_5 = *VAR_2;
  do {
   VAR_5 |= VAR_4;
   VAR_4 = FUNC_2(&VAR_1, VAR_5);
  } while (VAR_4 != VAR_5);
  return 1;
 }

 VAR_3 = FUNC_0();
 VAR_6 = (VAR_3->real_thread != ((void*)0));
 if (!VAR_6) {
  struct task_struct *VAR_7;
  struct thread_info *VAR_8;

  VAR_7 = VAR_0[VAR_3->cpu].task;
  VAR_8 = FUNC_1(VAR_7);

  *VAR_3 = *VAR_8;
  VAR_3->real_thread = VAR_8;
  VAR_7->stack = VAR_3;
 }

 VAR_4 = FUNC_2(&VAR_1, 0);
 *VAR_2 |= VAR_4 | VAR_6;
 return 0;
}
