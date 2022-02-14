
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lima_sched_task {int fence; } ;
struct lima_sched_pipe {int (* task_fini ) (struct lima_sched_pipe*) ;struct lima_sched_task* current_task; int error_work; scalar_t__ error; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct lima_sched_pipe*) ;

void FUNC_3(struct lima_sched_pipe *VAR_0)
{
 if (VAR_0->error)
  FUNC_1(&VAR_0->error_work);
 else {
  struct lima_sched_task *VAR_1 = VAR_0->current_task;

  VAR_0->task_fini(VAR_0);
  FUNC_0(VAR_1->fence);
 }
}
