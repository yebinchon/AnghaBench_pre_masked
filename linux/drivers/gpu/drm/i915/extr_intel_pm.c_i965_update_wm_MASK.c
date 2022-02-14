
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_17__ {TYPE_7__* cursor; TYPE_3__* primary; int dev; } ;
struct intel_crtc {TYPE_8__ base; TYPE_4__* config; } ;
struct drm_i915_private {int dummy; } ;
struct drm_framebuffer {TYPE_5__* format; } ;
struct drm_display_mode {int crtc_clock; int crtc_htotal; } ;
struct TYPE_18__ {int guard_size; int fifo_size; int max_wm; int cacheline_size; } ;
struct TYPE_16__ {TYPE_6__* state; } ;
struct TYPE_15__ {int crtc_w; } ;
struct TYPE_14__ {int* cpp; } ;
struct TYPE_10__ {struct drm_display_mode adjusted_mode; } ;
struct TYPE_13__ {int pipe_src_w; TYPE_1__ base; } ;
struct TYPE_12__ {TYPE_2__* state; } ;
struct TYPE_11__ {struct drm_framebuffer* fb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int,int ) ;
 int VAR_6 ;
 int FUNC_3 (int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_9__ VAR_12 ;
 int FUNC_4 (struct drm_i915_private*,int) ;
 int FUNC_5 (int,int,int,int,int const) ;
 struct intel_crtc* FUNC_6 (struct drm_i915_private*) ;
 struct drm_i915_private* FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct intel_crtc *VAR_13)
{
 struct drm_i915_private *VAR_14 = FUNC_7(VAR_13->base.dev);
 struct intel_crtc *VAR_15;
 int VAR_16 = 1;
 int VAR_17 = 16;
 bool VAR_18;


 VAR_15 = FUNC_6(VAR_14);
 if (VAR_15) {

  static const int VAR_19 = 12000;
  const struct drm_display_mode *VAR_20 =
   &VAR_15->config->base.adjusted_mode;
  const struct drm_framebuffer *VAR_21 =
   VAR_15->base.primary->state->fb;
  int VAR_22 = VAR_20->crtc_clock;
  int VAR_23 = VAR_20->crtc_htotal;
  int VAR_24 = VAR_15->config->pipe_src_w;
  int VAR_25 = VAR_21->format->cpp[0];
  int VAR_26;

  VAR_26 = FUNC_5(VAR_22, VAR_23,
        VAR_24, VAR_25, VAR_19 / 100);
  VAR_26 = FUNC_0(VAR_26, VAR_6);
  VAR_16 = VAR_7 - VAR_26;
  if (VAR_16 < 0)
   VAR_16 = 1;
  VAR_16 &= 0x1ff;
  FUNC_1("self-refresh entries: %d, wm: %d\n",
         VAR_26, VAR_16);

  VAR_26 = FUNC_5(VAR_22, VAR_23,
        VAR_15->base.cursor->state->crtc_w, 4,
        VAR_19 / 100);
  VAR_26 = FUNC_0(VAR_26,
           VAR_12.cacheline_size) +
   VAR_12.guard_size;

  VAR_17 = VAR_12.fifo_size - VAR_26;
  if (VAR_17 > VAR_12.max_wm)
   VAR_17 = VAR_12.max_wm;

  FUNC_1("self-refresh watermark: display plane %d "
         "cursor %d\n", VAR_16, VAR_17);

  VAR_18 = 1;
 } else {
  VAR_18 = 0;

  FUNC_4(VAR_14, 0);
 }

 FUNC_1("Setting FIFO watermarks - A: 8, B: 8, C: 8, SR %d\n",
        VAR_16);


 FUNC_3(VAR_3, FUNC_2(VAR_16, VAR_11) |
     FUNC_2(8, VAR_1) |
     FUNC_2(8, VAR_9) |
     FUNC_2(8, VAR_8));
 FUNC_3(VAR_4, FUNC_2(8, VAR_0) |
     FUNC_2(8, VAR_10));

 FUNC_3(VAR_5, FUNC_2(VAR_17, VAR_2));

 if (VAR_18)
  FUNC_4(VAR_14, 1);
}
