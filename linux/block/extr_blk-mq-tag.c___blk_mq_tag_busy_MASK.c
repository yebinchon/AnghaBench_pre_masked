
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct blk_mq_hw_ctx {TYPE_1__* tags; int state; } ;
struct TYPE_2__ {int active_queues; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

bool FUNC_3(struct blk_mq_hw_ctx *VAR_1)
{
 if (!FUNC_2(VAR_0, &VAR_1->state) &&
     !FUNC_1(VAR_0, &VAR_1->state))
  FUNC_0(&VAR_1->tags->active_queues);

 return 1;
}
