
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virtqueue {TYPE_1__* vdev; } ;
struct TYPE_4__ {int dequeue_work; } ;
struct virtio_gpu_device {TYPE_2__ ctrlq; } ;
struct drm_device {struct virtio_gpu_device* dev_private; } ;
struct TYPE_3__ {struct drm_device* priv; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct virtqueue *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->vdev->priv;
 struct virtio_gpu_device *VAR_2 = VAR_1->dev_private;

 FUNC_0(&VAR_2->ctrlq.dequeue_work);
}
