
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int crtc; } ;
struct intel_crtc_state {int fdi_lanes; TYPE_1__ base; } ;
struct TYPE_4__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef int i915_reg_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int) ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 struct drm_i915_private* FUNC_7 (int ) ;
 struct intel_crtc* FUNC_8 (int ) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(const struct intel_crtc_state *VAR_5)
{
 struct intel_crtc *VAR_6 = FUNC_8(VAR_5->base.crtc);
 struct drm_i915_private *VAR_7 = FUNC_7(VAR_6->base.dev);
 int VAR_8 = VAR_6->pipe;
 i915_reg_t VAR_9;
 u32 VAR_10;


 VAR_9 = FUNC_1(VAR_8);
 VAR_10 = FUNC_3(VAR_9);
 VAR_10 &= ~(VAR_0 | (0x7 << 16));
 VAR_10 |= FUNC_0(VAR_5->fdi_lanes);
 VAR_10 |= (FUNC_3(FUNC_5(VAR_8)) & VAR_4) << 11;
 FUNC_4(VAR_9, VAR_10 | VAR_2);

 FUNC_6(VAR_9);
 FUNC_9(200);


 VAR_10 = FUNC_3(VAR_9);
 FUNC_4(VAR_9, VAR_10 | VAR_1);

 FUNC_6(VAR_9);
 FUNC_9(200);


 VAR_9 = FUNC_2(VAR_8);
 VAR_10 = FUNC_3(VAR_9);
 if ((VAR_10 & VAR_3) == 0) {
  FUNC_4(VAR_9, VAR_10 | VAR_3);

  FUNC_6(VAR_9);
  FUNC_9(100);
 }
}
