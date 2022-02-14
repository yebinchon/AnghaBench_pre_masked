
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pcd_unit {int rq_list; } ;
struct blk_mq_queue_data {TYPE_2__* rq; } ;
struct blk_mq_hw_ctx {TYPE_1__* queue; } ;
typedef int blk_status_t ;
struct TYPE_5__ {int queuelist; } ;
struct TYPE_4__ {struct pcd_unit* queuedata; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int *) ;
 int VAR_3 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static blk_status_t FUNC_6(struct blk_mq_hw_ctx *VAR_4,
     const struct blk_mq_queue_data *VAR_5)
{
 struct pcd_unit *VAR_6 = VAR_4->queue->queuedata;

 if (FUNC_3(VAR_5->rq) != VAR_2) {
  FUNC_0(VAR_5->rq);
  return VAR_0;
 }

 FUNC_4(&VAR_3);
 FUNC_1(&VAR_5->rq->queuelist, &VAR_6->rq_list);
 FUNC_2();
 FUNC_5(&VAR_3);

 return VAR_1;
}
