
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfq_queue {int ioprio_class; int wr_coeff; int dispatched; } ;
struct bfq_data {int wr_busy_queues; int queue_weights_tree; int * busy_queues; } ;


 int FUNC_0 (struct bfq_data*,struct bfq_queue*) ;
 int FUNC_1 (struct bfq_data*,struct bfq_queue*,char*) ;
 int FUNC_2 (struct bfq_queue*) ;
 int FUNC_3 (struct bfq_data*,struct bfq_queue*,int *) ;

void FUNC_4(struct bfq_data *VAR_0, struct bfq_queue *VAR_1)
{
 FUNC_1(VAR_0, VAR_1, "add to busy");

 FUNC_0(VAR_0, VAR_1);

 FUNC_2(VAR_1);
 VAR_0->busy_queues[VAR_1->ioprio_class - 1]++;

 if (!VAR_1->dispatched)
  if (VAR_1->wr_coeff == 1)
   FUNC_3(VAR_0, VAR_1,
          &VAR_0->queue_weights_tree);

 if (VAR_1->wr_coeff > 1)
  VAR_0->wr_busy_queues++;
}
