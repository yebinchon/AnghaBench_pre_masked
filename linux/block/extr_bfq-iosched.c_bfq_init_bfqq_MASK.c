
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ last_end_request; } ;
struct TYPE_3__ {int rb_node; } ;
struct bfq_queue {int max_budget; int wr_coeff; int seek_history; void* soft_rt_next_start; void* split_time; void* wr_start_at_switch_to_srt; void* last_wr_start_finish; void* budget_timeout; int pid; TYPE_2__ ttime; struct bfq_data* bfqd; scalar_t__ ref; int woken_list; int woken_list_node; int burst_list_node; int fifo; TYPE_1__ entity; } ;
struct bfq_io_cq {int dummy; } ;
struct bfq_data {int dummy; } ;
typedef int pid_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct bfq_queue*) ;
 int FUNC_5 (struct bfq_queue*) ;
 int FUNC_6 (struct bfq_queue*) ;
 int FUNC_7 (struct bfq_queue*) ;
 int FUNC_8 (struct bfq_queue*) ;
 int FUNC_9 (struct bfq_queue*) ;
 int FUNC_10 (struct bfq_data*) ;
 int FUNC_11 (struct bfq_queue*,struct bfq_io_cq*) ;
 void* FUNC_12 () ;
 void* VAR_0 ;
 scalar_t__ FUNC_13 () ;

__attribute__((used)) static void FUNC_14(struct bfq_data *VAR_1, struct bfq_queue *VAR_2,
     struct bfq_io_cq *VAR_3, pid_t VAR_4, int VAR_5)
{
 FUNC_3(&VAR_2->entity.rb_node);
 FUNC_2(&VAR_2->fifo);
 FUNC_1(&VAR_2->burst_list_node);
 FUNC_1(&VAR_2->woken_list_node);
 FUNC_0(&VAR_2->woken_list);

 VAR_2->ref = 0;
 VAR_2->bfqd = VAR_1;

 if (VAR_3)
  FUNC_11(VAR_2, VAR_3);

 if (VAR_5) {





  if (!FUNC_4(VAR_2))

   FUNC_7(VAR_2);
  FUNC_9(VAR_2);
  FUNC_8(VAR_2);
 } else
  FUNC_5(VAR_2);


 VAR_2->ttime.last_end_request = FUNC_13() + 1;

 FUNC_6(VAR_2);

 VAR_2->pid = VAR_4;


 VAR_2->max_budget = (2 * FUNC_10(VAR_1)) / 3;
 VAR_2->budget_timeout = FUNC_12();

 VAR_2->wr_coeff = 1;
 VAR_2->last_wr_start_finish = VAR_0;
 VAR_2->wr_start_at_switch_to_srt = FUNC_12();
 VAR_2->split_time = FUNC_12();
 VAR_2->soft_rt_next_start = VAR_0;


 VAR_2->seek_history = 1;
}
