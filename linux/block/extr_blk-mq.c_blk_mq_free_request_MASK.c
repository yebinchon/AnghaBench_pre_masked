
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct request_queue {int backing_dev_info; struct elevator_queue* elevator; } ;
struct TYPE_8__ {TYPE_3__* icq; } ;
struct request {int rq_flags; int ref; int state; TYPE_4__ elv; struct blk_mq_hw_ctx* mq_hctx; struct blk_mq_ctx* mq_ctx; struct request_queue* q; } ;
struct elevator_queue {TYPE_2__* type; } ;
struct blk_mq_hw_ctx {int nr_active; } ;
struct blk_mq_ctx {int * rq_completed; } ;
struct TYPE_7__ {int ioc; } ;
struct TYPE_5__ {int (* finish_request ) (struct request*) ;} ;
struct TYPE_6__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct request*) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *) ;
 size_t FUNC_7 (struct request*) ;
 int FUNC_8 (struct request_queue*,struct request*) ;
 int FUNC_9 (struct request*) ;
 scalar_t__ FUNC_10 (int) ;

void FUNC_11(struct request *VAR_4)
{
 struct request_queue *VAR_5 = VAR_4->q;
 struct elevator_queue *VAR_6 = VAR_5->elevator;
 struct blk_mq_ctx *VAR_7 = VAR_4->mq_ctx;
 struct blk_mq_hw_ctx *VAR_8 = VAR_4->mq_hctx;

 if (VAR_4->rq_flags & VAR_1) {
  if (VAR_6 && VAR_6->type->ops.finish_request)
   VAR_6->type->ops.finish_request(VAR_4);
  if (VAR_4->elv.icq) {
   FUNC_5(VAR_4->elv.icq->ioc);
   VAR_4->elv.icq = ((void*)0);
  }
 }

 VAR_7->rq_completed[FUNC_7(VAR_4)]++;
 if (VAR_4->rq_flags & VAR_2)
  FUNC_2(&VAR_8->nr_active);

 if (FUNC_10(VAR_3 && !FUNC_3(VAR_4)))
  FUNC_4(VAR_5->backing_dev_info);

 FUNC_8(VAR_5, VAR_4);

 FUNC_0(VAR_4->state, VAR_0);
 if (FUNC_6(&VAR_4->ref))
  FUNC_1(VAR_4);
}
