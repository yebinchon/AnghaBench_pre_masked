
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lima_submit {int nr_bos; int flags; int out_sync; int * in_sync; struct lima_ctx* ctx; struct lima_sched_task* task; void* lbos; struct lima_sched_task* bos; int pipe; int member_0; } ;
struct lima_sched_task {struct lima_sched_task* frame; } ;
struct lima_sched_pipe {size_t frame_size; int (* task_validate ) (struct lima_sched_pipe*,struct lima_sched_task*) ;int task_slab; } ;
struct lima_drm_priv {int ctx_mgr; } ;
struct lima_device {struct lima_sched_pipe* pipe; } ;
struct lima_ctx {int dummy; } ;
struct drm_lima_gem_submit_bo {struct drm_lima_gem_submit_bo* frame; } ;
struct drm_lima_gem_submit {int nr_bos; int flags; size_t frame_size; int out_sync; int * in_sync; int pipe; int ctx; int frame; int bos; } ;
struct drm_file {struct lima_drm_priv* driver_priv; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct lima_sched_task*,int ,size_t) ;
 int FUNC_1 (int ,struct lima_sched_task*) ;
 struct lima_sched_task* FUNC_2 (int ,int ) ;
 struct lima_sched_task* FUNC_3 (int,int,int ) ;
 int FUNC_4 (struct lima_sched_task*) ;
 struct lima_ctx* FUNC_5 (int *,int ) ;
 int FUNC_6 (struct lima_ctx*) ;
 int FUNC_7 (struct drm_file*,struct lima_submit*) ;
 int VAR_6 ;
 int FUNC_8 (struct lima_sched_pipe*,struct lima_sched_task*) ;
 struct lima_device* FUNC_9 (struct drm_device*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct drm_device *VAR_7, void *VAR_8, struct drm_file *VAR_9)
{
 struct drm_lima_gem_submit *VAR_10 = VAR_8;
 struct lima_device *VAR_11 = FUNC_9(VAR_7);
 struct lima_drm_priv *VAR_12 = VAR_9->driver_priv;
 struct drm_lima_gem_submit_bo *VAR_13;
 struct lima_sched_pipe *VAR_14;
 struct lima_sched_task *VAR_15;
 struct lima_ctx *VAR_16;
 struct lima_submit VAR_17 = {0};
 size_t VAR_18;
 int VAR_19 = 0;

 if (VAR_10->pipe >= VAR_6 || VAR_10->nr_bos == 0)
  return -VAR_1;

 if (VAR_10->flags & ~(VAR_5))
  return -VAR_1;

 VAR_14 = VAR_11->pipe + VAR_10->pipe;
 if (VAR_10->frame_size != VAR_14->frame_size)
  return -VAR_1;

 VAR_13 = FUNC_3(VAR_10->nr_bos, sizeof(*VAR_17.bos) + sizeof(*VAR_17.lbos), VAR_4);
 if (!VAR_13)
  return -VAR_3;

 VAR_18 = VAR_10->nr_bos * sizeof(*VAR_17.bos);
 if (FUNC_0(VAR_13, FUNC_10(VAR_10->bos), VAR_18)) {
  VAR_19 = -VAR_0;
  goto out0;
 }

 VAR_15 = FUNC_2(VAR_14->task_slab, VAR_4);
 if (!VAR_15) {
  VAR_19 = -VAR_3;
  goto out0;
 }

 VAR_15->frame = VAR_15 + 1;
 if (FUNC_0(VAR_15->frame, FUNC_10(VAR_10->frame), VAR_10->frame_size)) {
  VAR_19 = -VAR_0;
  goto out1;
 }

 VAR_19 = VAR_14->task_validate(VAR_14, VAR_15);
 if (VAR_19)
  goto out1;

 VAR_16 = FUNC_5(&VAR_12->ctx_mgr, VAR_10->ctx);
 if (!VAR_16) {
  VAR_19 = -VAR_2;
  goto out1;
 }

 VAR_17.pipe = VAR_10->pipe;
 VAR_17.bos = VAR_13;
 VAR_17.lbos = (void *)VAR_13 + VAR_18;
 VAR_17.nr_bos = VAR_10->nr_bos;
 VAR_17.task = VAR_15;
 VAR_17.ctx = VAR_16;
 VAR_17.flags = VAR_10->flags;
 VAR_17.in_sync[0] = VAR_10->in_sync[0];
 VAR_17.in_sync[1] = VAR_10->in_sync[1];
 VAR_17.out_sync = VAR_10->out_sync;

 VAR_19 = FUNC_7(VAR_9, &VAR_17);

 FUNC_6(VAR_16);
out1:
 if (VAR_19)
  FUNC_1(VAR_14->task_slab, VAR_15);
out0:
 FUNC_4(VAR_13);
 return VAR_19;
}
