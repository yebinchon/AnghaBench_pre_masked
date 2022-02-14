
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ task_finished_fn ;
struct parallel_processes {int max_processes; TYPE_2__* pfd; TYPE_1__* children; int buffered_output; scalar_t__ shutdown; scalar_t__ output_owner; scalar_t__ nr_processes; scalar_t__ task_finished; scalar_t__ start_failure; scalar_t__ get_next_task; void* data; } ;
typedef scalar_t__ start_failure_fn ;
typedef scalar_t__ get_next_task_fn ;
struct TYPE_4__ {int events; int fd; } ;
struct TYPE_3__ {int process; int err; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 struct parallel_processes* VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (char*,int) ;
 void* FUNC_6 (int,int) ;

__attribute__((used)) static void FUNC_7(struct parallel_processes *VAR_6,
      int VAR_7,
      get_next_task_fn VAR_8,
      start_failure_fn VAR_9,
      task_finished_fn VAR_10,
      void *VAR_11)
{
 int VAR_12;

 if (VAR_7 < 1)
  VAR_7 = FUNC_2();

 VAR_6->max_processes = VAR_7;

 FUNC_5("run_processes_parallel: preparing to run up to %d tasks", VAR_7);

 VAR_6->data = VAR_11;
 if (!VAR_8)
  FUNC_0("you need to specify a get_next_task function");
 VAR_6->get_next_task = VAR_8;

 VAR_6->start_failure = VAR_9 ? VAR_9 : VAR_2;
 VAR_6->task_finished = VAR_10 ? VAR_10 : VAR_3;

 VAR_6->nr_processes = 0;
 VAR_6->output_owner = 0;
 VAR_6->shutdown = 0;
 VAR_6->children = FUNC_6(VAR_7, sizeof(*VAR_6->children));
 VAR_6->pfd = FUNC_6(VAR_7, sizeof(*VAR_6->pfd));
 FUNC_4(&VAR_6->buffered_output, 0);

 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
  FUNC_4(&VAR_6->children[VAR_12].err, 0);
  FUNC_1(&VAR_6->children[VAR_12].process);
  VAR_6->pfd[VAR_12].events = VAR_1 | VAR_0;
  VAR_6->pfd[VAR_12].fd = -1;
 }

 VAR_5 = VAR_6;
 FUNC_3(VAR_4);
}
