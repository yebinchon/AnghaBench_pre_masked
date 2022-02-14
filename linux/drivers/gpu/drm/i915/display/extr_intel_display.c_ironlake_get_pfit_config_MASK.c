
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int enabled; void* size; void* pos; } ;
struct intel_crtc_state {TYPE_1__ pch_pfit; } ;
struct TYPE_4__ {struct drm_device* dev; } ;
struct intel_crtc {int pipe; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;


 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*,int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 struct drm_i915_private* FUNC_7 (struct drm_device*) ;

__attribute__((used)) static void FUNC_8(struct intel_crtc *VAR_2,
         struct intel_crtc_state *VAR_3)
{
 struct drm_device *VAR_4 = VAR_2->base.dev;
 struct drm_i915_private *VAR_5 = FUNC_7(VAR_4);
 u32 VAR_6;

 VAR_6 = FUNC_0(FUNC_2(VAR_2->pipe));

 if (VAR_6 & VAR_0) {
  VAR_3->pch_pfit.enabled = 1;
  VAR_3->pch_pfit.pos = FUNC_0(FUNC_4(VAR_2->pipe));
  VAR_3->pch_pfit.size = FUNC_0(FUNC_5(VAR_2->pipe));




  if (FUNC_1(VAR_5, 7)) {
   FUNC_6((VAR_6 & VAR_1) !=
    FUNC_3(VAR_2->pipe));
  }
 }
}
