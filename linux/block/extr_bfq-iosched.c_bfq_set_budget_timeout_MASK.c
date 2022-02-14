
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int weight; unsigned int orig_weight; } ;
struct bfq_queue {scalar_t__ wr_cur_max_time; scalar_t__ budget_timeout; TYPE_1__ entity; } ;
struct bfq_data {scalar_t__ bfq_wr_rt_max_time; unsigned int bfq_timeout; int last_budget_start; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct bfq_data *VAR_1,
       struct bfq_queue *VAR_2)
{
 unsigned int VAR_3;

 if (VAR_2->wr_cur_max_time == VAR_1->bfq_wr_rt_max_time)
  VAR_3 = 1;
 else
  VAR_3 = VAR_2->entity.weight / VAR_2->entity.orig_weight;

 VAR_1->last_budget_start = FUNC_0();

 VAR_2->budget_timeout = VAR_0 +
  VAR_1->bfq_timeout * VAR_3;
}
