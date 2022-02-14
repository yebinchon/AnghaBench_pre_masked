
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int wait_queue_head_t ;
typedef int u32 ;
struct drm_display_mode {int crtc_vblank_start; int flags; } ;
struct TYPE_6__ {struct drm_display_mode adjusted_mode; int crtc; } ;
struct intel_crtc_state {TYPE_1__ base; } ;
struct TYPE_7__ {int min_vbl; int max_vbl; int scanline_start; int start_vbl_count; int start_vbl_time; } ;
struct TYPE_8__ {int dev; } ;
struct intel_crtc {TYPE_2__ debug; TYPE_3__ base; int pipe; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int * FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (struct intel_crtc*) ;
 scalar_t__ FUNC_11 (struct intel_crtc_state const*,int ) ;
 int FUNC_12 (struct intel_crtc*) ;
 scalar_t__ FUNC_13 (struct intel_crtc_state const*,int *) ;
 int FUNC_14 (struct drm_display_mode const*,int ) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 long FUNC_18 (int) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int *,int *,int ) ;
 long FUNC_21 (long) ;
 struct drm_i915_private* FUNC_22 (int ) ;
 struct intel_crtc* FUNC_23 (int ) ;
 int FUNC_24 (struct intel_crtc*) ;
 int FUNC_25 (struct intel_crtc*) ;
 int VAR_4 ;

void FUNC_26(const struct intel_crtc_state *VAR_5)
{
 struct intel_crtc *VAR_6 = FUNC_23(VAR_5->base.crtc);
 struct drm_i915_private *VAR_7 = FUNC_22(VAR_6->base.dev);
 const struct drm_display_mode *VAR_8 = &VAR_5->base.adjusted_mode;
 long VAR_9 = FUNC_18(1);
 int VAR_10, VAR_11, VAR_12, VAR_13;
 wait_queue_head_t *VAR_14 = FUNC_8(&VAR_6->base);
 bool VAR_15 = (FUNC_4(VAR_7) || FUNC_3(VAR_7)) &&
  FUNC_11(VAR_5, VAR_1);
 FUNC_0(VAR_4);
 u32 VAR_16;

 VAR_13 = VAR_8->crtc_vblank_start;
 if (VAR_8->flags & VAR_0)
  VAR_13 = FUNC_1(VAR_13, 2);


 VAR_11 = VAR_13 - FUNC_14(VAR_8,
            VAR_3);
 VAR_12 = VAR_13 - 1;

 if (VAR_11 <= 0 || VAR_12 <= 0)
  goto irq_disable;

 if (FUNC_5(FUNC_6(&VAR_6->base)))
  goto irq_disable;






 if (FUNC_13(VAR_5, &VAR_16))
  FUNC_2("PSR idle timed out 0x%x, atomic update may fail\n",
     VAR_16);

 FUNC_16();

 VAR_6->debug.min_vbl = VAR_11;
 VAR_6->debug.max_vbl = VAR_12;
 FUNC_24(VAR_6);

 for (;;) {





  FUNC_20(VAR_14, &VAR_4, VAR_2);

  VAR_10 = FUNC_12(VAR_6);
  if (VAR_10 < VAR_11 || VAR_10 > VAR_12)
   break;

  if (!VAR_9) {
   FUNC_2("Potential atomic update failure on pipe %c\n",
      FUNC_19(VAR_6->pipe));
   break;
  }

  FUNC_17();

  VAR_9 = FUNC_21(VAR_9);

  FUNC_16();
 }

 FUNC_9(VAR_14, &VAR_4);

 FUNC_7(&VAR_6->base);
 while (VAR_15 && VAR_10 == VAR_13)
  VAR_10 = FUNC_12(VAR_6);

 VAR_6->debug.scanline_start = VAR_10;
 VAR_6->debug.start_vbl_time = FUNC_15();
 VAR_6->debug.start_vbl_count = FUNC_10(VAR_6);

 FUNC_25(VAR_6);
 return;

irq_disable:
 FUNC_16();
}
