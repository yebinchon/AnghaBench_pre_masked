
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int q_usage_counter; int mq_freeze_wq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,unsigned long) ;

int FUNC_2(struct request_queue *VAR_0,
         unsigned long VAR_1)
{
 return FUNC_1(VAR_0->mq_freeze_wq,
     FUNC_0(&VAR_0->q_usage_counter),
     VAR_1);
}
