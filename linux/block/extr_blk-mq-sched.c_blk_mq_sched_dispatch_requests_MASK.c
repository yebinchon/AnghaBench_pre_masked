
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {struct elevator_queue* elevator; } ;
struct elevator_queue {TYPE_2__* type; } ;
struct blk_mq_hw_ctx {scalar_t__ dispatch_busy; int lock; int dispatch; int run; struct request_queue* queue; } ;
struct TYPE_3__ {scalar_t__ dispatch_request; } ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct request_queue*,int *,int) ;
 int FUNC_2 (struct blk_mq_hw_ctx*) ;
 int FUNC_3 (struct blk_mq_hw_ctx*) ;
 int FUNC_4 (struct blk_mq_hw_ctx*,int *) ;
 scalar_t__ FUNC_5 (struct blk_mq_hw_ctx*) ;
 int FUNC_6 (struct blk_mq_hw_ctx*) ;
 scalar_t__ FUNC_7 (struct request_queue*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;
 int VAR_0 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int) ;

void FUNC_14(struct blk_mq_hw_ctx *VAR_1)
{
 struct request_queue *VAR_2 = VAR_1->queue;
 struct elevator_queue *VAR_3 = VAR_2->elevator;
 const bool VAR_4 = VAR_3 && VAR_3->type->ops.dispatch_request;
 FUNC_0(VAR_0);


 if (FUNC_13(FUNC_5(VAR_1) || FUNC_7(VAR_2)))
  return;

 VAR_1->run++;





 if (!FUNC_9(&VAR_1->dispatch)) {
  FUNC_11(&VAR_1->lock);
  if (!FUNC_8(&VAR_1->dispatch))
   FUNC_10(&VAR_1->dispatch, &VAR_0);
  FUNC_12(&VAR_1->lock);
 }
 if (!FUNC_8(&VAR_0)) {
  FUNC_6(VAR_1);
  if (FUNC_1(VAR_2, &VAR_0, 0)) {
   if (VAR_4)
    FUNC_3(VAR_1);
   else
    FUNC_2(VAR_1);
  }
 } else if (VAR_4) {
  FUNC_3(VAR_1);
 } else if (VAR_1->dispatch_busy) {

  FUNC_2(VAR_1);
 } else {
  FUNC_4(VAR_1, &VAR_0);
  FUNC_1(VAR_2, &VAR_0, 0);
 }
}
