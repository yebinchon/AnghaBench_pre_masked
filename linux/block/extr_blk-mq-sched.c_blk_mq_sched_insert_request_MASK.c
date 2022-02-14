
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {struct elevator_queue* elevator; } ;
struct request {int rq_flags; int tag; int queuelist; int cmd_flags; struct blk_mq_hw_ctx* mq_hctx; struct blk_mq_ctx* mq_ctx; struct request_queue* q; } ;
struct elevator_queue {TYPE_2__* type; } ;
struct blk_mq_hw_ctx {int dummy; } ;
struct blk_mq_ctx {int lock; } ;
struct TYPE_3__ {int (* insert_requests ) (struct blk_mq_hw_ctx*,int *,int) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct blk_mq_hw_ctx*,struct request*,int) ;
 int FUNC_3 (struct request*) ;
 int FUNC_4 (struct blk_mq_hw_ctx*,int) ;
 scalar_t__ FUNC_5 (struct blk_mq_hw_ctx*,int,struct request*) ;
 int VAR_1 ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct blk_mq_hw_ctx*,int *,int) ;

void FUNC_11(struct request *VAR_2, bool VAR_3,
     bool VAR_4, bool VAR_5)
{
 struct request_queue *VAR_6 = VAR_2->q;
 struct elevator_queue *VAR_7 = VAR_6->elevator;
 struct blk_mq_ctx *VAR_8 = VAR_2->mq_ctx;
 struct blk_mq_hw_ctx *VAR_9 = VAR_2->mq_hctx;


 if (!(VAR_2->rq_flags & VAR_0) && FUNC_7(VAR_2->cmd_flags)) {
  FUNC_3(VAR_2);
  goto run;
 }

 FUNC_1(VAR_7 && (VAR_2->tag != -1));

 if (FUNC_5(VAR_9, !!VAR_7, VAR_2))
  goto run;

 if (VAR_7 && VAR_7->type->ops.insert_requests) {
  FUNC_0(VAR_1);

  FUNC_6(&VAR_2->queuelist, &VAR_1);
  VAR_7->type->ops.insert_requests(VAR_9, &VAR_1, VAR_3);
 } else {
  FUNC_8(&VAR_8->lock);
  FUNC_2(VAR_9, VAR_2, VAR_3);
  FUNC_9(&VAR_8->lock);
 }

run:
 if (VAR_4)
  FUNC_4(VAR_9, VAR_5);
}
