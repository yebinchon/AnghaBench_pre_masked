
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parallel_processes {int max_processes; int buffered_output; TYPE_1__* pfd; TYPE_1__* children; } ;
struct TYPE_2__ {int process; int err; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(struct parallel_processes *VAR_1)
{
 int VAR_2;

 FUNC_5("run_processes_parallel: done");
 for (VAR_2 = 0; VAR_2 < VAR_1->max_processes; VAR_2++) {
  FUNC_3(&VAR_1->children[VAR_2].err);
  FUNC_0(&VAR_1->children[VAR_2].process);
 }

 FUNC_1(VAR_1->children);
 FUNC_1(VAR_1->pfd);





 FUNC_4(&VAR_1->buffered_output, VAR_0);
 FUNC_3(&VAR_1->buffered_output);

 FUNC_2();
}
