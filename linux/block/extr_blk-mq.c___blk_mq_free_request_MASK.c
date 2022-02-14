
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct request {int internal_tag; int tag; struct blk_mq_hw_ctx* mq_hctx; struct blk_mq_ctx* mq_ctx; struct request_queue* q; } ;
struct blk_mq_hw_ctx {int sched_tags; int tags; } ;
struct blk_mq_ctx {int dummy; } ;


 int FUNC_0 (struct blk_mq_hw_ctx*,int ,struct blk_mq_ctx*,int const) ;
 int FUNC_1 (struct blk_mq_hw_ctx*) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (struct request_queue*) ;

__attribute__((used)) static void FUNC_4(struct request *VAR_0)
{
 struct request_queue *VAR_1 = VAR_0->q;
 struct blk_mq_ctx *VAR_2 = VAR_0->mq_ctx;
 struct blk_mq_hw_ctx *VAR_3 = VAR_0->mq_hctx;
 const int VAR_4 = VAR_0->internal_tag;

 FUNC_2(VAR_0);
 VAR_0->mq_hctx = ((void*)0);
 if (VAR_0->tag != -1)
  FUNC_0(VAR_3, VAR_3->tags, VAR_2, VAR_0->tag);
 if (VAR_4 != -1)
  FUNC_0(VAR_3, VAR_3->sched_tags, VAR_2, VAR_4);
 FUNC_1(VAR_3);
 FUNC_3(VAR_1);
}
