
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u32 ;
typedef scalar_t__ u16 ;
struct trinity_ps {size_t num_levels; int Dpm0PgNbPsLo; int Dpm0PgNbPsHi; int DpmXNbPsLo; int DpmXNbPsHi; TYPE_4__* levels; int bapm_flags; } ;
struct TYPE_10__ {size_t min_sclk; int uma_channel_number; scalar_t__ nb_dpm_enable; } ;
struct trinity_power_info {TYPE_5__ sys_info; } ;
struct radeon_ps {int class; scalar_t__ ecclk; scalar_t__ evclk; scalar_t__ vce_active; } ;
struct TYPE_7__ {size_t new_active_crtc_count; size_t vce_level; TYPE_1__* vce_states; } ;
struct TYPE_8__ {TYPE_2__ dpm; } ;
struct radeon_device {TYPE_3__ pm; } ;
struct TYPE_9__ {size_t vddc_index; size_t sclk; int allow_gnb_slow; int vce_wm; int display_wm; scalar_t__ force_nbp_state; int ds_divider_index; int ss_divider_index; } ;
struct TYPE_6__ {scalar_t__ sclk; scalar_t__ ecclk; scalar_t__ evclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct radeon_device*,scalar_t__,size_t) ;
 int FUNC_1 (struct radeon_device*,struct radeon_ps*) ;
 int FUNC_2 (struct radeon_device*,struct trinity_ps*,size_t) ;
 int FUNC_3 (struct radeon_device*,scalar_t__) ;
 struct trinity_power_info* FUNC_4 (struct radeon_device*) ;
 struct trinity_ps* FUNC_5 (struct radeon_ps*) ;
 size_t FUNC_6 (struct radeon_device*,size_t) ;
 int FUNC_7 (struct radeon_device*,scalar_t__,scalar_t__,scalar_t__*) ;
 void FUNC_8 (struct radeon_device*,struct trinity_ps*,struct trinity_ps*) ;

__attribute__((used)) static void FUNC_9(struct radeon_device *VAR_6,
          struct radeon_ps *VAR_7,
          struct radeon_ps *VAR_8)
{
 struct trinity_ps *VAR_9 = FUNC_5(VAR_7);
 struct trinity_ps *VAR_10 = FUNC_5(VAR_8);
 struct trinity_power_info *VAR_11 = FUNC_4(VAR_6);
 u32 VAR_12 = 0;
 u32 VAR_13 = VAR_11->sys_info.min_sclk;
 u32 VAR_14 = VAR_11->sys_info.min_sclk;
 u32 VAR_15;
 u16 VAR_16;
 bool VAR_17;
 u32 VAR_18 = VAR_6->pm.dpm.new_active_crtc_count;

 if (VAR_7->class & VAR_2)
  return FUNC_8(VAR_6, VAR_9, VAR_10);

 FUNC_1(VAR_6, VAR_7);

 if (VAR_7->vce_active) {
  VAR_7->evclk = VAR_6->pm.dpm.vce_states[VAR_6->pm.dpm.vce_level].evclk;
  VAR_7->ecclk = VAR_6->pm.dpm.vce_states[VAR_6->pm.dpm.vce_level].ecclk;
 } else {
  VAR_7->evclk = 0;
  VAR_7->ecclk = 0;
 }

 for (VAR_15 = 0; VAR_15 < VAR_9->num_levels; VAR_15++) {
  if (VAR_9->levels[VAR_15].vddc_index < VAR_12)
   VAR_9->levels[VAR_15].vddc_index = VAR_12;

  if (VAR_9->levels[VAR_15].sclk < VAR_13)
   VAR_9->levels[VAR_15].sclk =
    FUNC_6(VAR_6, VAR_13);


  if (VAR_7->vce_active) {

   if (VAR_9->levels[VAR_15].sclk < VAR_6->pm.dpm.vce_states[VAR_6->pm.dpm.vce_level].sclk)
    VAR_9->levels[VAR_15].sclk = VAR_6->pm.dpm.vce_states[VAR_6->pm.dpm.vce_level].sclk;

   FUNC_7(VAR_6, VAR_7->evclk, VAR_7->ecclk, &VAR_16);
   if (VAR_9->levels[VAR_15].vddc_index < VAR_16)
    VAR_9->levels[VAR_15].vddc_index = VAR_16;
  }

  VAR_9->levels[VAR_15].ds_divider_index =
   FUNC_0(VAR_6, VAR_9->levels[VAR_15].sclk, VAR_14);

  VAR_9->levels[VAR_15].ss_divider_index = VAR_9->levels[VAR_15].ds_divider_index;

  VAR_9->levels[VAR_15].allow_gnb_slow = 1;
  VAR_9->levels[VAR_15].force_nbp_state = 0;
  VAR_9->levels[VAR_15].display_wm =
   FUNC_2(VAR_6, VAR_9, VAR_15);
  VAR_9->levels[VAR_15].vce_wm =
   FUNC_3(VAR_6, VAR_9->levels[0].sclk);
 }

 if ((VAR_7->class & (VAR_0 | VAR_1)) ||
     ((VAR_7->class & VAR_4) == VAR_3))
  VAR_9->bapm_flags |= VAR_5;

 if (VAR_11->sys_info.nb_dpm_enable) {
  VAR_9->Dpm0PgNbPsLo = 0x1;
  VAR_9->Dpm0PgNbPsHi = 0x0;
  VAR_9->DpmXNbPsLo = 0x2;
  VAR_9->DpmXNbPsHi = 0x1;

  if ((VAR_7->class & (VAR_0 | VAR_1)) ||
      ((VAR_7->class & VAR_4) == VAR_3)) {
   VAR_17 = ((VAR_7->class & VAR_0) ||
          ((VAR_7->class & VAR_1) &&
           (VAR_11->sys_info.uma_channel_number == 1)));
   VAR_17 = (VAR_18 >= 3) || VAR_17;
   VAR_9->Dpm0PgNbPsLo = VAR_17 ? 0x2 : 0x3;
   VAR_9->Dpm0PgNbPsHi = 0x1;
   VAR_9->DpmXNbPsLo = VAR_17 ? 0x2 : 0x3;
   VAR_9->DpmXNbPsHi = 0x2;
   VAR_9->levels[VAR_9->num_levels - 1].allow_gnb_slow = 0;
  }
 }
}
