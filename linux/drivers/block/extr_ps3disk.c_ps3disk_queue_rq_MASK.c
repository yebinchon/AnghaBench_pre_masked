
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {struct ps3_storage_device* queuedata; } ;
struct ps3disk_private {int lock; } ;
struct ps3_storage_device {int sbd; } ;
struct blk_mq_queue_data {int rq; } ;
struct blk_mq_hw_ctx {struct request_queue* queue; } ;
typedef int blk_status_t ;


 int FUNC_0 (int ) ;
 struct ps3disk_private* FUNC_1 (int *) ;
 int FUNC_2 (struct ps3_storage_device*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static blk_status_t FUNC_5(struct blk_mq_hw_ctx *VAR_0,
         const struct blk_mq_queue_data *VAR_1)
{
 struct request_queue *VAR_2 = VAR_0->queue;
 struct ps3_storage_device *VAR_3 = VAR_2->queuedata;
 struct ps3disk_private *VAR_4 = FUNC_1(&VAR_3->sbd);
 blk_status_t VAR_5;

 FUNC_0(VAR_1->rq);

 FUNC_3(&VAR_4->lock);
 VAR_5 = FUNC_2(VAR_3, VAR_1->rq);
 FUNC_4(&VAR_4->lock);

 return VAR_5;
}
