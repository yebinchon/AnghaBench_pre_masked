
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {struct elevator_queue* elevator; } ;
struct elevator_queue {TYPE_2__* type; } ;
struct blk_mq_hw_ctx {int type; int flags; } ;
struct blk_mq_ctx {int lock; int * rq_lists; } ;
struct bio {int bi_opf; } ;
typedef enum hctx_type { ____Placeholder_hctx_type } hctx_type ;
struct TYPE_3__ {int (* bio_merge ) (struct blk_mq_hw_ctx*,struct bio*,unsigned int) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct request_queue*,struct blk_mq_hw_ctx*,struct blk_mq_ctx*,struct bio*,unsigned int) ;
 struct blk_mq_ctx* FUNC_1 (struct request_queue*) ;
 struct blk_mq_hw_ctx* FUNC_2 (struct request_queue*,int ,struct blk_mq_ctx*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct blk_mq_hw_ctx*,struct bio*,unsigned int) ;

bool FUNC_7(struct request_queue *VAR_1, struct bio *VAR_2,
  unsigned int VAR_3)
{
 struct elevator_queue *VAR_4 = VAR_1->elevator;
 struct blk_mq_ctx *VAR_5 = FUNC_1(VAR_1);
 struct blk_mq_hw_ctx *VAR_6 = FUNC_2(VAR_1, VAR_2->bi_opf, VAR_5);
 bool VAR_7 = 0;
 enum hctx_type VAR_8;

 if (VAR_4 && VAR_4->type->ops.bio_merge)
  return VAR_4->type->ops.bio_merge(VAR_6, VAR_2, VAR_3);

 VAR_8 = VAR_6->type;
 if ((VAR_6->flags & VAR_0) &&
   !FUNC_3(&VAR_5->rq_lists[VAR_8])) {

  FUNC_4(&VAR_5->lock);
  VAR_7 = FUNC_0(VAR_1, VAR_6, VAR_5, VAR_2, VAR_3);
  FUNC_5(&VAR_5->lock);
 }

 return VAR_7;
}
