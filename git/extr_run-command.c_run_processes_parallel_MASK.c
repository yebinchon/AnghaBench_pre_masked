
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int task_finished_fn ;
struct parallel_processes {int shutdown; scalar_t__ nr_processes; scalar_t__ max_processes; } ;
typedef int start_failure_fn ;
typedef int get_next_task_fn ;


 int FUNC_0 (struct parallel_processes*,int) ;
 int FUNC_1 (struct parallel_processes*,int) ;
 int FUNC_2 (struct parallel_processes*) ;
 int FUNC_3 (struct parallel_processes*) ;
 int FUNC_4 (struct parallel_processes*,int,int ,int ,int ,void*) ;
 int FUNC_5 (struct parallel_processes*) ;
 int FUNC_6 (struct parallel_processes*) ;

int FUNC_7(int VAR_0,
      get_next_task_fn VAR_1,
      start_failure_fn VAR_2,
      task_finished_fn VAR_3,
      void *VAR_4)
{
 int VAR_5, VAR_6;
 int VAR_7 = 100;
 int VAR_8 = 4;
 struct parallel_processes VAR_9;

 FUNC_4(&VAR_9, VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 while (1) {
  for (VAR_5 = 0;
      VAR_5 < VAR_8 && !VAR_9.shutdown &&
      VAR_9.nr_processes < VAR_9.max_processes;
      VAR_5++) {
   VAR_6 = FUNC_6(&VAR_9);
   if (!VAR_6)
    continue;
   if (VAR_6 < 0) {
    VAR_9.shutdown = 1;
    FUNC_0(&VAR_9, -VAR_6);
   }
   break;
  }
  if (!VAR_9.nr_processes)
   break;
  FUNC_1(&VAR_9, VAR_7);
  FUNC_5(&VAR_9);
  VAR_6 = FUNC_3(&VAR_9);
  if (VAR_6) {
   VAR_9.shutdown = 1;
   if (VAR_6 < 0)
    FUNC_0(&VAR_9, -VAR_6);
  }
 }

 FUNC_2(&VAR_9);
 return 0;
}
