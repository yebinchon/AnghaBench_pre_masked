
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {TYPE_1__* mq_ops; } ;
struct request {struct request_queue* q; } ;
struct blk_mq_queue_data {int last; struct request* rq; } ;
struct blk_mq_hw_ctx {int dummy; } ;
typedef int blk_status_t ;
typedef int blk_qc_t ;
struct TYPE_2__ {int (* queue_rq ) (struct blk_mq_hw_ctx*,struct blk_mq_queue_data*) ;} ;


 int VAR_0 ;



 int FUNC_0 (struct request*) ;
 int FUNC_1 (struct blk_mq_hw_ctx*,int) ;
 int FUNC_2 (struct blk_mq_hw_ctx*,struct request*) ;
 int FUNC_3 (struct blk_mq_hw_ctx*,struct blk_mq_queue_data*) ;

__attribute__((used)) static blk_status_t FUNC_4(struct blk_mq_hw_ctx *VAR_1,
         struct request *VAR_2,
         blk_qc_t *VAR_3, bool VAR_4)
{
 struct request_queue *VAR_5 = VAR_2->q;
 struct blk_mq_queue_data VAR_6 = {
  .rq = VAR_2,
  .last = VAR_4,
 };
 blk_qc_t VAR_7;
 blk_status_t VAR_8;

 VAR_7 = FUNC_2(VAR_1, VAR_2);






 VAR_8 = VAR_5->mq_ops->queue_rq(VAR_1, &VAR_6);
 switch (VAR_8) {
 case 129:
  FUNC_1(VAR_1, 0);
  *VAR_3 = VAR_7;
  break;
 case 128:
 case 130:
  FUNC_1(VAR_1, 1);
  FUNC_0(VAR_2);
  break;
 default:
  FUNC_1(VAR_1, 0);
  *VAR_3 = VAR_0;
  break;
 }

 return VAR_8;
}
