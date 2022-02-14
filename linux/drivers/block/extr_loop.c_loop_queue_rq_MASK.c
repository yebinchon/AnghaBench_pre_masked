
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct request {TYPE_3__* bio; TYPE_1__* q; } ;
struct loop_device {scalar_t__ lo_state; int use_dio; int worker; } ;
struct loop_cmd {int use_aio; int work; int * css; } ;
struct blk_mq_queue_data {struct request* rq; } ;
struct blk_mq_hw_ctx {int dummy; } ;
typedef int blk_status_t ;
struct TYPE_6__ {scalar_t__ bi_blkg; } ;
struct TYPE_5__ {int css; } ;
struct TYPE_4__ {struct loop_device* queuedata; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;



 TYPE_2__* FUNC_0 (TYPE_3__*) ;
 struct loop_cmd* FUNC_1 (struct request*) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct request*) ;

__attribute__((used)) static blk_status_t FUNC_6(struct blk_mq_hw_ctx *VAR_3,
  const struct blk_mq_queue_data *VAR_4)
{
 struct request *VAR_5 = VAR_4->rq;
 struct loop_cmd *VAR_6 = FUNC_1(VAR_5);
 struct loop_device *VAR_7 = VAR_5->q->queuedata;

 FUNC_2(VAR_5);

 if (VAR_7->lo_state != VAR_2)
  return VAR_0;

 switch (FUNC_5(VAR_5)) {
 case 129:
 case 130:
 case 128:
  VAR_6->use_aio = 0;
  break;
 default:
  VAR_6->use_aio = VAR_7->use_dio;
  break;
 }
  VAR_6->css = ((void*)0);
 FUNC_4(&VAR_7->worker, &VAR_6->work);

 return VAR_1;
}
