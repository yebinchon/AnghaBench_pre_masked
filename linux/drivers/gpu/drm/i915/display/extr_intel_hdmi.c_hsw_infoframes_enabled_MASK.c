
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct intel_crtc_state {int cpu_transcoder; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct drm_i915_private* FUNC_4 (int ) ;

__attribute__((used)) static u32 FUNC_5(struct intel_encoder *VAR_7,
      const struct intel_crtc_state *VAR_8)
{
 struct drm_i915_private *VAR_9 = FUNC_4(VAR_7->base.dev);
 u32 VAR_10 = FUNC_1(FUNC_0(VAR_8->cpu_transcoder));
 u32 VAR_11;

 VAR_11 = (VAR_5 | VAR_0 |
  VAR_2 | VAR_6 |
  VAR_3 | VAR_4);

 if (FUNC_2(VAR_9) >= 10 || FUNC_3(VAR_9))
  VAR_11 |= VAR_1;

 return VAR_10 & VAR_11;
}
