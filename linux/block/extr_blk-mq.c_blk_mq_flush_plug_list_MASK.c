
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct request {int queuelist; struct blk_mq_hw_ctx* mq_hctx; struct blk_mq_ctx* mq_ctx; struct request_queue* q; } ;
struct blk_plug {int rq_count; scalar_t__ multiple_queues; int mq_list; } ;
struct blk_mq_hw_ctx {int dummy; } ;
struct blk_mq_ctx {int dummy; } ;
struct TYPE_9__ {int next; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__) ;
 int FUNC_2 (struct blk_mq_hw_ctx*,struct blk_mq_ctx*,TYPE_1__*,int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 struct request* FUNC_6 (int ) ;
 int FUNC_7 (int *,TYPE_1__*,int ) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_9 (struct request_queue*,unsigned int,int) ;

void FUNC_10(struct blk_plug *VAR_3, bool VAR_4)
{
 struct blk_mq_hw_ctx *VAR_5;
 struct blk_mq_ctx *VAR_6;
 struct request_queue *VAR_7;
 struct request *VAR_8;
 FUNC_1(VAR_0);
 FUNC_1(VAR_2);
 unsigned int VAR_9;

 FUNC_8(&VAR_3->mq_list, &VAR_0);

 if (VAR_3->rq_count > 2 && VAR_3->multiple_queues)
  FUNC_7(((void*)0), &VAR_0, VAR_1);

 VAR_3->rq_count = 0;

 VAR_7 = ((void*)0);
 VAR_5 = ((void*)0);
 VAR_6 = ((void*)0);
 VAR_9 = 0;

 while (!FUNC_5(&VAR_0)) {
  VAR_8 = FUNC_6(VAR_0.next);
  FUNC_4(&VAR_8->queuelist);
  FUNC_0(!VAR_8->q);
  if (VAR_8->mq_hctx != VAR_5 || VAR_8->mq_ctx != VAR_6) {
   if (VAR_5) {
    FUNC_9(VAR_7, VAR_9, !VAR_4);
    FUNC_2(VAR_5, VAR_6,
        &VAR_2,
        VAR_4);
   }

   VAR_7 = VAR_8->q;
   VAR_6 = VAR_8->mq_ctx;
   VAR_5 = VAR_8->mq_hctx;
   VAR_9 = 0;
  }

  VAR_9++;
  FUNC_3(&VAR_8->queuelist, &VAR_2);
 }





 if (VAR_5) {
  FUNC_9(VAR_7, VAR_9, !VAR_4);
  FUNC_2(VAR_5, VAR_6, &VAR_2,
      VAR_4);
 }
}
