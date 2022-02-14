
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int budget; } ;
struct bfq_queue {int wr_coeff; scalar_t__ wr_cur_max_time; TYPE_1__ entity; scalar_t__ last_wr_start_finish; scalar_t__ budget_timeout; } ;
struct bfq_data {int budgets_assigned; scalar_t__ bfq_wr_rt_max_time; struct bfq_queue* in_service_queue; } ;


 int FUNC_0 (struct bfq_queue*) ;
 int FUNC_1 (struct bfq_data*,struct bfq_queue*,char*,int ) ;
 int FUNC_2 (struct bfq_data*,struct bfq_queue*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct bfq_data *VAR_1,
           struct bfq_queue *VAR_2)
{
 if (VAR_2) {
  FUNC_0(VAR_2);

  VAR_1->budgets_assigned = (VAR_1->budgets_assigned * 7 + 256) / 8;

  if (FUNC_4(VAR_2->last_wr_start_finish) &&
      VAR_2->wr_coeff > 1 &&
      VAR_2->wr_cur_max_time == VAR_1->bfq_wr_rt_max_time &&
      FUNC_4(VAR_2->budget_timeout)) {
   if (FUNC_3(VAR_2->budget_timeout,
           VAR_2->last_wr_start_finish))
    VAR_2->last_wr_start_finish +=
     VAR_0 - VAR_2->budget_timeout;
   else
    VAR_2->last_wr_start_finish = VAR_0;
  }

  FUNC_2(VAR_1, VAR_2);
  FUNC_1(VAR_1, VAR_2,
        "set_in_service_queue, cur-budget = %d",
        VAR_2->entity.budget);
 }

 VAR_1->in_service_queue = VAR_2;
}
