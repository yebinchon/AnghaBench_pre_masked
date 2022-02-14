
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct intel_watermark_params {int guard_size; int max_wm; int fifo_size; int cacheline_size; } ;
struct TYPE_12__ {TYPE_4__* primary; int dev; } ;
struct intel_crtc {TYPE_6__* config; TYPE_5__ base; } ;
struct TYPE_8__ {int (* get_fifo_size ) (struct drm_i915_private*,int ) ;} ;
struct drm_i915_private {TYPE_1__ display; } ;
struct drm_i915_gem_object {int dummy; } ;
struct drm_framebuffer {TYPE_7__* format; } ;
struct drm_display_mode {int crtc_clock; int crtc_htotal; } ;
struct TYPE_14__ {int* cpp; } ;
struct TYPE_9__ {struct drm_display_mode adjusted_mode; } ;
struct TYPE_13__ {int pipe_src_w; TYPE_2__ base; } ;
struct TYPE_11__ {TYPE_3__* state; } ;
struct TYPE_10__ {struct drm_framebuffer* fb; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct intel_watermark_params VAR_6 ;
 struct intel_watermark_params VAR_7 ;
 int FUNC_8 (struct drm_i915_gem_object*) ;
 struct intel_watermark_params VAR_8 ;
 struct intel_watermark_params VAR_9 ;
 int FUNC_9 (int,struct intel_watermark_params const*,int,int,int ) ;
 scalar_t__ FUNC_10 (struct intel_crtc*) ;
 struct drm_i915_gem_object* FUNC_11 (struct drm_framebuffer*) ;
 struct intel_crtc* FUNC_12 (struct drm_i915_private*,int ) ;
 int FUNC_13 (struct drm_i915_private*,int) ;
 int FUNC_14 (int,int,int,int,int const) ;
 int VAR_10 ;
 int FUNC_15 (struct drm_i915_private*,int ) ;
 int FUNC_16 (struct drm_i915_private*,int ) ;
 struct drm_i915_private* FUNC_17 (int ) ;

__attribute__((used)) static void FUNC_18(struct intel_crtc *VAR_11)
{
 struct drm_i915_private *VAR_12 = FUNC_17(VAR_11->base.dev);
 const struct intel_watermark_params *VAR_13;
 u32 VAR_14;
 u32 VAR_15;
 int VAR_16, VAR_17 = 1;
 int VAR_18;
 int VAR_19, VAR_20;
 struct intel_crtc *VAR_21, *VAR_22 = ((void*)0);

 if (FUNC_7(VAR_12))
  VAR_13 = &VAR_9;
 else if (!FUNC_4(VAR_12, 2))
  VAR_13 = &VAR_8;
 else
  VAR_13 = &VAR_6;

 VAR_18 = VAR_12->display.get_fifo_size(VAR_12, VAR_4);
 VAR_21 = FUNC_12(VAR_12, VAR_4);
 if (FUNC_10(VAR_21)) {
  const struct drm_display_mode *VAR_23 =
   &VAR_21->config->base.adjusted_mode;
  const struct drm_framebuffer *VAR_24 =
   VAR_21->base.primary->state->fb;
  int VAR_25;

  if (FUNC_4(VAR_12, 2))
   VAR_25 = 4;
  else
   VAR_25 = VAR_24->format->cpp[0];

  VAR_19 = FUNC_9(VAR_23->crtc_clock,
            VAR_13, VAR_18, VAR_25,
            VAR_10);
  VAR_22 = VAR_21;
 } else {
  VAR_19 = VAR_18 - VAR_13->guard_size;
  if (VAR_19 > (long)VAR_13->max_wm)
   VAR_19 = VAR_13->max_wm;
 }

 if (FUNC_4(VAR_12, 2))
  VAR_13 = &VAR_7;

 VAR_18 = VAR_12->display.get_fifo_size(VAR_12, VAR_5);
 VAR_21 = FUNC_12(VAR_12, VAR_5);
 if (FUNC_10(VAR_21)) {
  const struct drm_display_mode *VAR_26 =
   &VAR_21->config->base.adjusted_mode;
  const struct drm_framebuffer *VAR_27 =
   VAR_21->base.primary->state->fb;
  int VAR_28;

  if (FUNC_4(VAR_12, 2))
   VAR_28 = 4;
  else
   VAR_28 = VAR_27->format->cpp[0];

  VAR_20 = FUNC_9(VAR_26->crtc_clock,
            VAR_13, VAR_18, VAR_28,
            VAR_10);
  if (VAR_22 == ((void*)0))
   VAR_22 = VAR_21;
  else
   VAR_22 = ((void*)0);
 } else {
  VAR_20 = VAR_18 - VAR_13->guard_size;
  if (VAR_20 > (long)VAR_13->max_wm)
   VAR_20 = VAR_13->max_wm;
 }

 FUNC_1("FIFO watermarks - A: %d, B: %d\n", VAR_19, VAR_20);

 if (FUNC_5(VAR_12) && VAR_22) {
  struct drm_i915_gem_object *VAR_29;

  VAR_29 = FUNC_11(VAR_22->base.primary->state->fb);


  if (!FUNC_8(VAR_29))
   VAR_22 = ((void*)0);
 }




 VAR_16 = 2;


 FUNC_13(VAR_12, 0);


 if (FUNC_2(VAR_12) && VAR_22) {

  static const int VAR_30 = 6000;
  const struct drm_display_mode *VAR_31 =
   &VAR_22->config->base.adjusted_mode;
  const struct drm_framebuffer *VAR_32 =
   VAR_22->base.primary->state->fb;
  int VAR_33 = VAR_31->crtc_clock;
  int VAR_34 = VAR_31->crtc_htotal;
  int VAR_35 = VAR_22->config->pipe_src_w;
  int VAR_36;
  int VAR_37;

  if (FUNC_5(VAR_12) || FUNC_7(VAR_12))
   VAR_36 = 4;
  else
   VAR_36 = VAR_32->format->cpp[0];

  VAR_37 = FUNC_14(VAR_33, VAR_34, VAR_35, VAR_36,
        VAR_30 / 100);
  VAR_37 = FUNC_0(VAR_37, VAR_13->cacheline_size);
  FUNC_1("self-refresh entries: %d\n", VAR_37);
  VAR_17 = VAR_13->fifo_size - VAR_37;
  if (VAR_17 < 0)
   VAR_17 = 1;

  if (FUNC_6(VAR_12) || FUNC_7(VAR_12))
   FUNC_3(VAR_2,
       VAR_3 | (VAR_17 & 0xff));
  else
   FUNC_3(VAR_2, VAR_17 & 0x3f);
 }

 FUNC_1("Setting FIFO watermarks - A: %d, B: %d, C: %d, SR %d\n",
        VAR_19, VAR_20, VAR_16, VAR_17);

 VAR_14 = ((VAR_20 & 0x3f) << 16) | (VAR_19 & 0x3f);
 VAR_15 = (VAR_16 & 0x1f);


 VAR_14 = VAR_14 | (1 << 24) | (1 << 8);
 VAR_15 = VAR_15 | (1 << 8);

 FUNC_3(VAR_0, VAR_14);
 FUNC_3(VAR_1, VAR_15);

 if (VAR_22)
  FUNC_13(VAR_12, 1);
}
