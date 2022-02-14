
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct parallel_processes {int max_processes; scalar_t__ nr_processes; int (* task_finished ) (int,int *,int ,int ) ;int output_owner; TYPE_2__* children; int buffered_output; TYPE_1__* pfd; int data; } ;
struct TYPE_4__ {scalar_t__ state; int err; int process; int data; } ;
struct TYPE_3__ {int fd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int,int *,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct parallel_processes *VAR_4)
{
 int VAR_5, VAR_6;
 int VAR_7 = VAR_4->max_processes;
 int VAR_8 = 0;

 while (VAR_4->nr_processes > 0) {
  for (VAR_5 = 0; VAR_5 < VAR_4->max_processes; VAR_5++)
   if (VAR_4->children[VAR_5].state == VAR_1)
    break;
  if (VAR_5 == VAR_4->max_processes)
   break;

  VAR_6 = FUNC_1(&VAR_4->children[VAR_5].process);

  VAR_6 = VAR_4->task_finished(VAR_6,
      &VAR_4->children[VAR_5].err, VAR_4->data,
      VAR_4->children[VAR_5].data);

  if (VAR_6)
   VAR_8 = VAR_6;
  if (VAR_6 < 0)
   break;

  VAR_4->nr_processes--;
  VAR_4->children[VAR_5].state = VAR_0;
  VAR_4->pfd[VAR_5].fd = -1;
  FUNC_0(&VAR_4->children[VAR_5].process);

  if (VAR_5 != VAR_4->output_owner) {
   FUNC_2(&VAR_4->buffered_output, &VAR_4->children[VAR_5].err);
   FUNC_3(&VAR_4->children[VAR_5].err);
  } else {
   FUNC_4(&VAR_4->children[VAR_5].err, VAR_3);
   FUNC_3(&VAR_4->children[VAR_5].err);


   FUNC_4(&VAR_4->buffered_output, VAR_3);
   FUNC_3(&VAR_4->buffered_output);
   for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++)
    if (VAR_4->children[(VAR_4->output_owner + VAR_5) % VAR_7].state == VAR_2)
     break;
   VAR_4->output_owner = (VAR_4->output_owner + VAR_5) % VAR_7;
  }
 }
 return VAR_8;
}
