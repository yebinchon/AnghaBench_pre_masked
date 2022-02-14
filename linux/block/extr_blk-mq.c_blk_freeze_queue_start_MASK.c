
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int mq_freeze_depth; int mq_freeze_lock; int q_usage_counter; } ;


 int FUNC_0 (struct request_queue*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct request_queue*) ;

void FUNC_5(struct request_queue *VAR_0)
{
 FUNC_1(&VAR_0->mq_freeze_lock);
 if (++VAR_0->mq_freeze_depth == 1) {
  FUNC_3(&VAR_0->q_usage_counter);
  FUNC_2(&VAR_0->mq_freeze_lock);
  if (FUNC_4(VAR_0))
   FUNC_0(VAR_0, 0);
 } else {
  FUNC_2(&VAR_0->mq_freeze_lock);
 }
}
