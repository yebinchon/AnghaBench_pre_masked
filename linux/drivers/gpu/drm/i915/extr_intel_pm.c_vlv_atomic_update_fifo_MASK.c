
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct vlv_fifo_state {int* plane; } ;
struct intel_uncore {int lock; } ;
struct TYPE_7__ {struct vlv_fifo_state fifo_state; } ;
struct TYPE_8__ {TYPE_3__ vlv; } ;
struct TYPE_5__ {int crtc; } ;
struct intel_crtc_state {int fifo_changed; TYPE_4__ wm; TYPE_1__ base; } ;
struct TYPE_6__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_2__ base; } ;
struct intel_atomic_state {int dummy; } ;
struct drm_i915_private {struct intel_uncore uncore; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct intel_uncore*,int ) ;
 int FUNC_3 (struct intel_uncore*,int ) ;
 int FUNC_4 (struct intel_uncore*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct drm_i915_private* FUNC_7 (int ) ;
 struct intel_crtc* FUNC_8 (int ) ;
 int FUNC_9 (struct intel_crtc*,int,int,int) ;

__attribute__((used)) static void FUNC_10(struct intel_atomic_state *VAR_19,
       struct intel_crtc_state *VAR_20)
{
 struct intel_crtc *VAR_21 = FUNC_8(VAR_20->base.crtc);
 struct drm_i915_private *VAR_22 = FUNC_7(VAR_21->base.dev);
 struct intel_uncore *VAR_23 = &VAR_22->uncore;
 const struct vlv_fifo_state *VAR_24 =
  &VAR_20->wm.vlv.fifo_state;
 int VAR_25, VAR_26, VAR_27;

 if (!VAR_20->fifo_changed)
  return;

 VAR_25 = VAR_24->plane[VAR_4];
 VAR_26 = VAR_24->plane[VAR_5] + VAR_25;
 VAR_27 = VAR_24->plane[VAR_6] + VAR_26;

 FUNC_1(VAR_24->plane[VAR_3] != 63);
 FUNC_1(VAR_27 != 511);

 FUNC_9(VAR_21, VAR_25, VAR_26, VAR_27);
 FUNC_5(&VAR_23->lock);

 switch (VAR_21->pipe) {
  u32 VAR_28, VAR_29, VAR_30;
 case 130:
  VAR_28 = FUNC_3(VAR_23, VAR_0);
  VAR_29 = FUNC_3(VAR_23, VAR_1);

  VAR_28 &= ~(FUNC_0(VAR_7, 0xff) |
       FUNC_0(VAR_9, 0xff));
  VAR_28 |= (FUNC_0(VAR_7, VAR_25) |
      FUNC_0(VAR_9, VAR_26));

  VAR_29 &= ~(FUNC_0(VAR_8, 0x1) |
        FUNC_0(VAR_10, 0x1));
  VAR_29 |= (FUNC_0(VAR_8, VAR_25 >> 8) |
      FUNC_0(VAR_10, VAR_26 >> 8));

  FUNC_4(VAR_23, VAR_0, VAR_28);
  FUNC_4(VAR_23, VAR_1, VAR_29);
  break;
 case 129:
  VAR_28 = FUNC_3(VAR_23, VAR_0);
  VAR_29 = FUNC_3(VAR_23, VAR_1);

  VAR_28 &= ~(FUNC_0(VAR_11, 0xff) |
       FUNC_0(VAR_13, 0xff));
  VAR_28 |= (FUNC_0(VAR_11, VAR_25) |
      FUNC_0(VAR_13, VAR_26));

  VAR_29 &= ~(FUNC_0(VAR_12, 0xff) |
        FUNC_0(VAR_14, 0xff));
  VAR_29 |= (FUNC_0(VAR_12, VAR_25 >> 8) |
      FUNC_0(VAR_14, VAR_26 >> 8));

  FUNC_4(VAR_23, VAR_0, VAR_28);
  FUNC_4(VAR_23, VAR_1, VAR_29);
  break;
 case 128:
  VAR_30 = FUNC_3(VAR_23, VAR_2);
  VAR_29 = FUNC_3(VAR_23, VAR_1);

  VAR_30 &= ~(FUNC_0(VAR_15, 0xff) |
        FUNC_0(VAR_17, 0xff));
  VAR_30 |= (FUNC_0(VAR_15, VAR_25) |
       FUNC_0(VAR_17, VAR_26));

  VAR_29 &= ~(FUNC_0(VAR_16, 0xff) |
        FUNC_0(VAR_18, 0xff));
  VAR_29 |= (FUNC_0(VAR_16, VAR_25 >> 8) |
      FUNC_0(VAR_18, VAR_26 >> 8));

  FUNC_4(VAR_23, VAR_2, VAR_30);
  FUNC_4(VAR_23, VAR_1, VAR_29);
  break;
 default:
  break;
 }

 FUNC_2(VAR_23, VAR_0);

 FUNC_6(&VAR_23->lock);
}
