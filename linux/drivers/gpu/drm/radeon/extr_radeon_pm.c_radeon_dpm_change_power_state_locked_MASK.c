
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct radeon_ring {scalar_t__ ready; } ;
struct radeon_ps {scalar_t__ vce_active; } ;
struct TYPE_7__ {scalar_t__ user_state; scalar_t__ state; scalar_t__ vce_active; int single_display; scalar_t__ new_active_crtcs; scalar_t__ current_active_crtcs; int current_active_crtc_count; int new_active_crtc_count; int forced_level; scalar_t__ thermal_active; struct radeon_ps* requested_ps; struct radeon_ps* current_ps; int uvd_active; } ;
struct TYPE_8__ {int mclk_lock; TYPE_3__ dpm; int dpm_enabled; } ;
struct radeon_device {scalar_t__ family; int flags; TYPE_4__ pm; int ring_lock; TYPE_2__* asic; struct radeon_ring* ring; } ;
typedef enum radeon_pm_state_type { ____Placeholder_radeon_pm_state_type } radeon_pm_state_type ;
typedef enum radeon_dpm_forced_level { ____Placeholder_radeon_dpm_forced_level } radeon_dpm_forced_level ;
struct TYPE_5__ {scalar_t__ force_performance_level; } ;
struct TYPE_6__ {TYPE_1__ dpm; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct radeon_device*) ;
 int VAR_4 ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*,int) ;
 struct radeon_ps* FUNC_7 (struct radeon_device*,int) ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*,struct radeon_ps*) ;
 int FUNC_11 (struct radeon_device*) ;
 int FUNC_12 (struct radeon_device*) ;
 int FUNC_13 (struct radeon_device*,int) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(struct radeon_device *VAR_5)
{
 int VAR_6;
 struct radeon_ps *VAR_7;
 enum radeon_pm_state_type VAR_8;
 int VAR_9;
 bool VAR_10 = FUNC_12(VAR_5);


 if (!VAR_5->pm.dpm_enabled)
  return;

 if (VAR_5->pm.dpm.user_state != VAR_5->pm.dpm.state) {

  if ((!VAR_5->pm.dpm.thermal_active) &&
      (!VAR_5->pm.dpm.uvd_active))
   VAR_5->pm.dpm.state = VAR_5->pm.dpm.user_state;
 }
 VAR_8 = VAR_5->pm.dpm.state;

 VAR_7 = FUNC_7(VAR_5, VAR_8);
 if (VAR_7)
  VAR_5->pm.dpm.requested_ps = VAR_7;
 else
  return;


 if (VAR_5->pm.dpm.current_ps == VAR_5->pm.dpm.requested_ps) {

  if (VAR_7->vce_active != VAR_5->pm.dpm.vce_active)
   goto force;

  if (VAR_5->pm.dpm.single_display != VAR_10)
   goto force;
  if ((VAR_5->family < VAR_0) || (VAR_5->flags & VAR_2)) {



   if (VAR_5->pm.dpm.new_active_crtcs != VAR_5->pm.dpm.current_active_crtcs) {

    FUNC_4(VAR_5);

    FUNC_5(VAR_5);
    VAR_5->pm.dpm.current_active_crtcs = VAR_5->pm.dpm.new_active_crtcs;
    VAR_5->pm.dpm.current_active_crtc_count = VAR_5->pm.dpm.new_active_crtc_count;
   }
   return;
  } else {




   if (VAR_5->pm.dpm.new_active_crtcs ==
       VAR_5->pm.dpm.current_active_crtcs) {
    return;
   } else {
    if ((VAR_5->pm.dpm.current_active_crtc_count > 1) &&
        (VAR_5->pm.dpm.new_active_crtc_count > 1)) {

     FUNC_4(VAR_5);

     FUNC_5(VAR_5);
     VAR_5->pm.dpm.current_active_crtcs = VAR_5->pm.dpm.new_active_crtcs;
     VAR_5->pm.dpm.current_active_crtc_count = VAR_5->pm.dpm.new_active_crtc_count;
     return;
    }
   }
  }
 }

force:
 if (VAR_4 == 1) {
  FUNC_3("switching from power state:\n");
  FUNC_10(VAR_5, VAR_5->pm.dpm.current_ps);
  FUNC_3("switching to power state:\n");
  FUNC_10(VAR_5, VAR_5->pm.dpm.requested_ps);
 }

 FUNC_0(&VAR_5->pm.mclk_lock);
 FUNC_1(&VAR_5->ring_lock);


 VAR_7->vce_active = VAR_5->pm.dpm.vce_active;

 VAR_9 = FUNC_9(VAR_5);
 if (VAR_9)
  goto done;


 FUNC_4(VAR_5);

 FUNC_5(VAR_5);


 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  struct radeon_ring *VAR_11 = &VAR_5->ring[VAR_6];
  if (VAR_11->ready)
   FUNC_13(VAR_5, VAR_6);
 }


 FUNC_11(VAR_5);


 VAR_5->pm.dpm.current_ps = VAR_5->pm.dpm.requested_ps;

 FUNC_8(VAR_5);

 VAR_5->pm.dpm.current_active_crtcs = VAR_5->pm.dpm.new_active_crtcs;
 VAR_5->pm.dpm.current_active_crtc_count = VAR_5->pm.dpm.new_active_crtc_count;
 VAR_5->pm.dpm.single_display = VAR_10;

 if (VAR_5->asic->dpm.force_performance_level) {
  if (VAR_5->pm.dpm.thermal_active) {
   enum radeon_dpm_forced_level VAR_12 = VAR_5->pm.dpm.forced_level;

   FUNC_6(VAR_5, VAR_1);

   VAR_5->pm.dpm.forced_level = VAR_12;
  } else {

   FUNC_6(VAR_5, VAR_5->pm.dpm.forced_level);
  }
 }

done:
 FUNC_2(&VAR_5->ring_lock);
 FUNC_14(&VAR_5->pm.mclk_lock);
}
