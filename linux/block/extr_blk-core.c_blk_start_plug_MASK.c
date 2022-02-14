
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct blk_plug* plug; } ;
struct blk_plug {int multiple_queues; scalar_t__ rq_count; int cb_list; int mq_list; } ;


 int FUNC_0 (int *) ;
 struct task_struct* VAR_0 ;

void FUNC_1(struct blk_plug *VAR_1)
{
 struct task_struct *VAR_2 = VAR_0;




 if (VAR_2->plug)
  return;

 FUNC_0(&VAR_1->mq_list);
 FUNC_0(&VAR_1->cb_list);
 VAR_1->rq_count = 0;
 VAR_1->multiple_queues = 0;





 VAR_2->plug = VAR_1;
}
