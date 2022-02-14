
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbitmap {int dummy; } ;
struct flush_busy_ctx_data {int list; struct blk_mq_hw_ctx* hctx; } ;
struct blk_mq_hw_ctx {int type; struct blk_mq_ctx** ctxs; } ;
struct blk_mq_ctx {int lock; int * rq_lists; } ;
typedef enum hctx_type { ____Placeholder_hctx_type } hctx_type ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct sbitmap*,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static bool FUNC_4(struct sbitmap *VAR_0, unsigned int VAR_1, void *VAR_2)
{
 struct flush_busy_ctx_data *VAR_3 = VAR_2;
 struct blk_mq_hw_ctx *VAR_4 = VAR_3->hctx;
 struct blk_mq_ctx *VAR_5 = VAR_4->ctxs[VAR_1];
 enum hctx_type VAR_6 = VAR_4->type;

 FUNC_2(&VAR_5->lock);
 FUNC_0(&VAR_5->rq_lists[VAR_6], VAR_3->list);
 FUNC_1(VAR_0, VAR_1);
 FUNC_3(&VAR_5->lock);
 return 1;
}
