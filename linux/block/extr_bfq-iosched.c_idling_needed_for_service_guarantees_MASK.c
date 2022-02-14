
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfq_queue {int wr_coeff; scalar_t__ dispatched; } ;
struct bfq_data {scalar_t__ wr_busy_queues; scalar_t__ rq_in_driver; } ;


 scalar_t__ FUNC_0 (struct bfq_data*,struct bfq_queue*) ;
 scalar_t__ FUNC_1 (struct bfq_data*) ;

__attribute__((used)) static bool FUNC_2(struct bfq_data *VAR_0,
       struct bfq_queue *VAR_1)
{
 return (VAR_1->wr_coeff > 1 &&
  (VAR_0->wr_busy_queues <
   FUNC_1(VAR_0) ||
   VAR_0->rq_in_driver >=
   VAR_1->dispatched + 4)) ||
  FUNC_0(VAR_0, VAR_1);
}
