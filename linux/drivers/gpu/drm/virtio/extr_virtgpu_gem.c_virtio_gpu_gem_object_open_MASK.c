
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_gpu_object {int hw_res_handle; } ;
struct virtio_gpu_fpriv {int ctx_id; } ;
struct virtio_gpu_device {int has_virgl_3d; } ;
struct drm_gem_object {TYPE_1__* dev; } ;
struct drm_file {struct virtio_gpu_fpriv* driver_priv; } ;
struct TYPE_2__ {struct virtio_gpu_device* dev_private; } ;


 struct virtio_gpu_object* FUNC_0 (struct drm_gem_object*) ;
 int FUNC_1 (struct virtio_gpu_device*,int ,int ) ;
 int FUNC_2 (struct virtio_gpu_object*,int) ;
 int FUNC_3 (struct virtio_gpu_object*) ;

int FUNC_4(struct drm_gem_object *VAR_0,
          struct drm_file *VAR_1)
{
 struct virtio_gpu_device *VAR_2 = VAR_0->dev->dev_private;
 struct virtio_gpu_fpriv *VAR_3 = VAR_1->driver_priv;
 struct virtio_gpu_object *VAR_4 = FUNC_0(VAR_0);
 int VAR_5;

 if (!VAR_2->has_virgl_3d)
  return 0;

 VAR_5 = FUNC_2(VAR_4, 0);
 if (VAR_5)
  return VAR_5;

 FUNC_1(VAR_2, VAR_3->ctx_id,
            VAR_4->hw_res_handle);
 FUNC_3(VAR_4);
 return 0;
}
