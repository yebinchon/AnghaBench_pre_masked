
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct io_context* io_context; } ;
struct io_context {int nr_tasks; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct io_context*) ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (struct task_struct*) ;

void FUNC_4(struct task_struct *VAR_0)
{
 struct io_context *VAR_1;

 FUNC_2(VAR_0);
 VAR_1 = VAR_0->io_context;
 VAR_0->io_context = ((void*)0);
 FUNC_3(VAR_0);

 FUNC_0(&VAR_1->nr_tasks);
 FUNC_1(VAR_1);
}
