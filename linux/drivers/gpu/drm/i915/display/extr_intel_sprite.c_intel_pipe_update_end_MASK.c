
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {int * event; int crtc; } ;
struct intel_crtc_state {TYPE_1__ base; } ;
struct TYPE_7__ {scalar_t__ start_vbl_count; int start_vbl_time; int scanline_start; int max_vbl; int min_vbl; } ;
struct TYPE_9__ {TYPE_3__* dev; } ;
struct intel_crtc {int pipe; TYPE_2__ debug; TYPE_4__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef int ktime_t ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
struct TYPE_8__ {int event_lock; } ;


 int FUNC_0 (char*,int ,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,int) ;
 int FUNC_1 (char*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 scalar_t__ FUNC_5 (struct intel_crtc*) ;
 int FUNC_6 (struct intel_crtc*) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 () ;
 int FUNC_11 (int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 struct drm_i915_private* FUNC_14 (TYPE_3__*) ;
 struct intel_crtc* FUNC_15 (int ) ;
 int FUNC_16 (struct intel_crtc*,scalar_t__,int) ;

void FUNC_17(struct intel_crtc_state *VAR_1)
{
 struct intel_crtc *VAR_2 = FUNC_15(VAR_1->base.crtc);
 enum pipe VAR_3 = VAR_2->pipe;
 int VAR_4 = FUNC_6(VAR_2);
 u32 VAR_5 = FUNC_5(VAR_2);
 ktime_t VAR_6 = FUNC_8();
 struct drm_i915_private *VAR_7 = FUNC_14(VAR_2->base.dev);

 FUNC_16(VAR_2, VAR_5, VAR_4);





 if (VAR_1->base.event) {
  FUNC_2(FUNC_4(&VAR_2->base) != 0);

  FUNC_12(&VAR_2->base.dev->event_lock);
  FUNC_3(&VAR_2->base, VAR_1->base.event);
  FUNC_13(&VAR_2->base.dev->event_lock);

  VAR_1->base.event = ((void*)0);
 }

 FUNC_10();

 if (FUNC_7(VAR_7))
  return;

 if (VAR_2->debug.start_vbl_count &&
     VAR_2->debug.start_vbl_count != VAR_5) {
  FUNC_0("Atomic update failure on pipe %c (start=%u end=%u) time %lld us, min %d, max %d, scanline start %d, end %d\n",
     FUNC_11(VAR_3), VAR_2->debug.start_vbl_count,
     VAR_5,
     FUNC_9(VAR_6, VAR_2->debug.start_vbl_time),
     VAR_2->debug.min_vbl, VAR_2->debug.max_vbl,
     VAR_2->debug.scanline_start, VAR_4);
 }
}
