
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int crtc; } ;
struct intel_crtc_state {int cpu_transcoder; scalar_t__ double_wide; TYPE_1__ base; } ;
struct TYPE_4__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef int i915_reg_t ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (struct intel_crtc*) ;
 int FUNC_6 (struct intel_crtc_state const*) ;
 int FUNC_7 (int) ;
 struct drm_i915_private* FUNC_8 (int ) ;
 struct intel_crtc* FUNC_9 (int ) ;
 int FUNC_10 (struct intel_crtc*) ;

__attribute__((used)) static void FUNC_11(const struct intel_crtc_state *VAR_2)
{
 struct intel_crtc *VAR_3 = FUNC_9(VAR_2->base.crtc);
 struct drm_i915_private *VAR_4 = FUNC_8(VAR_3->base.dev);
 enum transcoder VAR_5 = VAR_2->cpu_transcoder;
 enum pipe VAR_6 = VAR_3->pipe;
 i915_reg_t VAR_7;
 u32 VAR_8;

 FUNC_0("disabling pipe %c\n", FUNC_7(VAR_6));





 FUNC_5(VAR_3);

 FUNC_10(VAR_3);

 VAR_7 = FUNC_4(VAR_5);
 VAR_8 = FUNC_1(VAR_7);
 if ((VAR_8 & VAR_1) == 0)
  return;





 if (VAR_2->double_wide)
  VAR_8 &= ~VAR_0;


 if (!FUNC_3(VAR_4))
  VAR_8 &= ~VAR_1;

 FUNC_2(VAR_7, VAR_8);
 if ((VAR_8 & VAR_1) == 0)
  FUNC_6(VAR_2);
}
