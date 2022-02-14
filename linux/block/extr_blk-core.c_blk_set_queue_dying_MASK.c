
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int mq_freeze_wq; } ;


 int VAR_0 ;
 int FUNC_0 (struct request_queue*) ;
 int FUNC_1 (struct request_queue*) ;
 int FUNC_2 (int ,struct request_queue*) ;
 scalar_t__ FUNC_3 (struct request_queue*) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct request_queue *VAR_1)
{
 FUNC_2(VAR_0, VAR_1);






 FUNC_0(VAR_1);

 if (FUNC_3(VAR_1))
  FUNC_1(VAR_1);


 FUNC_4(&VAR_1->mq_freeze_wq);
}
