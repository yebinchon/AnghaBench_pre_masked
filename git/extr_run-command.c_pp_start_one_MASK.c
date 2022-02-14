
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct parallel_processes {int max_processes; int (* get_next_task ) (TYPE_3__*,int *,int ,int *) ;int (* start_failure ) (int *,int ,int ) ;int shutdown; TYPE_2__* children; TYPE_1__* pfd; int nr_processes; int buffered_output; int data; } ;
struct TYPE_7__ {int err; int stdout_to_stderr; int no_stdin; } ;
struct TYPE_6__ {scalar_t__ state; TYPE_3__ process; int err; int data; } ;
struct TYPE_5__ {int fd; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*,int *,int ,int *) ;
 int FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct parallel_processes *VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2->max_processes; VAR_3++)
  if (VAR_2->children[VAR_3].state == VAR_0)
   break;
 if (VAR_3 == VAR_2->max_processes)
  FUNC_0("bookkeeping is hard");

 VAR_4 = VAR_2->get_next_task(&VAR_2->children[VAR_3].process,
     &VAR_2->children[VAR_3].err,
     VAR_2->data,
     &VAR_2->children[VAR_3].data);
 if (!VAR_4) {
  FUNC_2(&VAR_2->buffered_output, &VAR_2->children[VAR_3].err);
  FUNC_3(&VAR_2->children[VAR_3].err);
  return 1;
 }
 VAR_2->children[VAR_3].process.err = -1;
 VAR_2->children[VAR_3].process.stdout_to_stderr = 1;
 VAR_2->children[VAR_3].process.no_stdin = 1;

 if (FUNC_1(&VAR_2->children[VAR_3].process)) {
  VAR_4 = VAR_2->start_failure(&VAR_2->children[VAR_3].err,
      VAR_2->data,
      VAR_2->children[VAR_3].data);
  FUNC_2(&VAR_2->buffered_output, &VAR_2->children[VAR_3].err);
  FUNC_3(&VAR_2->children[VAR_3].err);
  if (VAR_4)
   VAR_2->shutdown = 1;
  return VAR_4;
 }

 VAR_2->nr_processes++;
 VAR_2->children[VAR_3].state = VAR_1;
 VAR_2->pfd[VAR_3].fd = VAR_2->children[VAR_3].process.err;
 return 0;
}
