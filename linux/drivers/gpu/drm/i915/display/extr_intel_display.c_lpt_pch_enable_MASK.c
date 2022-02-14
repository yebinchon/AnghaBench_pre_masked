
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int crtc; } ;
struct intel_crtc_state {int cpu_transcoder; TYPE_1__ base; } ;
struct TYPE_4__ {int dev; } ;
struct intel_crtc {TYPE_2__ base; } ;
struct intel_atomic_state {int dummy; } ;
struct drm_i915_private {int dummy; } ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_private*,int ) ;
 int FUNC_1 (struct intel_crtc_state const*,int ) ;
 int FUNC_2 (struct drm_i915_private*,int) ;
 int FUNC_3 (struct intel_crtc_state const*) ;
 struct drm_i915_private* FUNC_4 (int ) ;
 struct intel_crtc* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(const struct intel_atomic_state *VAR_1,
      const struct intel_crtc_state *VAR_2)
{
 struct intel_crtc *VAR_3 = FUNC_5(VAR_2->base.crtc);
 struct drm_i915_private *VAR_4 = FUNC_4(VAR_3->base.dev);
 enum transcoder VAR_5 = VAR_2->cpu_transcoder;

 FUNC_0(VAR_4, VAR_0);

 FUNC_3(VAR_2);


 FUNC_1(VAR_2, VAR_0);

 FUNC_2(VAR_4, VAR_5);
}
