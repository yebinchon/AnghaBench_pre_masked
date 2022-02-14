
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct intel_scaler {int mode; } ;
struct TYPE_15__ {int x1; int y1; } ;
struct TYPE_14__ {TYPE_4__* fb; TYPE_6__ dst; int src; } ;
struct intel_plane_state {int scaler_id; TYPE_5__ base; } ;
struct TYPE_10__ {int dev; } ;
struct intel_plane {int pipe; int id; TYPE_1__ base; } ;
struct TYPE_11__ {struct intel_scaler* scalers; } ;
struct intel_crtc_state {TYPE_2__ scaler_state; } ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
struct TYPE_13__ {TYPE_3__* format; } ;
struct TYPE_12__ {int format; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int *,TYPE_6__*,int ,int ) ;
 int FUNC_10 (int *,TYPE_6__*,int ,int ) ;
 int FUNC_11 (TYPE_6__*) ;
 int FUNC_12 (TYPE_6__*) ;
 int FUNC_13 (struct drm_i915_private*,int ) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int,int,int) ;
 struct drm_i915_private* FUNC_16 (int ) ;

__attribute__((used)) static void
FUNC_17(struct intel_plane *VAR_2,
     const struct intel_crtc_state *VAR_3,
     const struct intel_plane_state *VAR_4)
{
 struct drm_i915_private *VAR_5 = FUNC_16(VAR_2->base.dev);
 enum pipe VAR_6 = VAR_2->pipe;
 int VAR_7 = VAR_4->scaler_id;
 const struct intel_scaler *VAR_8 =
  &VAR_3->scaler_state.scalers[VAR_7];
 int VAR_9 = VAR_4->base.dst.x1;
 int VAR_10 = VAR_4->base.dst.y1;
 u32 VAR_11 = FUNC_12(&VAR_4->base.dst);
 u32 VAR_12 = FUNC_11(&VAR_4->base.dst);
 u16 VAR_13, VAR_14;
 u16 VAR_15, VAR_16;
 int VAR_17, VAR_18;

 VAR_17 = FUNC_9(&VAR_4->base.src,
          &VAR_4->base.dst,
          0, VAR_0);
 VAR_18 = FUNC_10(&VAR_4->base.src,
          &VAR_4->base.dst,
          0, VAR_0);


 if (FUNC_14(VAR_4->base.fb->format->format) &&
     !FUNC_13(VAR_5, VAR_2->id)) {
  VAR_13 = FUNC_15(1, VAR_17, 0);
  VAR_15 = FUNC_15(1, VAR_18, 0);


  VAR_14 = FUNC_15(2, VAR_17, 1);
  VAR_16 = FUNC_15(2, VAR_18, 0);
 } else {

  VAR_13 = 0;
  VAR_15 = 0;

  VAR_14 = FUNC_15(1, VAR_17, 0);
  VAR_16 = FUNC_15(1, VAR_18, 0);
 }

 FUNC_0(FUNC_4(VAR_6, VAR_7),
        VAR_1 | FUNC_1(VAR_2->id) | VAR_8->mode);
 FUNC_0(FUNC_6(VAR_6, VAR_7),
        FUNC_3(VAR_15) | FUNC_2(VAR_16));
 FUNC_0(FUNC_5(VAR_6, VAR_7),
        FUNC_3(VAR_13) | FUNC_2(VAR_14));
 FUNC_0(FUNC_7(VAR_6, VAR_7), (VAR_9 << 16) | VAR_10);
 FUNC_0(FUNC_8(VAR_6, VAR_7), (VAR_11 << 16) | VAR_12);
}
