
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct blk_mq_queue_data {int rq; } ;
struct blk_mq_hw_ctx {TYPE_1__* queue; } ;
struct TYPE_6__ {int lock; } ;
typedef TYPE_2__ ide_hwif_t ;
struct TYPE_7__ {scalar_t__ sense_rq_active; TYPE_2__* hwif; } ;
typedef TYPE_3__ ide_drive_t ;
typedef int blk_status_t ;
struct TYPE_5__ {TYPE_3__* queuedata; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

blk_status_t FUNC_4(struct blk_mq_hw_ctx *VAR_1,
     const struct blk_mq_queue_data *VAR_2)
{
 ide_drive_t *VAR_3 = VAR_1->queue->queuedata;
 ide_hwif_t *VAR_4 = VAR_3->hwif;

 FUNC_2(&VAR_4->lock);
 if (VAR_3->sense_rq_active) {
  FUNC_3(&VAR_4->lock);
  return VAR_0;
 }
 FUNC_3(&VAR_4->lock);

 FUNC_0(VAR_2->rq);
 return FUNC_1(VAR_3, VAR_2->rq, 0);
}
