
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct blk_mq_hw_ctx {int type; } ;
struct blk_mq_ctx {int rq_merged; int * rq_lists; int lock; } ;
struct bio {int dummy; } ;
typedef enum hctx_type { ____Placeholder_hctx_type } hctx_type ;


 scalar_t__ FUNC_0 (struct request_queue*,int *,struct bio*,unsigned int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct request_queue *VAR_0,
     struct blk_mq_hw_ctx *VAR_1,
     struct blk_mq_ctx *VAR_2, struct bio *VAR_3,
     unsigned int VAR_4)
{
 enum hctx_type VAR_5 = VAR_1->type;

 FUNC_1(&VAR_2->lock);

 if (FUNC_0(VAR_0, &VAR_2->rq_lists[VAR_5], VAR_3, VAR_4)) {
  VAR_2->rq_merged++;
  return 1;
 }

 return 0;
}
