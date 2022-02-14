
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int mq_freeze_depth; int mq_freeze_wq; int q_usage_counter; } ;
typedef int blk_mq_req_flags_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct request_queue*) ;
 scalar_t__ FUNC_1 (struct request_queue*) ;
 int FUNC_2 (struct request_queue*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int) ;

int FUNC_9(struct request_queue *VAR_4, blk_mq_req_flags_t VAR_5)
{
 const bool VAR_6 = VAR_5 & VAR_1;

 while (1) {
  bool VAR_7 = 0;

  FUNC_5();
  if (FUNC_4(&VAR_4->q_usage_counter)) {





   if (VAR_6 || !FUNC_2(VAR_4)) {
    VAR_7 = 1;
   } else {
    FUNC_3(&VAR_4->q_usage_counter);
   }
  }
  FUNC_6();

  if (VAR_7)
   return 0;

  if (VAR_5 & VAR_0)
   return -VAR_2;
  FUNC_7();

  FUNC_8(VAR_4->mq_freeze_wq,
      (!VAR_4->mq_freeze_depth &&
       (VAR_6 || (FUNC_0(VAR_4),
        !FUNC_2(VAR_4)))) ||
      FUNC_1(VAR_4));
  if (FUNC_1(VAR_4))
   return -VAR_3;
 }
}
