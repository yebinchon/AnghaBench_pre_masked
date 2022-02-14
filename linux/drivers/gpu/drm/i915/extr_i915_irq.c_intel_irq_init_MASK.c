
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct intel_rps {int pm_intrmsk_mbz; int work; } ;
struct TYPE_10__ {int hpd_irq_setup; } ;
struct TYPE_9__ {int hpd_short_storm_enabled; int hpd_storm_threshold; } ;
struct TYPE_8__ {int pm_guc_events; } ;
struct TYPE_7__ {int ** remap_info; int error_work; } ;
struct TYPE_6__ {struct intel_rps rps; } ;
struct drm_device {int vblank_disable_immediate; } ;
struct drm_i915_private {int pm_rps_events; int display_irqs_enabled; TYPE_5__ display; TYPE_4__ hotplug; TYPE_3__ gt; TYPE_2__ l3_parity; TYPE_1__ gt_pm; struct drm_device drm; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct drm_i915_private*) ;
 scalar_t__ FUNC_8 (struct drm_i915_private*) ;
 scalar_t__ FUNC_9 (struct drm_i915_private*) ;
 scalar_t__ FUNC_10 (struct drm_i915_private*) ;
 scalar_t__ FUNC_11 (struct drm_i915_private*) ;
 scalar_t__ FUNC_12 (struct drm_i915_private*) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_13 (struct drm_i915_private*) ;
 int VAR_13 ;
 int FUNC_14 (struct drm_i915_private*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

void FUNC_15(struct drm_i915_private *VAR_17)
{
 struct drm_device *VAR_18 = &VAR_17->drm;
 struct intel_rps *VAR_19 = &VAR_17->gt_pm.rps;
 int VAR_20;

 if (FUNC_11(VAR_17))
  FUNC_13(VAR_17);

 FUNC_14(VAR_17);

 FUNC_6(&VAR_19->work, VAR_11);

 FUNC_6(&VAR_17->l3_parity.error_work, VAR_14);
 for (VAR_20 = 0; VAR_20 < VAR_7; ++VAR_20)
  VAR_17->l3_parity.remap_info[VAR_20] = ((void*)0);


 if (FUNC_3(VAR_17) && FUNC_7(VAR_17) < 11)
  VAR_17->gt.pm_guc_events = VAR_5 << 16;


 if (FUNC_12(VAR_17))

  VAR_17->pm_rps_events = VAR_2;
 else
  VAR_17->pm_rps_events = (VAR_3 |
        VAR_0 |
        VAR_1);


 if (FUNC_7(VAR_17) > 9)
  FUNC_0(VAR_17->pm_rps_events & 0xffff0000);

 VAR_19->pm_intrmsk_mbz = 0;







 if (FUNC_7(VAR_17) <= 7)
  VAR_19->pm_intrmsk_mbz |= VAR_2;

 if (FUNC_7(VAR_17) >= 8)
  VAR_19->pm_intrmsk_mbz |= VAR_4;

 VAR_18->vblank_disable_immediate = 1;







 VAR_17->display_irqs_enabled = 1;
 if (FUNC_12(VAR_17) || FUNC_9(VAR_17))
  VAR_17->display_irqs_enabled = 0;

 VAR_17->hotplug.hpd_storm_threshold = VAR_6;






 VAR_17->hotplug.hpd_short_storm_enabled = !FUNC_1(VAR_17);

 if (FUNC_2(VAR_17)) {
  if (FUNC_5(VAR_17))
   VAR_17->display.hpd_irq_setup = VAR_12;
 } else {
  if (FUNC_4(VAR_17))

   VAR_17->display.hpd_irq_setup = VAR_15;
  else if (FUNC_7(VAR_17) >= 11)
   VAR_17->display.hpd_irq_setup = VAR_10;
  else if (FUNC_10(VAR_17))
   VAR_17->display.hpd_irq_setup = VAR_9;
  else if (FUNC_8(VAR_17) >= VAR_8)
   VAR_17->display.hpd_irq_setup = VAR_16;
  else
   VAR_17->display.hpd_irq_setup = VAR_13;
 }
}
