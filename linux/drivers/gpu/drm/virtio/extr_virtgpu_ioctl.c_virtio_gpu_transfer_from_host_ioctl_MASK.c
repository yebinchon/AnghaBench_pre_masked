
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int resv; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct virtio_gpu_object {TYPE_2__ tbo; int hw_res_handle; int placement; } ;
struct virtio_gpu_fpriv {int ctx_id; } ;
struct virtio_gpu_fence {int f; } ;
struct virtio_gpu_device {int has_virgl_3d; } ;
struct virtio_gpu_box {int dummy; } ;
struct ttm_operation_ctx {int member_0; int member_1; } ;
struct drm_virtgpu_3d_transfer_from_host {int level; int box; int bo_handle; int offset; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {struct virtio_gpu_fpriv* driver_priv; } ;
struct drm_device {struct virtio_gpu_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct virtio_gpu_box*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 struct drm_gem_object* FUNC_3 (struct drm_file*,int ) ;
 int FUNC_4 (struct drm_gem_object*) ;
 struct virtio_gpu_object* FUNC_5 (struct drm_gem_object*) ;
 int FUNC_6 (TYPE_2__*,int *,struct ttm_operation_ctx*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct virtio_gpu_device*,int ,int ,int ,int ,struct virtio_gpu_box*,struct virtio_gpu_fence*) ;
 struct virtio_gpu_fence* FUNC_9 (struct virtio_gpu_device*) ;
 int FUNC_10 (struct virtio_gpu_object*,int) ;
 int FUNC_11 (struct virtio_gpu_object*) ;

__attribute__((used)) static int FUNC_12(struct drm_device *VAR_3,
            void *VAR_4,
            struct drm_file *VAR_5)
{
 struct virtio_gpu_device *VAR_6 = VAR_3->dev_private;
 struct virtio_gpu_fpriv *VAR_7 = VAR_5->driver_priv;
 struct drm_virtgpu_3d_transfer_from_host *VAR_8 = VAR_4;
 struct ttm_operation_ctx VAR_9 = { 1, 0 };
 struct drm_gem_object *VAR_10 = ((void*)0);
 struct virtio_gpu_object *VAR_11 = ((void*)0);
 struct virtio_gpu_fence *VAR_12;
 int VAR_13;
 u32 VAR_14 = VAR_8->offset;
 struct virtio_gpu_box VAR_15;

 if (VAR_6->has_virgl_3d == 0)
  return -VAR_2;

 VAR_10 = FUNC_3(VAR_5, VAR_8->bo_handle);
 if (VAR_10 == ((void*)0))
  return -VAR_0;

 VAR_11 = FUNC_5(VAR_10);

 VAR_13 = FUNC_10(VAR_11, 0);
 if (VAR_13)
  goto out;

 VAR_13 = FUNC_6(&VAR_11->tbo, &VAR_11->placement, &VAR_9);
 if (FUNC_7(VAR_13))
  goto out_unres;

 FUNC_0(&VAR_15, &VAR_8->box);

 VAR_12 = FUNC_9(VAR_6);
 if (!VAR_12) {
  VAR_13 = -VAR_1;
  goto out_unres;
 }
 FUNC_8
  (VAR_6, VAR_11->hw_res_handle,
   VAR_7->ctx_id, VAR_14, VAR_8->level,
   &VAR_15, VAR_12);
 FUNC_2(VAR_11->tbo.base.resv,
       &VAR_12->f);

 FUNC_1(&VAR_12->f);
out_unres:
 FUNC_11(VAR_11);
out:
 FUNC_4(VAR_10);
 return VAR_13;
}
