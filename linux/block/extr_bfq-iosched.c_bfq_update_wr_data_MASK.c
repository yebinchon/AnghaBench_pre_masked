
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfq_entity {scalar_t__ weight; scalar_t__ orig_weight; int prio_changed; } ;
struct bfq_queue {int wr_coeff; scalar_t__ last_wr_start_finish; scalar_t__ wr_cur_max_time; scalar_t__ wr_start_at_switch_to_srt; scalar_t__ service_from_wr; struct bfq_entity entity; } ;
struct bfq_data {scalar_t__ bfq_wr_rt_max_time; } ;


 int FUNC_0 (int ,struct bfq_entity*,int) ;
 int FUNC_1 (struct bfq_queue*) ;
 scalar_t__ FUNC_2 (struct bfq_queue*) ;
 int FUNC_3 (struct bfq_entity*) ;
 int FUNC_4 (struct bfq_data*,struct bfq_queue*,char*,...) ;
 scalar_t__ FUNC_5 (struct bfq_data*) ;
 scalar_t__ VAR_0 ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (struct bfq_queue*,struct bfq_data*) ;
 scalar_t__ FUNC_8 (scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct bfq_data *VAR_2, struct bfq_queue *VAR_3)
{
 struct bfq_entity *VAR_4 = &VAR_3->entity;

 if (VAR_3->wr_coeff > 1) {
  FUNC_4(VAR_2, VAR_3,
   "raising period dur %u/%u msec, old coeff %u, w %d(%d)",
   FUNC_6(VAR_0 - VAR_3->last_wr_start_finish),
   FUNC_6(VAR_3->wr_cur_max_time),
   VAR_3->wr_coeff,
   VAR_3->entity.weight, VAR_3->entity.orig_weight);

  if (VAR_4->prio_changed)
   FUNC_4(VAR_2, VAR_3, "WARN: pending prio change");






  if (FUNC_2(VAR_3))
   FUNC_1(VAR_3);
  else if (FUNC_8(VAR_3->last_wr_start_finish +
      VAR_3->wr_cur_max_time)) {
   if (VAR_3->wr_cur_max_time != VAR_2->bfq_wr_rt_max_time ||
   FUNC_8(VAR_3->wr_start_at_switch_to_srt +
            FUNC_5(VAR_2)))
    FUNC_1(VAR_3);
   else {
    FUNC_7(VAR_3, VAR_2);
    VAR_3->entity.prio_changed = 1;
   }
  }
  if (VAR_3->wr_coeff > 1 &&
      VAR_3->wr_cur_max_time != VAR_2->bfq_wr_rt_max_time &&
      VAR_3->service_from_wr > VAR_1) {

   FUNC_1(VAR_3);
  }
 }
 if ((VAR_4->weight > VAR_4->orig_weight) != (VAR_3->wr_coeff > 1))
  FUNC_0(FUNC_3(VAR_4),
      VAR_4, 0);
}
