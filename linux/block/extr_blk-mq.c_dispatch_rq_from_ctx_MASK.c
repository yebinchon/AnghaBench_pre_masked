
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sbitmap {int dummy; } ;
struct dispatch_rq_data {TYPE_1__* rq; struct blk_mq_hw_ctx* hctx; } ;
struct blk_mq_hw_ctx {int type; struct blk_mq_ctx** ctxs; } ;
struct blk_mq_ctx {int lock; TYPE_2__* rq_lists; } ;
typedef enum hctx_type { ____Placeholder_hctx_type } hctx_type ;
struct TYPE_4__ {int next; } ;
struct TYPE_3__ {int queuelist; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (struct sbitmap*,unsigned int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static bool FUNC_6(struct sbitmap *VAR_0, unsigned int VAR_1,
  void *VAR_2)
{
 struct dispatch_rq_data *VAR_3 = VAR_2;
 struct blk_mq_hw_ctx *VAR_4 = VAR_3->hctx;
 struct blk_mq_ctx *VAR_5 = VAR_4->ctxs[VAR_1];
 enum hctx_type VAR_6 = VAR_4->type;

 FUNC_4(&VAR_5->lock);
 if (!FUNC_1(&VAR_5->rq_lists[VAR_6])) {
  VAR_3->rq = FUNC_2(VAR_5->rq_lists[VAR_6].next);
  FUNC_0(&VAR_3->rq->queuelist);
  if (FUNC_1(&VAR_5->rq_lists[VAR_6]))
   FUNC_3(VAR_0, VAR_1);
 }
 FUNC_5(&VAR_5->lock);

 return !VAR_3->rq;
}
