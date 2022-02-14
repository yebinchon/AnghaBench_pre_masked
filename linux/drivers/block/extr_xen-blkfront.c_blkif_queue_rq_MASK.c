
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct blkfront_ring_info {int ring_lock; int dev_info; int ring; } ;
struct blkfront_info {int nr_rings; struct blkfront_ring_info* rinfo; } ;
struct blk_mq_queue_data {int rq; } ;
struct blk_mq_hw_ctx {int queue_num; TYPE_1__* queue; } ;
typedef int blk_status_t ;
struct TYPE_2__ {struct blkfront_info* queuedata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct blk_mq_hw_ctx*) ;
 scalar_t__ FUNC_4 (int ,struct blkfront_ring_info*) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (struct blkfront_ring_info*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static blk_status_t FUNC_9(struct blk_mq_hw_ctx *VAR_3,
     const struct blk_mq_queue_data *VAR_4)
{
 unsigned long VAR_5;
 int VAR_6 = VAR_3->queue_num;
 struct blkfront_info *VAR_7 = VAR_3->queue->queuedata;
 struct blkfront_ring_info *VAR_8 = ((void*)0);

 FUNC_0(VAR_7->nr_rings <= VAR_6);
 VAR_8 = &VAR_7->rinfo[VAR_6];
 FUNC_2(VAR_4->rq);
 FUNC_7(&VAR_8->ring_lock, VAR_5);
 if (FUNC_1(&VAR_8->ring))
  goto out_busy;

 if (FUNC_5(VAR_4->rq, VAR_8->dev_info))
  goto out_err;

 if (FUNC_4(VAR_4->rq, VAR_8))
  goto out_busy;

 FUNC_6(VAR_8);
 FUNC_8(&VAR_8->ring_lock, VAR_5);
 return VAR_2;

out_err:
 FUNC_8(&VAR_8->ring_lock, VAR_5);
 return VAR_1;

out_busy:
 FUNC_3(VAR_3);
 FUNC_8(&VAR_8->ring_lock, VAR_5);
 return VAR_0;
}
