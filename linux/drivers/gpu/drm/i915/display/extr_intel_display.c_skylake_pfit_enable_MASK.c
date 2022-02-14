
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_8__ {int size; int pos; scalar_t__ enabled; } ;
struct intel_crtc_scaler_state {scalar_t__ scaler_id; TYPE_3__* scalers; } ;
struct TYPE_5__ {int crtc; } ;
struct intel_crtc_state {int pipe_src_w; int pipe_src_h; TYPE_4__ pch_pfit; struct intel_crtc_scaler_state scaler_state; TYPE_1__ base; } ;
struct TYPE_6__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
struct TYPE_7__ {int mode; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int,int) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int,int,int) ;
 struct drm_i915_private* FUNC_11 (int ) ;
 struct intel_crtc* FUNC_12 (int ) ;

__attribute__((used)) static void FUNC_13(const struct intel_crtc_state *VAR_2)
{
 struct intel_crtc *VAR_3 = FUNC_12(VAR_2->base.crtc);
 struct drm_i915_private *VAR_4 = FUNC_11(VAR_3->base.dev);
 enum pipe VAR_5 = VAR_3->pipe;
 const struct intel_crtc_scaler_state *VAR_6 =
  &VAR_2->scaler_state;

 if (VAR_2->pch_pfit.enabled) {
  u16 VAR_7, VAR_8;
  int VAR_9, VAR_10, VAR_11, VAR_12;
  int VAR_13;

  if (FUNC_9(VAR_2->scaler_state.scaler_id < 0))
   return;

  VAR_9 = (VAR_2->pch_pfit.size >> 16) & 0xFFFF;
  VAR_10 = VAR_2->pch_pfit.size & 0xFFFF;

  VAR_11 = (VAR_2->pipe_src_w << 16) / VAR_9;
  VAR_12 = (VAR_2->pipe_src_h << 16) / VAR_10;

  VAR_7 = FUNC_10(1, VAR_11, 0);
  VAR_8 = FUNC_10(1, VAR_12, 0);

  VAR_13 = VAR_6->scaler_id;
  FUNC_0(FUNC_4(VAR_5, VAR_13), VAR_1 |
   VAR_0 | VAR_6->scalers[VAR_13].mode);
  FUNC_1(FUNC_6(VAR_5, VAR_13),
         FUNC_3(0) | FUNC_2(VAR_8));
  FUNC_1(FUNC_5(VAR_5, VAR_13),
         FUNC_3(0) | FUNC_2(VAR_7));
  FUNC_0(FUNC_7(VAR_5, VAR_13), VAR_2->pch_pfit.pos);
  FUNC_0(FUNC_8(VAR_5, VAR_13), VAR_2->pch_pfit.size);
 }
}
