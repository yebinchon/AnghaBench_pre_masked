
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_gpu_object_params {int dummy; } ;
struct virtio_gpu_object {int dummy; } ;
struct virtio_gpu_fence {int dummy; } ;
struct virtio_gpu_device {int dummy; } ;
struct drm_device {struct virtio_gpu_device* dev_private; } ;


 struct virtio_gpu_object* FUNC_0 (int) ;
 int FUNC_1 (struct virtio_gpu_device*,struct virtio_gpu_object_params*,struct virtio_gpu_object**,struct virtio_gpu_fence*) ;

struct virtio_gpu_object*
FUNC_2(struct drm_device *VAR_0,
   struct virtio_gpu_object_params *VAR_1,
   struct virtio_gpu_fence *VAR_2)
{
 struct virtio_gpu_device *VAR_3 = VAR_0->dev_private;
 struct virtio_gpu_object *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_1, &VAR_4, VAR_2);
 if (VAR_5)
  return FUNC_0(VAR_5);

 return VAR_4;
}
