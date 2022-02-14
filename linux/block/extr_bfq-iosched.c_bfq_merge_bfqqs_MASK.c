
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int prio_changed; } ;
struct bfq_queue {int pid; int wr_coeff; int * bic; TYPE_1__ entity; int wr_start_at_switch_to_srt; int last_wr_start_finish; int wr_cur_max_time; } ;
struct bfq_io_cq {int dummy; } ;
struct bfq_data {unsigned long wr_busy_queues; } ;


 scalar_t__ FUNC_0 (struct bfq_queue*) ;
 scalar_t__ FUNC_1 (struct bfq_queue*) ;
 int FUNC_2 (struct bfq_queue*) ;
 int FUNC_3 (struct bfq_queue*) ;
 int FUNC_4 (struct bfq_data*,struct bfq_queue*,char*,unsigned long) ;
 int FUNC_5 (struct bfq_queue*) ;
 int FUNC_6 (struct bfq_queue*) ;
 int FUNC_7 (struct bfq_queue*) ;
 int FUNC_8 (struct bfq_io_cq*,struct bfq_queue*,int) ;

__attribute__((used)) static void
FUNC_9(struct bfq_data *VAR_0, struct bfq_io_cq *VAR_1,
  struct bfq_queue *VAR_2, struct bfq_queue *VAR_3)
{
 FUNC_4(VAR_0, VAR_2, "merging with queue %lu",
  (unsigned long)VAR_3->pid);

 FUNC_2(VAR_2);
 FUNC_2(VAR_3);
 if (FUNC_0(VAR_2))
  FUNC_5(VAR_3);
 FUNC_3(VAR_2);
 if (VAR_3->wr_coeff == 1 && VAR_2->wr_coeff > 1) {
  VAR_3->wr_coeff = VAR_2->wr_coeff;
  VAR_3->wr_cur_max_time = VAR_2->wr_cur_max_time;
  VAR_3->last_wr_start_finish = VAR_2->last_wr_start_finish;
  VAR_3->wr_start_at_switch_to_srt =
   VAR_2->wr_start_at_switch_to_srt;
  if (FUNC_1(VAR_3))
   VAR_0->wr_busy_queues++;
  VAR_3->entity.prio_changed = 1;
 }

 if (VAR_2->wr_coeff > 1) {
  VAR_2->wr_coeff = 1;
  VAR_2->entity.prio_changed = 1;
  if (FUNC_1(VAR_2))
   VAR_0->wr_busy_queues--;
 }

 FUNC_4(VAR_0, VAR_3, "merge_bfqqs: wr_busy %d",
       VAR_0->wr_busy_queues);




 FUNC_8(VAR_1, VAR_3, 1);
 FUNC_6(VAR_3);
 VAR_3->bic = ((void*)0);
 VAR_3->pid = -1;
 VAR_2->bic = ((void*)0);

 FUNC_7(VAR_2);
}
