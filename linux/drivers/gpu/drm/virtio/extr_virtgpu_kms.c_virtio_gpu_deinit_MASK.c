
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int dequeue_work; } ;
struct TYPE_6__ {int dequeue_work; } ;
struct virtio_gpu_device {int vqs_ready; struct virtio_gpu_device* capsets; TYPE_4__* vdev; int config_changed_work; TYPE_2__ cursorq; TYPE_1__ ctrlq; } ;
struct drm_device {struct virtio_gpu_device* dev_private; } ;
struct TYPE_9__ {TYPE_3__* config; } ;
struct TYPE_8__ {int (* del_vqs ) (TYPE_4__*) ;int (* reset ) (TYPE_4__*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct virtio_gpu_device*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (struct virtio_gpu_device*) ;
 int FUNC_5 (struct virtio_gpu_device*) ;
 int FUNC_6 (struct virtio_gpu_device*) ;
 int FUNC_7 (struct virtio_gpu_device*) ;

void FUNC_8(struct drm_device *VAR_0)
{
 struct virtio_gpu_device *VAR_1 = VAR_0->dev_private;

 VAR_1->vqs_ready = 0;
 FUNC_0(&VAR_1->ctrlq.dequeue_work);
 FUNC_0(&VAR_1->cursorq.dequeue_work);
 FUNC_0(&VAR_1->config_changed_work);
 VAR_1->vdev->config->reset(VAR_1->vdev);
 VAR_1->vdev->config->del_vqs(VAR_1->vdev);

 FUNC_6(VAR_1);
 FUNC_7(VAR_1);
 FUNC_5(VAR_1);
 FUNC_4(VAR_1);
 FUNC_1(VAR_1->capsets);
 FUNC_1(VAR_1);
}
