
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_rps {int pm_iir; int work; scalar_t__ interrupts_enabled; } ;
struct intel_gt {int irq_lock; } ;
struct TYPE_2__ {struct intel_rps rps; } ;
struct drm_i915_private {int pm_rps_events; int * engine; struct intel_gt gt; TYPE_1__ gt_pm; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (struct intel_gt*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct drm_i915_private *VAR_3, u32 VAR_4)
{
 struct intel_rps *VAR_5 = &VAR_3->gt_pm.rps;
 struct intel_gt *VAR_6 = &VAR_3->gt;

 if (VAR_4 & VAR_3->pm_rps_events) {
  FUNC_5(&VAR_6->irq_lock);
  FUNC_2(VAR_6, VAR_4 & VAR_3->pm_rps_events);
  if (VAR_5->interrupts_enabled) {
   VAR_5->pm_iir |= VAR_4 & VAR_3->pm_rps_events;
   FUNC_4(&VAR_5->work);
  }
  FUNC_6(&VAR_6->irq_lock);
 }

 if (FUNC_1(VAR_3) >= 8)
  return;

 if (VAR_4 & VAR_1)
  FUNC_3(VAR_3->engine[VAR_2]);

 if (VAR_4 & VAR_0)
  FUNC_0("Command parser error, pm_iir 0x%08x\n", VAR_4);
}
