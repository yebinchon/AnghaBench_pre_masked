
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int queuelist; } ;
struct blk_mq_queue_data {struct request* rq; } ;
struct blk_mq_hw_ctx {TYPE_1__* queue; } ;
struct ace_device {int fsm_tasklet; int lock; int rq_list; } ;
typedef int blk_status_t ;
struct TYPE_2__ {struct ace_device* queuedata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct request*) ;
 scalar_t__ FUNC_1 (struct request*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static blk_status_t FUNC_6(struct blk_mq_hw_ctx *VAR_2,
     const struct blk_mq_queue_data *VAR_3)
{
 struct ace_device *VAR_4 = VAR_2->queue->queuedata;
 struct request *VAR_5 = VAR_3->rq;

 if (FUNC_1(VAR_5)) {
  FUNC_0(VAR_5);
  return VAR_0;
 }

 FUNC_3(&VAR_4->lock);
 FUNC_2(&VAR_5->queuelist, &VAR_4->rq_list);
 FUNC_4(&VAR_4->lock);

 FUNC_5(&VAR_4->fsm_tasklet);
 return VAR_1;
}
