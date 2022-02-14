
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct request_queue {struct elevator_queue* elevator; } ;
struct TYPE_6__ {int * icq; } ;
struct request {int rq_flags; TYPE_1__ elv; } ;
struct elevator_queue {TYPE_3__* type; } ;
struct blk_mq_alloc_data {int cmd_flags; int flags; TYPE_4__* hctx; int * ctx; struct request_queue* q; } ;
struct bio {int dummy; } ;
struct TYPE_9__ {int queued; } ;
struct TYPE_7__ {int (* prepare_request ) (struct request*,struct bio*) ;int (* limit_depth ) (int,struct blk_mq_alloc_data*) ;} ;
struct TYPE_8__ {TYPE_2__ ops; scalar_t__ icq_cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (struct request_queue*) ;
 unsigned int FUNC_1 (struct blk_mq_alloc_data*) ;
 TYPE_4__* FUNC_2 (struct request_queue*,int,int *) ;
 struct request* FUNC_3 (struct blk_mq_alloc_data*,unsigned int,int,int ) ;
 int FUNC_4 (struct request*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (struct request_queue*) ;
 int FUNC_7 (struct request_queue*) ;
 scalar_t__ FUNC_8 (struct request_queue*) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int,struct blk_mq_alloc_data*) ;
 int FUNC_13 (struct request*,struct bio*) ;

__attribute__((used)) static struct request *FUNC_14(struct request_queue *VAR_6,
       struct bio *VAR_7,
       struct blk_mq_alloc_data *VAR_8)
{
 struct elevator_queue *VAR_9 = VAR_6->elevator;
 struct request *VAR_10;
 unsigned int VAR_11;
 bool VAR_12 = 0;
 u64 VAR_13 = 0;

 FUNC_6(VAR_6);


 if (FUNC_8(VAR_6))
  VAR_13 = FUNC_9();

 VAR_8->q = VAR_6;
 if (FUNC_10(!VAR_8->ctx)) {
  VAR_8->ctx = FUNC_0(VAR_6);
  VAR_12 = 1;
 }
 if (FUNC_10(!VAR_8->hctx))
  VAR_8->hctx = FUNC_2(VAR_6, VAR_8->cmd_flags,
      VAR_8->ctx);
 if (VAR_8->cmd_flags & VAR_4)
  VAR_8->flags |= VAR_1;

 if (VAR_9) {
  VAR_8->flags |= VAR_0;






  if (!FUNC_11(VAR_8->cmd_flags) &&
      VAR_9->type->ops.limit_depth &&
      !(VAR_8->flags & VAR_2))
   VAR_9->type->ops.limit_depth(VAR_8->cmd_flags, VAR_8);
 } else {
  FUNC_5(VAR_8->hctx);
 }

 VAR_11 = FUNC_1(VAR_8);
 if (VAR_11 == VAR_3) {
  if (VAR_12)
   VAR_8->ctx = ((void*)0);
  FUNC_7(VAR_6);
  return ((void*)0);
 }

 VAR_10 = FUNC_3(VAR_8, VAR_11, VAR_8->cmd_flags, VAR_13);
 if (!FUNC_11(VAR_8->cmd_flags)) {
  VAR_10->elv.icq = ((void*)0);
  if (VAR_9 && VAR_9->type->ops.prepare_request) {
   if (VAR_9->type->icq_cache)
    FUNC_4(VAR_10);

   VAR_9->type->ops.prepare_request(VAR_10, VAR_7);
   VAR_10->rq_flags |= VAR_5;
  }
 }
 VAR_8->hctx->queued++;
 return VAR_10;
}
