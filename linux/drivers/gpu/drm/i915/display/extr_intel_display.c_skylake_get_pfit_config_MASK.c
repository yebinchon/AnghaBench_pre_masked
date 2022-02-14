
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int enabled; void* size; void* pos; } ;
struct intel_crtc_scaler_state {int scaler_id; int scaler_users; TYPE_3__* scalers; } ;
struct intel_crtc_state {TYPE_2__ pch_pfit; struct intel_crtc_scaler_state scaler_state; } ;
struct TYPE_4__ {struct drm_device* dev; } ;
struct intel_crtc {int num_scalers; int pipe; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_6__ {int in_use; } ;


 void* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 struct drm_i915_private* FUNC_4 (struct drm_device*) ;

__attribute__((used)) static void FUNC_5(struct intel_crtc *VAR_3,
        struct intel_crtc_state *VAR_4)
{
 struct drm_device *VAR_5 = VAR_3->base.dev;
 struct drm_i915_private *VAR_6 = FUNC_4(VAR_5);
 struct intel_crtc_scaler_state *VAR_7 = &VAR_4->scaler_state;
 u32 VAR_8 = 0;
 int VAR_9 = -1;
 int VAR_10;


 for (VAR_10 = 0; VAR_10 < VAR_3->num_scalers; VAR_10++) {
  VAR_8 = FUNC_0(FUNC_1(VAR_3->pipe, VAR_10));
  if (VAR_8 & VAR_1 && !(VAR_8 & VAR_0)) {
   VAR_9 = VAR_10;
   VAR_4->pch_pfit.enabled = 1;
   VAR_4->pch_pfit.pos = FUNC_0(FUNC_2(VAR_3->pipe, VAR_10));
   VAR_4->pch_pfit.size = FUNC_0(FUNC_3(VAR_3->pipe, VAR_10));
   VAR_7->scalers[VAR_10].in_use = 1;
   break;
  }
 }

 VAR_7->scaler_id = VAR_9;
 if (VAR_9 >= 0) {
  VAR_7->scaler_users |= (1 << VAR_2);
 } else {
  VAR_7->scaler_users &= ~(1 << VAR_2);
 }
}
