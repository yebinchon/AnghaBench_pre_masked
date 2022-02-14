
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfq_queue {scalar_t__ dispatched; int sort_list; int budget_timeout; } ;
struct bfq_data {int nonrot_with_queueing; } ;
typedef enum bfqq_expiration { ____Placeholder_bfqq_expiration } bfqq_expiration ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bfq_queue*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct bfq_data*) ;
 scalar_t__ FUNC_3 (struct bfq_queue*) ;
 int FUNC_4 (struct bfq_data*,struct bfq_queue*,int) ;
 int FUNC_5 (struct bfq_queue*) ;
 int FUNC_6 (struct bfq_data*,struct bfq_queue*) ;
 int FUNC_7 (struct bfq_data*,struct bfq_queue*,int) ;
 scalar_t__ FUNC_8 (struct bfq_data*,struct bfq_queue*) ;
 int VAR_1 ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static bool FUNC_10(struct bfq_data *VAR_2, struct bfq_queue *VAR_3,
         enum bfqq_expiration VAR_4)
{






 if (FUNC_3(VAR_3) && FUNC_0(VAR_3))
  FUNC_5(VAR_3);
 if (FUNC_1(&VAR_3->sort_list) &&
     !(VAR_4 == VAR_0 &&
       FUNC_8(VAR_2, VAR_3))) {
  if (VAR_3->dispatched == 0)






   VAR_3->budget_timeout = VAR_1;

  FUNC_4(VAR_2, VAR_3, 1);
 } else {
  FUNC_7(VAR_2, VAR_3, 1);




  if (FUNC_9(!VAR_2->nonrot_with_queueing &&
        !FUNC_1(&VAR_3->sort_list)))
   FUNC_6(VAR_2, VAR_3);
 }
 return FUNC_2(VAR_2);
}
