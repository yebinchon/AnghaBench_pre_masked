
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_blk_vq {int vq; int lock; } ;
struct virtio_blk {struct virtio_blk_vq* vqs; } ;
struct blk_mq_hw_ctx {size_t queue_num; TYPE_1__* queue; } ;
struct TYPE_2__ {struct virtio_blk* queuedata; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct blk_mq_hw_ctx *VAR_0)
{
 struct virtio_blk *VAR_1 = VAR_0->queue->queuedata;
 struct virtio_blk_vq *VAR_2 = &VAR_1->vqs[VAR_0->queue_num];
 bool VAR_3;

 FUNC_0(&VAR_2->lock);
 VAR_3 = FUNC_2(VAR_2->vq);
 FUNC_1(&VAR_2->lock);

 if (VAR_3)
  FUNC_3(VAR_2->vq);
}
