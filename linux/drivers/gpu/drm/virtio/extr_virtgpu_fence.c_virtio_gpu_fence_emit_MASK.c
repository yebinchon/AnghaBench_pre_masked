
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct virtio_gpu_fence_driver {int lock; int fences; scalar_t__ sync_seq; } ;
struct TYPE_3__ {scalar_t__ seqno; } ;
struct virtio_gpu_fence {TYPE_1__ f; int node; } ;
struct virtio_gpu_device {struct virtio_gpu_fence_driver fence_drv; } ;
struct virtio_gpu_ctrl_hdr {int fence_id; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (TYPE_1__*) ;

void FUNC_7(struct virtio_gpu_device *VAR_1,
     struct virtio_gpu_ctrl_hdr *VAR_2,
     struct virtio_gpu_fence *VAR_3)
{
 struct virtio_gpu_fence_driver *VAR_4 = &VAR_1->fence_drv;
 unsigned long VAR_5;

 FUNC_4(&VAR_4->lock, VAR_5);
 VAR_3->f.seqno = ++VAR_4->sync_seq;
 FUNC_2(&VAR_3->f);
 FUNC_3(&VAR_3->node, &VAR_4->fences);
 FUNC_5(&VAR_4->lock, VAR_5);

 FUNC_6(&VAR_3->f);

 VAR_2->flags |= FUNC_0(VAR_0);
 VAR_2->fence_id = FUNC_1(VAR_3->f.seqno);
}
