
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int queuelist; struct blk_mq_ctx* mq_ctx; } ;
struct blk_mq_hw_ctx {int type; int queue; } ;
struct blk_mq_ctx {int * rq_lists; int lock; } ;
typedef enum hctx_type { ____Placeholder_hctx_type } hctx_type ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct request*) ;

__attribute__((used)) static inline void FUNC_4(struct blk_mq_hw_ctx *VAR_0,
         struct request *VAR_1,
         bool VAR_2)
{
 struct blk_mq_ctx *VAR_3 = VAR_1->mq_ctx;
 enum hctx_type VAR_4 = VAR_0->type;

 FUNC_2(&VAR_3->lock);

 FUNC_3(VAR_0->queue, VAR_1);

 if (VAR_2)
  FUNC_0(&VAR_1->queuelist, &VAR_3->rq_lists[VAR_4]);
 else
  FUNC_1(&VAR_1->queuelist, &VAR_3->rq_lists[VAR_4]);
}
