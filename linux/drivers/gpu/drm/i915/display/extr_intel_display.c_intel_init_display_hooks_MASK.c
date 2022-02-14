
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int update_crtcs; int fdi_link_train; void* crtc_disable; void* crtc_enable; void* crtc_compute_clock; void* get_initial_plane_config; void* get_pipe_config; } ;
struct drm_i915_private {TYPE_1__ display; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*) ;
 scalar_t__ FUNC_8 (struct drm_i915_private*) ;
 scalar_t__ FUNC_9 (struct drm_i915_private*) ;
 scalar_t__ FUNC_10 (struct drm_i915_private*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int FUNC_11 (struct drm_i915_private*) ;
 int VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 int VAR_18 ;
 void* VAR_19 ;
 int VAR_20 ;
 void* VAR_21 ;
 int VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 void* VAR_25 ;

void FUNC_12(struct drm_i915_private *VAR_26)
{
 FUNC_11(VAR_26);

 if (FUNC_2(VAR_26) >= 9) {
  VAR_26->display.get_pipe_config = VAR_6;
  VAR_26->display.get_initial_plane_config =
   VAR_23;
  VAR_26->display.crtc_compute_clock =
   VAR_3;
  VAR_26->display.crtc_enable = VAR_5;
  VAR_26->display.crtc_disable = VAR_4;
 } else if (FUNC_0(VAR_26)) {
  VAR_26->display.get_pipe_config = VAR_6;
  VAR_26->display.get_initial_plane_config =
   VAR_12;
  VAR_26->display.crtc_compute_clock =
   VAR_3;
  VAR_26->display.crtc_enable = VAR_5;
  VAR_26->display.crtc_disable = VAR_4;
 } else if (FUNC_1(VAR_26)) {
  VAR_26->display.get_pipe_config = VAR_19;
  VAR_26->display.get_initial_plane_config =
   VAR_12;
  VAR_26->display.crtc_compute_clock =
   VAR_15;
  VAR_26->display.crtc_enable = VAR_17;
  VAR_26->display.crtc_disable = VAR_16;
 } else if (FUNC_4(VAR_26)) {
  VAR_26->display.get_pipe_config = VAR_13;
  VAR_26->display.get_initial_plane_config =
   VAR_12;
  VAR_26->display.crtc_compute_clock = VAR_0;
  VAR_26->display.crtc_enable = VAR_24;
  VAR_26->display.crtc_disable = VAR_10;
 } else if (FUNC_10(VAR_26)) {
  VAR_26->display.get_pipe_config = VAR_13;
  VAR_26->display.get_initial_plane_config =
   VAR_12;
  VAR_26->display.crtc_compute_clock = VAR_25;
  VAR_26->display.crtc_enable = VAR_24;
  VAR_26->display.crtc_disable = VAR_10;
 } else if (FUNC_5(VAR_26)) {
  VAR_26->display.get_pipe_config = VAR_13;
  VAR_26->display.get_initial_plane_config =
   VAR_12;
  VAR_26->display.crtc_compute_clock = VAR_1;
  VAR_26->display.crtc_enable = VAR_11;
  VAR_26->display.crtc_disable = VAR_10;
 } else if (FUNC_9(VAR_26)) {
  VAR_26->display.get_pipe_config = VAR_13;
  VAR_26->display.get_initial_plane_config =
   VAR_12;
  VAR_26->display.crtc_compute_clock = VAR_21;
  VAR_26->display.crtc_enable = VAR_11;
  VAR_26->display.crtc_disable = VAR_10;
 } else if (!FUNC_6(VAR_26, 2)) {
  VAR_26->display.get_pipe_config = VAR_13;
  VAR_26->display.get_initial_plane_config =
   VAR_12;
  VAR_26->display.crtc_compute_clock = VAR_9;
  VAR_26->display.crtc_enable = VAR_11;
  VAR_26->display.crtc_disable = VAR_10;
 } else {
  VAR_26->display.get_pipe_config = VAR_13;
  VAR_26->display.get_initial_plane_config =
   VAR_12;
  VAR_26->display.crtc_compute_clock = VAR_8;
  VAR_26->display.crtc_enable = VAR_11;
  VAR_26->display.crtc_disable = VAR_10;
 }

 if (FUNC_6(VAR_26, 5)) {
  VAR_26->display.fdi_link_train = VAR_18;
 } else if (FUNC_6(VAR_26, 6)) {
  VAR_26->display.fdi_link_train = VAR_2;
 } else if (FUNC_8(VAR_26)) {

  VAR_26->display.fdi_link_train = VAR_20;
 } else if (FUNC_7(VAR_26) || FUNC_3(VAR_26)) {
  VAR_26->display.fdi_link_train = VAR_7;
 }

 if (FUNC_2(VAR_26) >= 9)
  VAR_26->display.update_crtcs = VAR_22;
 else
  VAR_26->display.update_crtcs = VAR_14;
}
