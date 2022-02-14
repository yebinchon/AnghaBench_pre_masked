
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
struct drm_i915_private {int dummy; } ;
typedef int i915_reg_t ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*,int ,int ,int) ;
 int FUNC_4 (struct intel_crtc*) ;
 struct drm_i915_private* FUNC_5 (int ) ;
 struct intel_crtc* FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(const struct intel_crtc_state *VAR_1)
{
 struct intel_crtc *VAR_2 = FUNC_6(VAR_1->base.crtc);
 struct drm_i915_private *VAR_3 = FUNC_5(VAR_2->base.dev);

 if (FUNC_0(VAR_3) >= 4) {
  enum transcoder VAR_4 = VAR_1->cpu_transcoder;
  i915_reg_t VAR_5 = FUNC_1(VAR_4);


  if (FUNC_3(VAR_3, VAR_5,
         VAR_0, 100))
   FUNC_2(1, "pipe_off wait timed out\n");
 } else {
  FUNC_4(VAR_2);
 }
}
