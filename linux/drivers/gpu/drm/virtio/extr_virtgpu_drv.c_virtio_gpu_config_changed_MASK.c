
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_gpu_device {int config_changed_work; } ;
struct virtio_device {struct drm_device* priv; } ;
struct drm_device {struct virtio_gpu_device* dev_private; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct virtio_device *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->priv;
 struct virtio_gpu_device *VAR_2 = VAR_1->dev_private;

 FUNC_0(&VAR_2->config_changed_work);
}
