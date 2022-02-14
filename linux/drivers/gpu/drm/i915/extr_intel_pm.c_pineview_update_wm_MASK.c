
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_16__ {TYPE_4__* primary; int dev; } ;
struct intel_crtc {TYPE_5__ base; TYPE_2__* config; } ;
struct drm_i915_private {int mem_freq; int fsb_freq; int is_ddr3; } ;
struct drm_framebuffer {TYPE_6__* format; } ;
struct drm_display_mode {int crtc_clock; } ;
struct cxsr_latency {int cursor_hpll_disable; int display_hpll_disable; int cursor_sr; int display_sr; } ;
struct TYPE_18__ {int fifo_size; } ;
struct TYPE_17__ {int* cpp; } ;
struct TYPE_15__ {TYPE_3__* state; } ;
struct TYPE_14__ {struct drm_framebuffer* fb; } ;
struct TYPE_12__ {struct drm_display_mode adjusted_mode; } ;
struct TYPE_13__ {TYPE_1__ base; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (unsigned int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int VAR_9 ;
 unsigned int FUNC_5 (int,TYPE_7__*,int ,int,int ) ;
 struct cxsr_latency* FUNC_6 (int,int ,int ,int ) ;
 int FUNC_7 (struct drm_i915_private*,int) ;
 TYPE_7__ VAR_10 ;
 TYPE_7__ VAR_11 ;
 TYPE_7__ VAR_12 ;
 TYPE_7__ VAR_13 ;
 struct intel_crtc* FUNC_8 (struct drm_i915_private*) ;
 struct drm_i915_private* FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct intel_crtc *VAR_14)
{
 struct drm_i915_private *VAR_15 = FUNC_9(VAR_14->base.dev);
 struct intel_crtc *VAR_16;
 const struct cxsr_latency *VAR_17;
 u32 VAR_18;
 unsigned int VAR_19;

 VAR_17 = FUNC_6(!FUNC_4(VAR_15),
      VAR_15->is_ddr3,
      VAR_15->fsb_freq,
      VAR_15->mem_freq);
 if (!VAR_17) {
  FUNC_0("Unknown FSB/MEM found, disable CxSR\n");
  FUNC_7(VAR_15, 0);
  return;
 }

 VAR_16 = FUNC_8(VAR_15);
 if (VAR_16) {
  const struct drm_display_mode *VAR_20 =
   &VAR_16->config->base.adjusted_mode;
  const struct drm_framebuffer *VAR_21 =
   VAR_16->base.primary->state->fb;
  int VAR_22 = VAR_21->format->cpp[0];
  int VAR_23 = VAR_20->crtc_clock;


  VAR_19 = FUNC_5(VAR_23, &VAR_13,
     VAR_13.fifo_size,
     VAR_22, VAR_17->display_sr);
  VAR_18 = FUNC_2(VAR_1);
  VAR_18 &= ~VAR_6;
  VAR_18 |= FUNC_1(VAR_19, VAR_9);
  FUNC_3(VAR_1, VAR_18);
  FUNC_0("DSPFW1 register is %x\n", VAR_18);


  VAR_19 = FUNC_5(VAR_23, &VAR_11,
     VAR_13.fifo_size,
     4, VAR_17->cursor_sr);
  VAR_18 = FUNC_2(VAR_2);
  VAR_18 &= ~VAR_3;
  VAR_18 |= FUNC_1(VAR_19, VAR_0);
  FUNC_3(VAR_2, VAR_18);


  VAR_19 = FUNC_5(VAR_23, &VAR_12,
     VAR_12.fifo_size,
     VAR_22, VAR_17->display_hpll_disable);
  VAR_18 = FUNC_2(VAR_2);
  VAR_18 &= ~VAR_5;
  VAR_18 |= FUNC_1(VAR_19, VAR_8);
  FUNC_3(VAR_2, VAR_18);


  VAR_19 = FUNC_5(VAR_23, &VAR_10,
     VAR_12.fifo_size,
     4, VAR_17->cursor_hpll_disable);
  VAR_18 = FUNC_2(VAR_2);
  VAR_18 &= ~VAR_4;
  VAR_18 |= FUNC_1(VAR_19, VAR_7);
  FUNC_3(VAR_2, VAR_18);
  FUNC_0("DSPFW3 register is %x\n", VAR_18);

  FUNC_7(VAR_15, 1);
 } else {
  FUNC_7(VAR_15, 0);
 }
}
