
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfq_queue {scalar_t__* queued; struct bfq_data* bfqd; } ;
struct bfq_data {int lock; struct bfq_queue* in_service_queue; } ;
typedef enum bfqq_expiration { ____Placeholder_bfqq_expiration } bfqq_expiration ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bfq_queue*) ;
 int FUNC_1 (struct bfq_data*,struct bfq_queue*,int,int) ;
 int FUNC_2 (struct bfq_queue*) ;
 int FUNC_3 (struct bfq_data*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct bfq_queue *VAR_2)
{
 struct bfq_data *VAR_3 = VAR_2->bfqd;
 enum bfqq_expiration VAR_4;
 unsigned long VAR_5;

 FUNC_4(&VAR_3->lock, VAR_5);
 FUNC_2(VAR_2);

 if (VAR_2 != VAR_3->in_service_queue) {
  FUNC_5(&VAR_3->lock, VAR_5);
  return;
 }

 if (FUNC_0(VAR_2))





  VAR_4 = VAR_0;
 else if (VAR_2->queued[0] == 0 && VAR_2->queued[1] == 0)






  VAR_4 = VAR_1;
 else
  goto schedule_dispatch;

 FUNC_1(VAR_3, VAR_2, 1, VAR_4);

schedule_dispatch:
 FUNC_5(&VAR_3->lock, VAR_5);
 FUNC_3(VAR_3);
}
