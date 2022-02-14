
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_crtc {scalar_t__ cpu_fifo_underrun_disabled; } ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*) ;
 struct intel_crtc* FUNC_3 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*,int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct drm_i915_private*,int) ;

void FUNC_7(struct drm_i915_private *VAR_0,
      enum pipe VAR_1)
{
 struct intel_crtc *VAR_2 = FUNC_3(VAR_0, VAR_1);


 if (VAR_2 == ((void*)0))
  return;


 if (FUNC_1(VAR_0) &&
     VAR_2->cpu_fifo_underrun_disabled)
  return;

 if (FUNC_4(VAR_0, VAR_1, 0)) {
  FUNC_6(VAR_0, VAR_1);
  FUNC_0("CPU pipe %c FIFO underrun\n",
     FUNC_5(VAR_1));
 }

 FUNC_2(VAR_0);
}
