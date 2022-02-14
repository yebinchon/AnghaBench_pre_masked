
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct blk_mq_tags {int bitmap_tags; } ;
struct blk_mq_hw_ctx {struct blk_mq_tags* sched_tags; TYPE_2__* queue; } ;
struct bfq_data {int dummy; } ;
struct TYPE_4__ {TYPE_1__* elevator; } ;
struct TYPE_3__ {struct bfq_data* elevator_data; } ;


 unsigned int FUNC_0 (struct bfq_data*,int *) ;
 int FUNC_1 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct blk_mq_hw_ctx *VAR_0)
{
 struct bfq_data *VAR_1 = VAR_0->queue->elevator->elevator_data;
 struct blk_mq_tags *VAR_2 = VAR_0->sched_tags;
 unsigned int VAR_3;

 VAR_3 = FUNC_0(VAR_1, &VAR_2->bitmap_tags);
 FUNC_1(&VAR_2->bitmap_tags, VAR_3);
}
