
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfq_queue {int new_ioprio_class; int ioprio_class; int new_ioprio; int ioprio; } ;
struct bfq_group {int sched_data; } ;
struct bfq_entity {int * sched_data; int new_weight; int orig_weight; int weight; } ;


 struct bfq_queue* FUNC_0 (struct bfq_entity*) ;

void FUNC_1(struct bfq_entity *VAR_0, struct bfq_group *VAR_1)
{
 struct bfq_queue *VAR_2 = FUNC_0(VAR_0);

 VAR_0->weight = VAR_0->new_weight;
 VAR_0->orig_weight = VAR_0->new_weight;
 if (VAR_2) {
  VAR_2->ioprio = VAR_2->new_ioprio;
  VAR_2->ioprio_class = VAR_2->new_ioprio_class;
 }
 VAR_0->sched_data = &VAR_1->sched_data;
}
