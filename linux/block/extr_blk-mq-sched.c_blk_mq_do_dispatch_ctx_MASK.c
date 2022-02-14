
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct request {int mq_ctx; int queuelist; } ;
struct blk_mq_hw_ctx {int dispatch_from; int ctx_map; struct request_queue* queue; } ;
struct blk_mq_ctx {int dummy; } ;


 int FUNC_0 (int ) ;
 struct blk_mq_ctx* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct blk_mq_ctx*) ;
 struct request* FUNC_3 (struct blk_mq_hw_ctx*,struct blk_mq_ctx*) ;
 scalar_t__ FUNC_4 (struct request_queue*,int *,int) ;
 int FUNC_5 (struct blk_mq_hw_ctx*) ;
 struct blk_mq_ctx* FUNC_6 (struct blk_mq_hw_ctx*,int ) ;
 int FUNC_7 (struct blk_mq_hw_ctx*) ;
 int FUNC_8 (int *,int *) ;
 int VAR_0 ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct blk_mq_hw_ctx *VAR_1)
{
 struct request_queue *VAR_2 = VAR_1->queue;
 FUNC_0(VAR_0);
 struct blk_mq_ctx *VAR_3 = FUNC_1(VAR_1->dispatch_from);

 do {
  struct request *VAR_4;

  if (!FUNC_9(&VAR_1->ctx_map))
   break;

  if (!FUNC_5(VAR_1))
   break;

  VAR_4 = FUNC_3(VAR_1, VAR_3);
  if (!VAR_4) {
   FUNC_7(VAR_1);
   break;
  }






  FUNC_8(&VAR_4->queuelist, &VAR_0);


  VAR_3 = FUNC_6(VAR_1, VAR_4->mq_ctx);

 } while (FUNC_4(VAR_2, &VAR_0, 1));

 FUNC_2(VAR_1->dispatch_from, VAR_3);
}
