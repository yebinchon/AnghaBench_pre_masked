
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {int unused_hctx_lock; int unused_hctx_list; } ;
struct blk_mq_tag_set {TYPE_2__* ops; } ;
struct blk_mq_hw_ctx {int hctx_list; TYPE_1__* fq; } ;
struct TYPE_4__ {int (* exit_hctx ) (struct blk_mq_hw_ctx*,unsigned int) ;int (* exit_request ) (struct blk_mq_tag_set*,int ,unsigned int) ;} ;
struct TYPE_3__ {int flush_rq; } ;


 scalar_t__ FUNC_0 (struct blk_mq_hw_ctx*) ;
 int FUNC_1 (struct blk_mq_hw_ctx*) ;
 int FUNC_2 (struct blk_mq_hw_ctx*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct blk_mq_tag_set*,int ,unsigned int) ;
 int FUNC_7 (struct blk_mq_hw_ctx*,unsigned int) ;

__attribute__((used)) static void FUNC_8(struct request_queue *VAR_0,
  struct blk_mq_tag_set *VAR_1,
  struct blk_mq_hw_ctx *VAR_2, unsigned int VAR_3)
{
 if (FUNC_0(VAR_2))
  FUNC_2(VAR_2);

 if (VAR_1->ops->exit_request)
  VAR_1->ops->exit_request(VAR_1, VAR_2->fq->flush_rq, VAR_3);

 if (VAR_1->ops->exit_hctx)
  VAR_1->ops->exit_hctx(VAR_2, VAR_3);

 FUNC_1(VAR_2);

 FUNC_4(&VAR_0->unused_hctx_lock);
 FUNC_3(&VAR_2->hctx_list, &VAR_0->unused_hctx_list);
 FUNC_5(&VAR_0->unused_hctx_lock);
}
