
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
typedef unsigned long u32 ;
struct TYPE_2__ {void* last_end_request; } ;
struct bfq_queue {scalar_t__ dispatched; scalar_t__ wr_coeff; int sort_list; int soft_rt_next_start; TYPE_1__ ttime; int budget_timeout; } ;
struct bfq_data {void* last_completion; unsigned long last_rq_max_size; scalar_t__ bfq_wr_coeff; int rq_in_driver; struct bfq_queue* in_service_queue; struct bfq_queue* last_completed_rq_bfqq; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct bfq_data*) ;
 int FUNC_2 (struct bfq_queue*) ;
 int FUNC_3 (struct bfq_queue*) ;
 int FUNC_4 (struct bfq_data*,struct bfq_queue*,int,int ) ;
 scalar_t__ FUNC_5 (struct bfq_queue*) ;
 int FUNC_6 (struct bfq_data*,struct bfq_queue*) ;
 scalar_t__ FUNC_7 (struct bfq_queue*) ;
 scalar_t__ FUNC_8 (struct bfq_queue*) ;
 int FUNC_9 (struct bfq_data*) ;
 int FUNC_10 (struct bfq_data*) ;
 int FUNC_11 (struct bfq_data*,int *) ;
 int FUNC_12 (struct bfq_data*,struct bfq_queue*) ;
 unsigned long FUNC_13 (void*,unsigned long) ;
 int VAR_5 ;
 void* FUNC_14 () ;

__attribute__((used)) static void FUNC_15(struct bfq_queue *VAR_6, struct bfq_data *VAR_7)
{
 u64 VAR_8;
 u32 VAR_9;

 FUNC_10(VAR_7);

 VAR_7->rq_in_driver--;
 VAR_6->dispatched--;

 if (!VAR_6->dispatched && !FUNC_3(VAR_6)) {






  VAR_6->budget_timeout = VAR_5;

  FUNC_12(VAR_7, VAR_6);
 }

 VAR_8 = FUNC_14();

 VAR_6->ttime.last_end_request = VAR_8;





 VAR_9 = FUNC_13(VAR_8 - VAR_7->last_completion, VAR_4);
 if (VAR_9 > VAR_2/VAR_4 &&
    (VAR_7->last_rq_max_size<<VAR_3)/VAR_9 <
   1UL<<(VAR_3 - 10))
  FUNC_11(VAR_7, ((void*)0));
 VAR_7->last_completion = VAR_8;
 VAR_7->last_completed_rq_bfqq = VAR_6;
 if (FUNC_7(VAR_6) && VAR_6->dispatched == 0 &&
     FUNC_0(&VAR_6->sort_list) &&
     VAR_6->wr_coeff != VAR_7->bfq_wr_coeff)
  VAR_6->soft_rt_next_start =
   FUNC_6(VAR_7, VAR_6);





 if (VAR_7->in_service_queue == VAR_6) {
  if (FUNC_5(VAR_6)) {
   if (VAR_6->dispatched == 0)
    FUNC_1(VAR_7);
   return;
  } else if (FUNC_8(VAR_6))
   FUNC_4(VAR_7, VAR_6, 0,
     VAR_0);
  else if (FUNC_0(&VAR_6->sort_list) &&
    (VAR_6->dispatched == 0 ||
     !FUNC_2(VAR_6)))
   FUNC_4(VAR_7, VAR_6, 0,
     VAR_1);
 }

 if (!VAR_7->rq_in_driver)
  FUNC_9(VAR_7);
}
