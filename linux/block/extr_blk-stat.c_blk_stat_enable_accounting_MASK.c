
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {TYPE_1__* stats; } ;
struct TYPE_2__ {int enable_accounting; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct request_queue*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct request_queue *VAR_1)
{
 FUNC_1(&VAR_1->stats->lock);
 VAR_1->stats->enable_accounting = 1;
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_1->stats->lock);
}
