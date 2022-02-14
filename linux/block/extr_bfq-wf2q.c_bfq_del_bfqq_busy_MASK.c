
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfq_queue {int ioprio_class; int wr_coeff; int dispatched; } ;
struct bfq_data {int wr_busy_queues; int * busy_queues; } ;


 int FUNC_0 (struct bfq_queue*) ;
 int FUNC_1 (struct bfq_data*,struct bfq_queue*,int,int) ;
 int FUNC_2 (struct bfq_data*,struct bfq_queue*,char*) ;
 int FUNC_3 (struct bfq_data*,struct bfq_queue*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct bfq_queue*) ;

void FUNC_6(struct bfq_data *VAR_0, struct bfq_queue *VAR_1,
         bool VAR_2)
{
 FUNC_2(VAR_0, VAR_1, "del from busy");

 FUNC_0(VAR_1);

 VAR_0->busy_queues[VAR_1->ioprio_class - 1]--;

 if (VAR_1->wr_coeff > 1)
  VAR_0->wr_busy_queues--;

 FUNC_4(FUNC_5(VAR_1));

 FUNC_1(VAR_0, VAR_1, 1, VAR_2);

 if (!VAR_1->dispatched)
  FUNC_3(VAR_0, VAR_1);
}
