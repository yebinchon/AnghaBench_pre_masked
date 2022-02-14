
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pd_unit {int rq_list; } ;
struct blk_mq_queue_data {TYPE_2__* rq; } ;
struct blk_mq_hw_ctx {TYPE_1__* queue; } ;
typedef int blk_status_t ;
struct TYPE_5__ {int queuelist; } ;
struct TYPE_4__ {struct pd_unit* queuedata; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int *) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static blk_status_t FUNC_5(struct blk_mq_hw_ctx *VAR_3,
    const struct blk_mq_queue_data *VAR_4)
{
 struct pd_unit *VAR_5 = VAR_3->queue->queuedata;

 FUNC_3(&VAR_1);
 if (!VAR_2) {
  VAR_2 = VAR_4->rq;
  FUNC_0(VAR_2);
 } else
  FUNC_1(&VAR_4->rq->queuelist, &VAR_5->rq_list);
 FUNC_4(&VAR_1);

 FUNC_2();
 return VAR_0;
}
