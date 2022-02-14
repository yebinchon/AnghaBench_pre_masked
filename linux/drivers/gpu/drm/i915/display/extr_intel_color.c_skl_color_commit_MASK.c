
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int crtc; } ;
struct intel_crtc_state {int gamma_mode; scalar_t__ csc_enable; scalar_t__ gamma_enable; TYPE_1__ base; } ;
struct TYPE_4__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct intel_crtc_state const*) ;
 int FUNC_5 (struct intel_crtc_state const*) ;
 struct drm_i915_private* FUNC_6 (int ) ;
 struct intel_crtc* FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(const struct intel_crtc_state *VAR_2)
{
 struct intel_crtc *VAR_3 = FUNC_7(VAR_2->base.crtc);
 struct drm_i915_private *VAR_4 = FUNC_6(VAR_3->base.dev);
 enum pipe VAR_5 = VAR_3->pipe;
 u32 VAR_6 = 0;






 if (VAR_2->gamma_enable)
  VAR_6 |= VAR_1;
 if (VAR_2->csc_enable)
  VAR_6 |= VAR_0;
 FUNC_1(FUNC_3(VAR_5), VAR_6);

 FUNC_1(FUNC_0(VAR_3->pipe), VAR_2->gamma_mode);

 if (FUNC_2(VAR_4) >= 11)
  FUNC_4(VAR_2);
 else
  FUNC_5(VAR_2);
}
