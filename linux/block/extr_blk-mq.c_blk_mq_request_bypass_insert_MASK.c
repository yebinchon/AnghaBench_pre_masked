
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int queuelist; struct blk_mq_hw_ctx* mq_hctx; } ;
struct blk_mq_hw_ctx {int lock; int dispatch; } ;


 int FUNC_0 (struct blk_mq_hw_ctx*,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct request *VAR_0, bool VAR_1)
{
 struct blk_mq_hw_ctx *VAR_2 = VAR_0->mq_hctx;

 FUNC_2(&VAR_2->lock);
 FUNC_1(&VAR_0->queuelist, &VAR_2->dispatch);
 FUNC_3(&VAR_2->lock);

 if (VAR_1)
  FUNC_0(VAR_2, 0);
}
