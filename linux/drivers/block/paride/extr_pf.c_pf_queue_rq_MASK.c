
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pf_unit {int rq_list; } ;
struct blk_mq_queue_data {TYPE_2__* rq; } ;
struct blk_mq_hw_ctx {TYPE_1__* queue; } ;
typedef int blk_status_t ;
struct TYPE_4__ {int queuelist; } ;
struct TYPE_3__ {struct pf_unit* queuedata; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static blk_status_t FUNC_4(struct blk_mq_hw_ctx *VAR_2,
    const struct blk_mq_queue_data *VAR_3)
{
 struct pf_unit *VAR_4 = VAR_2->queue->queuedata;

 FUNC_2(&VAR_1);
 FUNC_0(&VAR_3->rq->queuelist, &VAR_4->rq_list);
 FUNC_1();
 FUNC_3(&VAR_1);

 return VAR_0;
}
