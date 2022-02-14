
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {TYPE_1__* stats; } ;
struct blk_stat_callback {int timer; int list; } ;
struct TYPE_2__ {int lock; int enable_accounting; int callbacks; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct request_queue*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct request_queue *VAR_1,
         struct blk_stat_callback *VAR_2)
{
 FUNC_4(&VAR_1->stats->lock);
 FUNC_2(&VAR_2->list);
 if (FUNC_3(&VAR_1->stats->callbacks) && !VAR_1->stats->enable_accounting)
  FUNC_0(VAR_0, VAR_1);
 FUNC_5(&VAR_1->stats->lock);

 FUNC_1(&VAR_2->timer);
}
