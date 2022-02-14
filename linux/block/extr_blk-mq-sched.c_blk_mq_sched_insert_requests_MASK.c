
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {int q_usage_counter; struct elevator_queue* elevator; } ;
struct list_head {int dummy; } ;
struct elevator_queue {TYPE_2__* type; } ;
struct blk_mq_hw_ctx {int dispatch_busy; struct request_queue* queue; } ;
struct blk_mq_ctx {int dummy; } ;
struct TYPE_3__ {int (* insert_requests ) (struct blk_mq_hw_ctx*,struct list_head*,int) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int FUNC_0 (struct blk_mq_hw_ctx*,struct blk_mq_ctx*,struct list_head*) ;
 int FUNC_1 (struct blk_mq_hw_ctx*,int) ;
 int FUNC_2 (struct blk_mq_hw_ctx*,struct list_head*) ;
 scalar_t__ FUNC_3 (struct list_head*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct blk_mq_hw_ctx*,struct list_head*,int) ;

void FUNC_7(struct blk_mq_hw_ctx *VAR_0,
      struct blk_mq_ctx *VAR_1,
      struct list_head *VAR_2, bool VAR_3)
{
 struct elevator_queue *VAR_4;
 struct request_queue *VAR_5 = VAR_0->queue;






 FUNC_4(&VAR_5->q_usage_counter);

 VAR_4 = VAR_0->queue->elevator;
 if (VAR_4 && VAR_4->type->ops.insert_requests)
  VAR_4->type->ops.insert_requests(VAR_0, VAR_2, 0);
 else {





  if (!VAR_0->dispatch_busy && !VAR_4 && !VAR_3) {
   FUNC_2(VAR_0, VAR_2);
   if (FUNC_3(VAR_2))
    goto out;
  }
  FUNC_0(VAR_0, VAR_1, VAR_2);
 }

 FUNC_1(VAR_0, VAR_3);
 out:
 FUNC_5(&VAR_5->q_usage_counter);
}
