
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct rdma_restrack_entry {struct task_struct* task; } ;


 int FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct task_struct*) ;

void FUNC_2(struct rdma_restrack_entry *VAR_0,
          struct task_struct *VAR_1)
{
 if (VAR_0->task)
  FUNC_1(VAR_0->task);
 FUNC_0(VAR_1);
 VAR_0->task = VAR_1;
}
