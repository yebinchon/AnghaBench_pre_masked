
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_gpu_fpriv {int ctx_id; } ;
struct virtio_gpu_device {int has_virgl_3d; } ;
struct drm_file {struct virtio_gpu_fpriv* driver_priv; } ;
struct drm_device {struct virtio_gpu_device* dev_private; } ;


 int FUNC_0 (struct virtio_gpu_fpriv*) ;
 int FUNC_1 (struct virtio_gpu_device*,int ) ;

void FUNC_2(struct drm_device *VAR_0, struct drm_file *VAR_1)
{
 struct virtio_gpu_device *VAR_2 = VAR_0->dev_private;
 struct virtio_gpu_fpriv *VAR_3;

 if (!VAR_2->has_virgl_3d)
  return;

 VAR_3 = VAR_1->driver_priv;

 FUNC_1(VAR_2, VAR_3->ctx_id);
 FUNC_0(VAR_3);
 VAR_1->driver_priv = ((void*)0);
}
