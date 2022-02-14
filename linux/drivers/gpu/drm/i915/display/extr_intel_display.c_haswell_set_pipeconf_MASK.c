
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int flags; } ;
struct TYPE_5__ {TYPE_1__ adjusted_mode; int crtc; } ;
struct intel_crtc_state {int cpu_transcoder; TYPE_2__ base; scalar_t__ dither; } ;
struct TYPE_6__ {int dev; } ;
struct intel_crtc {TYPE_3__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 struct drm_i915_private* FUNC_4 (int ) ;
 struct intel_crtc* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(const struct intel_crtc_state *VAR_5)
{
 struct intel_crtc *VAR_6 = FUNC_5(VAR_5->base.crtc);
 struct drm_i915_private *VAR_7 = FUNC_4(VAR_6->base.dev);
 enum transcoder VAR_8 = VAR_5->cpu_transcoder;
 u32 VAR_9 = 0;

 if (FUNC_1(VAR_7) && VAR_5->dither)
  VAR_9 |= (VAR_1 | VAR_2);

 if (VAR_5->base.adjusted_mode.flags & VAR_0)
  VAR_9 |= VAR_3;
 else
  VAR_9 |= VAR_4;

 FUNC_0(FUNC_2(VAR_8), VAR_9);
 FUNC_3(FUNC_2(VAR_8));
}
