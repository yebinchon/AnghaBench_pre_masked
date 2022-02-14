
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int dummy; } ;
struct mtip_cmd {int dummy; } ;
struct driver_data {int dummy; } ;
struct blk_mq_queue_data {struct request* rq; } ;
struct blk_mq_hw_ctx {TYPE_1__* queue; } ;
typedef int blk_status_t ;
struct TYPE_2__ {struct driver_data* queuedata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mtip_cmd* FUNC_0 (struct request*) ;
 int FUNC_1 (struct request*) ;
 scalar_t__ FUNC_2 (struct request*) ;
 scalar_t__ FUNC_3 (struct driver_data*) ;
 scalar_t__ FUNC_4 (struct driver_data*,struct request*) ;
 int FUNC_5 (struct blk_mq_hw_ctx*,struct request*) ;
 int FUNC_6 (struct driver_data*,struct request*,struct mtip_cmd*,struct blk_mq_hw_ctx*) ;
 int FUNC_7 (struct blk_mq_hw_ctx*,struct request*) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static blk_status_t FUNC_9(struct blk_mq_hw_ctx *VAR_3,
    const struct blk_mq_queue_data *VAR_4)
{
 struct driver_data *VAR_5 = VAR_3->queue->queuedata;
 struct request *VAR_6 = VAR_4->rq;
 struct mtip_cmd *VAR_7 = FUNC_0(VAR_6);

 if (FUNC_2(VAR_6))
  return FUNC_7(VAR_3, VAR_6);

 if (FUNC_8(FUNC_5(VAR_3, VAR_6)))
  return VAR_0;

 if (FUNC_3(VAR_5) || FUNC_4(VAR_5, VAR_6))
  return VAR_1;

 FUNC_1(VAR_6);

 FUNC_6(VAR_5, VAR_6, VAR_7, VAR_3);
 return VAR_2;
}
