
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int mq_freeze_wq; int pm_only; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct request_queue *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(&VAR_0->pm_only);
 FUNC_0(VAR_1 < 0);
 if (VAR_1 == 0)
  FUNC_2(&VAR_0->mq_freeze_wq);
}
