
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_crtc {int pch_fifo_underrun_disabled; } ;
struct drm_i915_private {int irq_lock; int drm; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int *,int,int,int) ;
 int FUNC_2 (int *,int,int) ;
 struct intel_crtc* FUNC_3 (struct drm_i915_private*,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

bool FUNC_6(struct drm_i915_private *VAR_0,
        enum pipe VAR_1,
        bool VAR_2)
{
 struct intel_crtc *VAR_3 =
  FUNC_3(VAR_0, VAR_1);
 unsigned long VAR_4;
 bool VAR_5;
 FUNC_4(&VAR_0->irq_lock, VAR_4);

 VAR_5 = !VAR_3->pch_fifo_underrun_disabled;
 VAR_3->pch_fifo_underrun_disabled = !VAR_2;

 if (FUNC_0(VAR_0))
  FUNC_2(&VAR_0->drm,
      VAR_1,
      VAR_2);
 else
  FUNC_1(&VAR_0->drm,
      VAR_1,
      VAR_2, VAR_5);

 FUNC_5(&VAR_0->irq_lock, VAR_4);
 return VAR_5;
}
