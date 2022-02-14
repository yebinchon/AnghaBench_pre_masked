
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_crtc {int cpu_fifo_underrun_disabled; } ;
struct drm_i915_private {int irq_lock; } ;
struct drm_device {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*,int,int) ;
 int FUNC_4 (struct drm_device*,int,int) ;
 int FUNC_5 (struct drm_device*,int,int,int) ;
 struct intel_crtc* FUNC_6 (struct drm_i915_private*,int) ;
 int FUNC_7 (struct drm_device*,int,int) ;
 int FUNC_8 (struct drm_device*,int,int,int) ;
 int FUNC_9 (int *) ;
 struct drm_i915_private* FUNC_10 (struct drm_device*) ;

__attribute__((used)) static bool FUNC_11(struct drm_device *VAR_0,
          enum pipe VAR_1, bool VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_10(VAR_0);
 struct intel_crtc *VAR_4 = FUNC_6(VAR_3, VAR_1);
 bool VAR_5;

 FUNC_9(&VAR_3->irq_lock);

 VAR_5 = !VAR_4->cpu_fifo_underrun_disabled;
 VAR_4->cpu_fifo_underrun_disabled = !VAR_2;

 if (FUNC_0(VAR_3))
  FUNC_5(VAR_0, VAR_1, VAR_2, VAR_5);
 else if (FUNC_3(VAR_3, 5, 6))
  FUNC_7(VAR_0, VAR_1, VAR_2);
 else if (FUNC_2(VAR_3, 7))
  FUNC_8(VAR_0, VAR_1, VAR_2, VAR_5);
 else if (FUNC_1(VAR_3) >= 8)
  FUNC_4(VAR_0, VAR_1, VAR_2);

 return VAR_5;
}
