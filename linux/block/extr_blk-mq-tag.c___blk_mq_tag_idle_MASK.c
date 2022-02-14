
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_mq_tags {int active_queues; } ;
struct blk_mq_hw_ctx {int state; struct blk_mq_tags* tags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct blk_mq_tags*,int) ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(struct blk_mq_hw_ctx *VAR_1)
{
 struct blk_mq_tags *VAR_2 = VAR_1->tags;

 if (!FUNC_2(VAR_0, &VAR_1->state))
  return;

 FUNC_0(&VAR_2->active_queues);

 FUNC_1(VAR_2, 0);
}
