
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ww_acquire_ctx {int dummy; } ;
struct vc4_file {int dummy; } ;
struct vc4_exec_info {struct drm_vc4_submit_cl* args; scalar_t__ ct0ea; scalar_t__ ct0ca; int perfmon; int unref_list; } ;
struct vc4_dev {int dev; int emit_seqno; int dma_fence_context; int v3d; } ;
struct drm_vc4_submit_cl {int flags; int pad2; scalar_t__ bin_cl_size; int seqno; scalar_t__ out_sync; scalar_t__ in_sync; scalar_t__ perfmonid; } ;
struct drm_syncobj {int dummy; } ;
struct drm_file {struct vc4_file* driver_priv; } ;
struct drm_device {int dummy; } ;
struct dma_fence {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct dma_fence*,int ) ;
 int FUNC_4 (struct dma_fence*) ;
 int FUNC_5 (struct dma_fence*,int) ;
 struct drm_syncobj* FUNC_6 (struct drm_file*,scalar_t__) ;
 int FUNC_7 (struct drm_file*,scalar_t__,int ,int ,struct dma_fence**) ;
 int FUNC_8 (struct drm_syncobj*) ;
 struct vc4_exec_info* FUNC_9 (int,int,int ) ;
 int FUNC_10 (struct vc4_exec_info*) ;
 struct vc4_dev* FUNC_11 (struct drm_device*) ;
 int FUNC_12 (struct drm_device*,struct drm_file*,struct vc4_exec_info*) ;
 int FUNC_13 (int ,struct vc4_exec_info*) ;
 int FUNC_14 (struct drm_device*,struct vc4_exec_info*) ;
 int FUNC_15 (struct drm_device*,struct vc4_exec_info*) ;
 int FUNC_16 (struct drm_device*,struct vc4_exec_info*,struct ww_acquire_ctx*) ;
 int FUNC_17 (struct vc4_file*,scalar_t__) ;
 int FUNC_18 (struct drm_device*,struct vc4_exec_info*,struct ww_acquire_ctx*,struct drm_syncobj*) ;
 int FUNC_19 (struct vc4_dev*) ;

int
FUNC_20(struct drm_device *VAR_9, void *VAR_10,
      struct drm_file *VAR_11)
{
 struct vc4_dev *VAR_12 = FUNC_11(VAR_9);
 struct vc4_file *VAR_13 = VAR_11->driver_priv;
 struct drm_vc4_submit_cl *VAR_14 = VAR_10;
 struct drm_syncobj *VAR_15 = ((void*)0);
 struct vc4_exec_info *VAR_16;
 struct ww_acquire_ctx VAR_17;
 struct dma_fence *VAR_18;
 int VAR_19 = 0;

 if (!VAR_12->v3d) {
  FUNC_0("VC4_SUBMIT_CL with no VC4 V3D probed\n");
  return -VAR_1;
 }

 if ((VAR_14->flags & ~(VAR_8 |
        VAR_5 |
        VAR_6 |
        VAR_7)) != 0) {
  FUNC_0("Unknown flags: 0x%02x\n", VAR_14->flags);
  return -VAR_0;
 }

 if (VAR_14->pad2 != 0) {
  FUNC_0("Invalid pad: 0x%08x\n", VAR_14->pad2);
  return -VAR_0;
 }

 VAR_16 = FUNC_9(1, sizeof(*VAR_16), VAR_4);
 if (!VAR_16) {
  FUNC_1("malloc failure on exec struct\n");
  return -VAR_3;
 }

 VAR_19 = FUNC_19(VAR_12);
 if (VAR_19) {
  FUNC_10(VAR_16);
  return VAR_19;
 }

 VAR_16->args = VAR_14;
 FUNC_2(&VAR_16->unref_list);

 VAR_19 = FUNC_12(VAR_9, VAR_11, VAR_16);
 if (VAR_19)
  goto fail;

 if (VAR_14->perfmonid) {
  VAR_16->perfmon = FUNC_17(VAR_13,
       VAR_14->perfmonid);
  if (!VAR_16->perfmon) {
   VAR_19 = -VAR_2;
   goto fail;
  }
 }

 if (VAR_14->in_sync) {
  VAR_19 = FUNC_7(VAR_11, VAR_14->in_sync,
          0, 0, &VAR_18);
  if (VAR_19)
   goto fail;






  if (!FUNC_3(VAR_18,
          VAR_12->dma_fence_context)) {
   VAR_19 = FUNC_5(VAR_18, 1);
   if (VAR_19) {
    FUNC_4(VAR_18);
    goto fail;
   }
  }

  FUNC_4(VAR_18);
 }

 if (VAR_16->args->bin_cl_size != 0) {
  VAR_19 = FUNC_14(VAR_9, VAR_16);
  if (VAR_19)
   goto fail;
 } else {
  VAR_16->ct0ca = 0;
  VAR_16->ct0ea = 0;
 }

 VAR_19 = FUNC_15(VAR_9, VAR_16);
 if (VAR_19)
  goto fail;

 VAR_19 = FUNC_16(VAR_9, VAR_16, &VAR_17);
 if (VAR_19)
  goto fail;

 if (VAR_14->out_sync) {
  VAR_15 = FUNC_6(VAR_11, VAR_14->out_sync);
  if (!VAR_15) {
   VAR_19 = -VAR_0;
   goto fail;
  }






 }




 VAR_16->args = ((void*)0);

 VAR_19 = FUNC_18(VAR_9, VAR_16, &VAR_17, VAR_15);




 if (VAR_15)
  FUNC_8(VAR_15);

 if (VAR_19)
  goto fail;


 VAR_14->seqno = VAR_12->emit_seqno;

 return 0;

fail:
 FUNC_13(VAR_12->dev, VAR_16);

 return VAR_19;
}
