
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct intel_overlay {int pfit_active; int pfit_vscale_ratio; struct intel_crtc* crtc; } ;
struct intel_crtc {TYPE_2__* config; struct intel_overlay* overlay; } ;
struct drm_intel_overlay_put_image {int flags; int dst_y; int dst_height; scalar_t__ src_scan_height; scalar_t__ src_height; scalar_t__ src_scan_width; scalar_t__ src_width; int bo_handle; int crtc_id; } ;
struct drm_i915_private {struct intel_overlay* overlay; } ;
struct drm_i915_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int struct_mutex; } ;
struct drm_crtc {int dummy; } ;
struct TYPE_3__ {int control; } ;
struct TYPE_4__ {int pipe_src_w; TYPE_1__ gmch_pfit; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct intel_overlay*,struct drm_intel_overlay_put_image*) ;
 int FUNC_3 (struct intel_overlay*,struct intel_crtc*) ;
 int FUNC_4 (struct drm_intel_overlay_put_image*) ;
 int FUNC_5 (struct drm_i915_private*,struct drm_intel_overlay_put_image*,struct drm_i915_gem_object*) ;
 struct drm_crtc* FUNC_6 (struct drm_device*,struct drm_file*,int ) ;
 int FUNC_7 (struct drm_device*) ;
 int FUNC_8 (struct drm_device*) ;
 scalar_t__ FUNC_9 (struct drm_i915_gem_object*) ;
 struct drm_i915_gem_object* FUNC_10 (struct drm_file*,int ) ;
 int FUNC_11 (struct drm_i915_gem_object*) ;
 int FUNC_12 (struct intel_overlay*,struct drm_i915_gem_object*,struct drm_intel_overlay_put_image*) ;
 int FUNC_13 (struct intel_overlay*) ;
 int FUNC_14 (struct intel_overlay*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 struct drm_i915_private* FUNC_17 (struct drm_device*) ;
 struct intel_crtc* FUNC_18 (struct drm_crtc*) ;
 int FUNC_19 (struct intel_overlay*) ;

int FUNC_20(struct drm_device *VAR_5, void *VAR_6,
      struct drm_file *VAR_7)
{
 struct drm_intel_overlay_put_image *VAR_8 = VAR_6;
 struct drm_i915_private *VAR_9 = FUNC_17(VAR_5);
 struct intel_overlay *VAR_10;
 struct drm_crtc *VAR_11;
 struct intel_crtc *VAR_12;
 struct drm_i915_gem_object *VAR_13;
 int VAR_14;

 VAR_10 = VAR_9->overlay;
 if (!VAR_10) {
  FUNC_0("userspace bug: no overlay\n");
  return -VAR_1;
 }

 if (!(VAR_8->flags & VAR_3)) {
  FUNC_7(VAR_5);
  FUNC_15(&VAR_5->struct_mutex);

  VAR_14 = FUNC_14(VAR_10);

  FUNC_16(&VAR_5->struct_mutex);
  FUNC_8(VAR_5);

  return VAR_14;
 }

 VAR_11 = FUNC_6(VAR_5, VAR_7, VAR_8->crtc_id);
 if (!VAR_11)
  return -VAR_2;
 VAR_12 = FUNC_18(VAR_11);

 VAR_13 = FUNC_10(VAR_7, VAR_8->bo_handle);
 if (!VAR_13)
  return -VAR_2;

 FUNC_7(VAR_5);
 FUNC_15(&VAR_5->struct_mutex);

 if (FUNC_9(VAR_13)) {
  FUNC_1("buffer used for overlay image can not be tiled\n");
  VAR_14 = -VAR_0;
  goto out_unlock;
 }

 VAR_14 = FUNC_13(VAR_10);
 if (VAR_14 != 0)
  goto out_unlock;

 if (VAR_10->crtc != VAR_12) {
  VAR_14 = FUNC_14(VAR_10);
  if (VAR_14 != 0)
   goto out_unlock;

  VAR_14 = FUNC_3(VAR_10, VAR_12);
  if (VAR_14 != 0)
   goto out_unlock;

  VAR_10->crtc = VAR_12;
  VAR_12->overlay = VAR_10;


  if (VAR_12->config->pipe_src_w > 1024 &&
      VAR_12->config->gmch_pfit.control & VAR_4) {
   VAR_10->pfit_active = 1;
   FUNC_19(VAR_10);
  } else
   VAR_10->pfit_active = 0;
 }

 VAR_14 = FUNC_2(VAR_10, VAR_8);
 if (VAR_14 != 0)
  goto out_unlock;

 if (VAR_10->pfit_active) {
  VAR_8->dst_y = (((u32)VAR_8->dst_y << 12) /
     VAR_10->pfit_vscale_ratio);

  VAR_8->dst_height = (((u32)VAR_8->dst_height << 12) /
     VAR_10->pfit_vscale_ratio) + 1;
 }

 if (VAR_8->src_scan_height > VAR_8->src_height ||
     VAR_8->src_scan_width > VAR_8->src_width) {
  VAR_14 = -VAR_0;
  goto out_unlock;
 }

 VAR_14 = FUNC_5(VAR_9, VAR_8, VAR_13);
 if (VAR_14 != 0)
  goto out_unlock;


 VAR_14 = FUNC_4(VAR_8);
 if (VAR_14 != 0)
  goto out_unlock;

 VAR_14 = FUNC_12(VAR_10, VAR_13, VAR_8);
 if (VAR_14 != 0)
  goto out_unlock;

 FUNC_16(&VAR_5->struct_mutex);
 FUNC_8(VAR_5);
 FUNC_11(VAR_13);

 return 0;

out_unlock:
 FUNC_16(&VAR_5->struct_mutex);
 FUNC_8(VAR_5);
 FUNC_11(VAR_13);

 return VAR_14;
}
