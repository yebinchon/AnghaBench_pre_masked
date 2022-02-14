
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_gpu_fpriv {int ctx_id; } ;
struct virtio_gpu_device {int has_virgl_3d; } ;
struct drm_file {struct virtio_gpu_fpriv* driver_priv; } ;
struct drm_device {struct virtio_gpu_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct virtio_gpu_fpriv*) ;
 struct virtio_gpu_fpriv* FUNC_2 (int,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct virtio_gpu_device*,int ,char*) ;

int FUNC_5(struct drm_device *VAR_4, struct drm_file *VAR_5)
{
 struct virtio_gpu_device *VAR_6 = VAR_4->dev_private;
 struct virtio_gpu_fpriv *VAR_7;
 int VAR_8;
 char VAR_9[VAR_2];


 if (!VAR_6->has_virgl_3d)
  return 0;


 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_0(VAR_9, VAR_3);
 VAR_8 = FUNC_4(VAR_6, FUNC_3(VAR_9), VAR_9);
 if (VAR_8 < 0) {
  FUNC_1(VAR_7);
  return VAR_8;
 }

 VAR_7->ctx_id = VAR_8;
 VAR_5->driver_priv = VAR_7;
 return 0;
}
