
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int get_fifo_size; int * update_wm; int optimize_watermarks; int initial_watermarks; int compute_intermediate_wm; int compute_pipe_wm; int atomic_update_watermarks; int compute_global_watermarks; } ;
struct TYPE_4__ {scalar_t__* cur_latency; scalar_t__* spr_latency; scalar_t__* pri_latency; } ;
struct drm_i915_private {int is_ddr3; TYPE_2__ display; int mem_freq; int fsb_freq; TYPE_1__ wm; } ;
struct TYPE_6__ {int num_pipes; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int ,int ) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*) ;
 TYPE_3__* FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*) ;
 scalar_t__ FUNC_8 (struct drm_i915_private*,int) ;
 int FUNC_9 (struct drm_i915_private*) ;
 scalar_t__ FUNC_10 (struct drm_i915_private*) ;
 scalar_t__ FUNC_11 (struct drm_i915_private*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_12 (struct drm_i915_private*) ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_13 (struct drm_i915_private*) ;
 int FUNC_14 (struct drm_i915_private*) ;
 int * VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_15 (struct drm_i915_private*) ;
 int FUNC_16 (int,int,int ,int ) ;
 int FUNC_17 (struct drm_i915_private*,int) ;
 int * VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_18 (struct drm_i915_private*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_19 (struct drm_i915_private*) ;

void FUNC_20(struct drm_i915_private *VAR_23)
{

 if (FUNC_10(VAR_23))
  FUNC_14(VAR_23);
 else if (FUNC_8(VAR_23, 5))
  FUNC_13(VAR_23);


 if (FUNC_4(VAR_23) >= 9) {
  FUNC_18(VAR_23);
  VAR_23->display.initial_watermarks = VAR_17;
  VAR_23->display.atomic_update_watermarks = VAR_15;
  VAR_23->display.compute_global_watermarks = VAR_16;
 } else if (FUNC_3(VAR_23)) {
  FUNC_15(VAR_23);

  if ((FUNC_8(VAR_23, 5) && VAR_23->wm.pri_latency[1] &&
       VAR_23->wm.spr_latency[1] && VAR_23->wm.cur_latency[1]) ||
      (!FUNC_8(VAR_23, 5) && VAR_23->wm.pri_latency[0] &&
       VAR_23->wm.spr_latency[0] && VAR_23->wm.cur_latency[0])) {
   VAR_23->display.compute_pipe_wm = VAR_11;
   VAR_23->display.compute_intermediate_wm =
    VAR_10;
   VAR_23->display.initial_watermarks =
    VAR_12;
   VAR_23->display.optimize_watermarks =
    VAR_13;
  } else {
   FUNC_0("Failed to read display plane latency. "
          "Disable CxSR\n");
  }
 } else if (FUNC_11(VAR_23) || FUNC_6(VAR_23)) {
  FUNC_19(VAR_23);
  VAR_23->display.compute_pipe_wm = VAR_20;
  VAR_23->display.compute_intermediate_wm = VAR_19;
  VAR_23->display.initial_watermarks = VAR_21;
  VAR_23->display.optimize_watermarks = VAR_22;
  VAR_23->display.atomic_update_watermarks = VAR_18;
 } else if (FUNC_7(VAR_23)) {
  FUNC_12(VAR_23);
  VAR_23->display.compute_pipe_wm = VAR_1;
  VAR_23->display.compute_intermediate_wm = VAR_0;
  VAR_23->display.initial_watermarks = VAR_2;
  VAR_23->display.optimize_watermarks = VAR_3;
 } else if (FUNC_10(VAR_23)) {
  if (!FUNC_16(!FUNC_9(VAR_23),
         VAR_23->is_ddr3,
         VAR_23->fsb_freq,
         VAR_23->mem_freq)) {
   FUNC_2("failed to find known CxSR latency "
     "(found ddr%s fsb freq %d, mem freq %d), "
     "disabling CxSR\n",
     (VAR_23->is_ddr3 == 1) ? "3" : "2",
     VAR_23->fsb_freq, VAR_23->mem_freq);

   FUNC_17(VAR_23, 0);
   VAR_23->display.update_wm = ((void*)0);
  } else
   VAR_23->display.update_wm = VAR_14;
 } else if (FUNC_8(VAR_23, 4)) {
  VAR_23->display.update_wm = VAR_7;
 } else if (FUNC_8(VAR_23, 3)) {
  VAR_23->display.update_wm = VAR_9;
  VAR_23->display.get_fifo_size = VAR_8;
 } else if (FUNC_8(VAR_23, 2)) {
  if (FUNC_5(VAR_23)->num_pipes == 1) {
   VAR_23->display.update_wm = VAR_6;
   VAR_23->display.get_fifo_size = VAR_5;
  } else {
   VAR_23->display.update_wm = VAR_9;
   VAR_23->display.get_fifo_size = VAR_4;
  }
 } else {
  FUNC_1("unexpected fall-through in intel_init_pm\n");
 }
}
