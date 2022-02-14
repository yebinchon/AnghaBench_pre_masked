
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_gpu_fence_driver {int context; int lock; } ;
struct virtio_gpu_fence {int f; struct virtio_gpu_fence_driver* drv; } ;
struct virtio_gpu_device {struct virtio_gpu_fence_driver fence_drv; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *,int ,int ) ;
 struct virtio_gpu_fence* FUNC_1 (int,int ) ;
 int VAR_1 ;

struct virtio_gpu_fence *FUNC_2(struct virtio_gpu_device *VAR_2)
{
 struct virtio_gpu_fence_driver *VAR_3 = &VAR_2->fence_drv;
 struct virtio_gpu_fence *VAR_4 = FUNC_1(sizeof(struct virtio_gpu_fence),
       VAR_0);
 if (!VAR_4)
  return VAR_4;

 VAR_4->drv = VAR_3;





 FUNC_0(&VAR_4->f, &VAR_1, &VAR_3->lock, VAR_3->context, 0);

 return VAR_4;
}
