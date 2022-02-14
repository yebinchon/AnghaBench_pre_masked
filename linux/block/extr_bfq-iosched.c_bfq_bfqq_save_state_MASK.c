
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int orig_weight; } ;
struct bfq_queue {int wr_cur_max_time; int last_wr_start_finish; int wr_start_at_switch_to_srt; int wr_coeff; TYPE_2__* bfqd; int burst_list_node; int ttime; TYPE_1__ entity; struct bfq_io_cq* bic; } ;
struct bfq_io_cq {int was_in_burst_list; int saved_wr_cur_max_time; int saved_last_wr_start_finish; int saved_wr_start_at_switch_to_srt; int saved_wr_coeff; int saved_in_large_burst; int saved_IO_bound; int saved_has_short_ttime; int saved_ttime; int saved_weight; } ;
struct TYPE_4__ {int bfq_wr_coeff; scalar_t__ low_latency; } ;


 int FUNC_0 (struct bfq_queue*) ;
 int FUNC_1 (struct bfq_queue*) ;
 int FUNC_2 (struct bfq_queue*) ;
 scalar_t__ FUNC_3 (struct bfq_queue*) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct bfq_queue *VAR_1)
{
 struct bfq_io_cq *VAR_2 = VAR_1->bic;






 if (!VAR_2)
  return;

 VAR_2->saved_weight = VAR_1->entity.orig_weight;
 VAR_2->saved_ttime = VAR_1->ttime;
 VAR_2->saved_has_short_ttime = FUNC_1(VAR_1);
 VAR_2->saved_IO_bound = FUNC_0(VAR_1);
 VAR_2->saved_in_large_burst = FUNC_2(VAR_1);
 VAR_2->was_in_burst_list = !FUNC_6(&VAR_1->burst_list_node);
 if (FUNC_7(FUNC_3(VAR_1) &&
       !FUNC_2(VAR_1) &&
       VAR_1->bfqd->low_latency)) {
  VAR_2->saved_wr_coeff = VAR_1->bfqd->bfq_wr_coeff;
  VAR_2->saved_wr_start_at_switch_to_srt = FUNC_4();
  VAR_2->saved_wr_cur_max_time = FUNC_5(VAR_1->bfqd);
  VAR_2->saved_last_wr_start_finish = VAR_0;
 } else {
  VAR_2->saved_wr_coeff = VAR_1->wr_coeff;
  VAR_2->saved_wr_start_at_switch_to_srt =
   VAR_1->wr_start_at_switch_to_srt;
  VAR_2->saved_last_wr_start_finish = VAR_1->last_wr_start_finish;
  VAR_2->saved_wr_cur_max_time = VAR_1->wr_cur_max_time;
 }
}
