
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct ww_acquire_ctx {int dummy; } ;
struct TYPE_6__ {int bo_count; struct drm_gem_object** bo; int done_fence; } ;
struct drm_v3d_submit_tfu {int out_sync; int * bo_handles; int in_sync; int iia; } ;
struct v3d_tfu_job {TYPE_1__ base; struct drm_v3d_submit_tfu args; } ;
struct v3d_file_priv {int dummy; } ;
struct v3d_dev {int sched_lock; int drm; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int table_lock; int object_idr; struct v3d_file_priv* driver_priv; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct drm_gem_object*) ;
 int FUNC_3 (struct drm_gem_object**,size_t,struct ww_acquire_ctx*) ;
 struct drm_gem_object* FUNC_4 (int *,int ) ;
 void* FUNC_5 (int,int,int ) ;
 int FUNC_6 (struct v3d_tfu_job*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct v3d_dev* FUNC_11 (struct drm_device*) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (struct drm_file*,TYPE_1__*,struct ww_acquire_ctx*,int ,int ) ;
 int VAR_4 ;
 int FUNC_14 (struct v3d_dev*,struct drm_file*,TYPE_1__*,int ,int ) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*,struct ww_acquire_ctx*) ;
 int FUNC_17 (struct v3d_file_priv*,TYPE_1__*,int ) ;

int
FUNC_18(struct drm_device *VAR_5, void *VAR_6,
       struct drm_file *VAR_7)
{
 struct v3d_dev *VAR_8 = FUNC_11(VAR_5);
 struct v3d_file_priv *VAR_9 = VAR_7->driver_priv;
 struct drm_v3d_submit_tfu *VAR_10 = VAR_6;
 struct v3d_tfu_job *VAR_11;
 struct ww_acquire_ctx VAR_12;
 int VAR_13 = 0;

 FUNC_12(&VAR_8->drm, VAR_10->iia);

 VAR_11 = FUNC_5(1, sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_13 = FUNC_14(VAR_8, VAR_7, &VAR_11->base,
      VAR_4, VAR_10->in_sync);
 if (VAR_13) {
  FUNC_6(VAR_11);
  return VAR_13;
 }

 VAR_11->base.bo = FUNC_5(FUNC_0(VAR_10->bo_handles),
          sizeof(*VAR_11->base.bo), VAR_2);
 if (!VAR_11->base.bo) {
  FUNC_15(&VAR_11->base);
  return -VAR_1;
 }

 VAR_11->args = *VAR_10;

 FUNC_9(&VAR_7->table_lock);
 for (VAR_11->base.bo_count = 0;
      VAR_11->base.bo_count < FUNC_0(VAR_10->bo_handles);
      VAR_11->base.bo_count++) {
  struct drm_gem_object *VAR_14;

  if (!VAR_10->bo_handles[VAR_11->base.bo_count])
   break;

  VAR_14 = FUNC_4(&VAR_7->object_idr,
         VAR_10->bo_handles[VAR_11->base.bo_count]);
  if (!VAR_14) {
   FUNC_1("Failed to look up GEM BO %d: %d\n",
      VAR_11->base.bo_count,
      VAR_10->bo_handles[VAR_11->base.bo_count]);
   VAR_13 = -VAR_0;
   FUNC_10(&VAR_7->table_lock);
   goto fail;
  }
  FUNC_2(VAR_14);
  VAR_11->base.bo[VAR_11->base.bo_count] = VAR_14;
 }
 FUNC_10(&VAR_7->table_lock);

 VAR_13 = FUNC_16(&VAR_11->base, &VAR_12);
 if (VAR_13)
  goto fail;

 FUNC_7(&VAR_8->sched_lock);
 VAR_13 = FUNC_17(VAR_9, &VAR_11->base, VAR_3);
 if (VAR_13)
  goto fail_unreserve;
 FUNC_8(&VAR_8->sched_lock);

 FUNC_13(VAR_7,
       &VAR_11->base, &VAR_12,
       VAR_10->out_sync,
       VAR_11->base.done_fence);

 FUNC_15(&VAR_11->base);

 return 0;

fail_unreserve:
 FUNC_8(&VAR_8->sched_lock);
 FUNC_3(VAR_11->base.bo, VAR_11->base.bo_count,
        &VAR_12);
fail:
 FUNC_15(&VAR_11->base);

 return VAR_13;
}
