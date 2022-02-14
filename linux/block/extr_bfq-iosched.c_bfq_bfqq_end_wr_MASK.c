
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int prio_changed; } ;
struct bfq_queue {int wr_coeff; TYPE_2__ entity; int last_wr_start_finish; scalar_t__ wr_cur_max_time; TYPE_1__* bfqd; } ;
struct TYPE_3__ {int wr_busy_queues; } ;


 scalar_t__ FUNC_0 (struct bfq_queue*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct bfq_queue *VAR_1)
{
 if (FUNC_0(VAR_1))
  VAR_1->bfqd->wr_busy_queues--;
 VAR_1->wr_coeff = 1;
 VAR_1->wr_cur_max_time = 0;
 VAR_1->last_wr_start_finish = VAR_0;




 VAR_1->entity.prio_changed = 1;
}
