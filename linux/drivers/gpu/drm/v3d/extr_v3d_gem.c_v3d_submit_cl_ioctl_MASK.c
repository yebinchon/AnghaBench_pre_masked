
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct ww_acquire_ctx {int dummy; } ;
struct TYPE_7__ {int bo_count; int bo; int done_fence; int deps; } ;
struct v3d_render_job {scalar_t__ start; scalar_t__ end; TYPE_1__ base; struct v3d_render_job* render; int qts; int qms; int qma; int unref_list; } ;
struct v3d_file_priv {int dummy; } ;
struct v3d_dev {int sched_lock; int drm; } ;
struct v3d_bin_job {scalar_t__ start; scalar_t__ end; TYPE_1__ base; struct v3d_bin_job* render; int qts; int qms; int qma; int unref_list; } ;
struct drm_v3d_submit_cl {scalar_t__ rcl_start; scalar_t__ rcl_end; scalar_t__ pad; scalar_t__ bcl_start; scalar_t__ bcl_end; int out_sync; int bo_handle_count; int bo_handles; int qts; int qms; int qma; int in_sync_bcl; int in_sync_rcl; } ;
struct drm_file {struct v3d_file_priv* driver_priv; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int ,struct ww_acquire_ctx*) ;
 struct v3d_render_job* FUNC_5 (int,int,int ) ;
 int FUNC_6 (struct v3d_render_job*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct v3d_dev* FUNC_9 (struct drm_device*) ;
 int FUNC_10 (int *,scalar_t__,scalar_t__) ;
 int FUNC_11 (struct drm_file*,TYPE_1__*,struct ww_acquire_ctx*,int ,int ) ;
 int VAR_5 ;
 int FUNC_12 (struct v3d_dev*,struct drm_file*,TYPE_1__*,int ,int ) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*,struct ww_acquire_ctx*) ;
 int FUNC_15 (struct drm_device*,struct drm_file*,TYPE_1__*,int ,int ) ;
 int FUNC_16 (struct v3d_file_priv*,TYPE_1__*,int ) ;
 int VAR_6 ;

int
FUNC_17(struct drm_device *VAR_7, void *VAR_8,
      struct drm_file *VAR_9)
{
 struct v3d_dev *VAR_10 = FUNC_9(VAR_7);
 struct v3d_file_priv *VAR_11 = VAR_9->driver_priv;
 struct drm_v3d_submit_cl *VAR_12 = VAR_8;
 struct v3d_bin_job *VAR_13 = ((void*)0);
 struct v3d_render_job *VAR_14;
 struct ww_acquire_ctx VAR_15;
 int VAR_16 = 0;

 FUNC_10(&VAR_10->drm, VAR_12->rcl_start, VAR_12->rcl_end);

 if (VAR_12->pad != 0) {
  FUNC_0("pad must be zero: %d\n", VAR_12->pad);
  return -VAR_0;
 }

 VAR_14 = FUNC_5(1, sizeof(*VAR_14), VAR_2);
 if (!VAR_14)
  return -VAR_1;

 VAR_14->start = VAR_12->rcl_start;
 VAR_14->end = VAR_12->rcl_end;
 FUNC_1(&VAR_14->unref_list);

 VAR_16 = FUNC_12(VAR_10, VAR_9, &VAR_14->base,
      VAR_6, VAR_12->in_sync_rcl);
 if (VAR_16) {
  FUNC_6(VAR_14);
  return VAR_16;
 }

 if (VAR_12->bcl_start != VAR_12->bcl_end) {
  VAR_13 = FUNC_5(1, sizeof(*VAR_13), VAR_2);
  if (!VAR_13) {
   FUNC_13(&VAR_14->base);
   return -VAR_1;
  }

  VAR_16 = FUNC_12(VAR_10, VAR_9, &VAR_13->base,
       VAR_5, VAR_12->in_sync_bcl);
  if (VAR_16) {
   FUNC_13(&VAR_14->base);
   FUNC_6(VAR_13);
   return VAR_16;
  }

  VAR_13->start = VAR_12->bcl_start;
  VAR_13->end = VAR_12->bcl_end;
  VAR_13->qma = VAR_12->qma;
  VAR_13->qms = VAR_12->qms;
  VAR_13->qts = VAR_12->qts;
  VAR_13->render = VAR_14;
 }

 VAR_16 = FUNC_15(VAR_7, VAR_9, &VAR_14->base,
        VAR_12->bo_handles, VAR_12->bo_handle_count);
 if (VAR_16)
  goto fail;

 VAR_16 = FUNC_14(&VAR_14->base, &VAR_15);
 if (VAR_16)
  goto fail;

 FUNC_7(&VAR_10->sched_lock);
 if (VAR_13) {
  VAR_16 = FUNC_16(VAR_11, &VAR_13->base, VAR_3);
  if (VAR_16)
   goto fail_unreserve;

  VAR_16 = FUNC_3(&VAR_14->base.deps,
           FUNC_2(VAR_13->base.done_fence));
  if (VAR_16)
   goto fail_unreserve;
 }

 VAR_16 = FUNC_16(VAR_11, &VAR_14->base, VAR_4);
 if (VAR_16)
  goto fail_unreserve;
 FUNC_8(&VAR_10->sched_lock);

 FUNC_11(VAR_9,
       &VAR_14->base,
       &VAR_15,
       VAR_12->out_sync,
       VAR_14->base.done_fence);

 if (VAR_13)
  FUNC_13(&VAR_13->base);
 FUNC_13(&VAR_14->base);

 return 0;

fail_unreserve:
 FUNC_8(&VAR_10->sched_lock);
 FUNC_4(VAR_14->base.bo,
        VAR_14->base.bo_count, &VAR_15);
fail:
 if (VAR_13)
  FUNC_13(&VAR_13->base);
 FUNC_13(&VAR_14->base);

 return VAR_16;
}
