
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panfrost_job {scalar_t__ requirements; int render_done_fence; int file_priv; int flush_id; scalar_t__ jc; struct panfrost_device* pfdev; int refcount; } ;
struct panfrost_device {int dummy; } ;
struct drm_syncobj {int dummy; } ;
struct drm_panfrost_submit {scalar_t__ requirements; scalar_t__ out_sync; scalar_t__ jc; } ;
struct drm_file {int driver_priv; } ;
struct drm_device {struct panfrost_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct drm_syncobj* FUNC_0 (struct drm_file*,scalar_t__) ;
 int FUNC_1 (struct drm_syncobj*) ;
 int FUNC_2 (struct drm_syncobj*,int ) ;
 int FUNC_3 (int *) ;
 struct panfrost_job* FUNC_4 (int,int ) ;
 int FUNC_5 (struct drm_device*,struct drm_file*,struct drm_panfrost_submit*,struct panfrost_job*) ;
 int FUNC_6 (struct panfrost_device*) ;
 int FUNC_7 (struct panfrost_job*) ;
 int FUNC_8 (struct panfrost_job*) ;
 int FUNC_9 (struct drm_device*,struct drm_file*,struct drm_panfrost_submit*,struct panfrost_job*) ;

__attribute__((used)) static int FUNC_10(struct drm_device *VAR_5, void *VAR_6,
  struct drm_file *VAR_7)
{
 struct panfrost_device *VAR_8 = VAR_5->dev_private;
 struct drm_panfrost_submit *VAR_9 = VAR_6;
 struct drm_syncobj *VAR_10 = ((void*)0);
 struct panfrost_job *VAR_11;
 int VAR_12 = 0;

 if (!VAR_9->jc)
  return -VAR_0;

 if (VAR_9->requirements && VAR_9->requirements != VAR_4)
  return -VAR_0;

 if (VAR_9->out_sync > 0) {
  VAR_10 = FUNC_0(VAR_7, VAR_9->out_sync);
  if (!VAR_10)
   return -VAR_1;
 }

 VAR_11 = FUNC_4(sizeof(*VAR_11), VAR_3);
 if (!VAR_11) {
  VAR_12 = -VAR_2;
  goto fail_out_sync;
 }

 FUNC_3(&VAR_11->refcount);

 VAR_11->pfdev = VAR_8;
 VAR_11->jc = VAR_9->jc;
 VAR_11->requirements = VAR_9->requirements;
 VAR_11->flush_id = FUNC_6(VAR_8);
 VAR_11->file_priv = VAR_7->driver_priv;

 VAR_12 = FUNC_5(VAR_5, VAR_7, VAR_9, VAR_11);
 if (VAR_12)
  goto fail_job;

 VAR_12 = FUNC_9(VAR_5, VAR_7, VAR_9, VAR_11);
 if (VAR_12)
  goto fail_job;

 VAR_12 = FUNC_7(VAR_11);
 if (VAR_12)
  goto fail_job;


 if (VAR_10)
  FUNC_2(VAR_10, VAR_11->render_done_fence);

fail_job:
 FUNC_8(VAR_11);
fail_out_sync:
 if (VAR_10)
  FUNC_1(VAR_10);

 return VAR_12;
}
