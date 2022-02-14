
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {scalar_t__ mq_freeze_depth; int mq_freeze_lock; int mq_freeze_wq; int q_usage_counter; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct request_queue *VAR_0)
{
 FUNC_1(&VAR_0->mq_freeze_lock);
 VAR_0->mq_freeze_depth--;
 FUNC_0(VAR_0->mq_freeze_depth < 0);
 if (!VAR_0->mq_freeze_depth) {
  FUNC_3(&VAR_0->q_usage_counter);
  FUNC_4(&VAR_0->mq_freeze_wq);
 }
 FUNC_2(&VAR_0->mq_freeze_lock);
}
