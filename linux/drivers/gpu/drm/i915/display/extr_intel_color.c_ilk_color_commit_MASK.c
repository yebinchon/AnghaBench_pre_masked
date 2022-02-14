
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int crtc; } ;
struct intel_crtc_state {int gamma_mode; TYPE_1__ base; } ;
struct TYPE_4__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (struct intel_crtc_state const*) ;
 struct drm_i915_private* FUNC_5 (int ) ;
 struct intel_crtc* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(const struct intel_crtc_state *VAR_1)
{
 struct intel_crtc *VAR_2 = FUNC_6(VAR_1->base.crtc);
 struct drm_i915_private *VAR_3 = FUNC_5(VAR_2->base.dev);
 enum pipe VAR_4 = VAR_2->pipe;
 u32 VAR_5;

 VAR_5 = FUNC_0(FUNC_2(VAR_4));
 VAR_5 &= ~VAR_0;
 VAR_5 |= FUNC_3(VAR_1->gamma_mode);
 FUNC_1(FUNC_2(VAR_4), VAR_5);

 FUNC_4(VAR_1);
}
