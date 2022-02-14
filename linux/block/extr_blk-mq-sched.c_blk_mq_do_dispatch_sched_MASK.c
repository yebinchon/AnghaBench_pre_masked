
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {struct elevator_queue* elevator; } ;
struct request {int queuelist; } ;
struct elevator_queue {TYPE_2__* type; } ;
struct blk_mq_hw_ctx {struct request_queue* queue; } ;
struct TYPE_3__ {struct request* (* dispatch_request ) (struct blk_mq_hw_ctx*) ;int (* has_work ) (struct blk_mq_hw_ctx*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct request_queue*,int *,int) ;
 int FUNC_2 (struct blk_mq_hw_ctx*) ;
 int FUNC_3 (struct blk_mq_hw_ctx*) ;
 int FUNC_4 (int *,int *) ;
 int VAR_0 ;
 int FUNC_5 (struct blk_mq_hw_ctx*) ;
 struct request* FUNC_6 (struct blk_mq_hw_ctx*) ;

__attribute__((used)) static void FUNC_7(struct blk_mq_hw_ctx *VAR_1)
{
 struct request_queue *VAR_2 = VAR_1->queue;
 struct elevator_queue *VAR_3 = VAR_2->elevator;
 FUNC_0(VAR_0);

 do {
  struct request *VAR_4;

  if (VAR_3->type->ops.has_work && !VAR_3->type->ops.has_work(VAR_1))
   break;

  if (!FUNC_2(VAR_1))
   break;

  VAR_4 = VAR_3->type->ops.dispatch_request(VAR_1);
  if (!VAR_4) {
   FUNC_3(VAR_1);
   break;
  }






  FUNC_4(&VAR_4->queuelist, &VAR_0);
 } while (FUNC_1(VAR_2, &VAR_0, 1));
}
