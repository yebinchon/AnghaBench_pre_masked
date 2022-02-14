
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sumo_sclk_voltage_mapping_table {TYPE_1__* entries; } ;
struct radeon_ps {int class; scalar_t__ ecclk; scalar_t__ evclk; scalar_t__ vclk; scalar_t__ dclk; scalar_t__ vce_active; } ;
struct radeon_clock_and_voltage_limits {scalar_t__ mclk; int sclk; } ;
struct radeon_clock_voltage_dependency_table {int count; TYPE_6__* entries; } ;
struct TYPE_10__ {struct radeon_clock_and_voltage_limits max_clock_voltage_on_ac; struct radeon_clock_voltage_dependency_table vddc_dependency_on_sclk; } ;
struct TYPE_12__ {size_t vce_level; int new_active_crtc_count; TYPE_3__* vce_states; TYPE_2__ dyn_state; } ;
struct TYPE_13__ {TYPE_4__ dpm; } ;
struct radeon_device {scalar_t__ family; TYPE_5__ pm; } ;
struct kv_ps {int need_dfs_bypass; int num_levels; int dpm0_pg_nb_ps_lo; int dpm0_pg_nb_ps_hi; int dpmx_nb_ps_lo; int dpmx_nb_ps_hi; TYPE_8__* levels; } ;
struct TYPE_15__ {scalar_t__* nbp_memory_clock; scalar_t__ nb_dpm_enable; struct sumo_sclk_voltage_mapping_table sclk_voltage_mapping_table; } ;
struct kv_power_info {scalar_t__ high_voltage_t; int video_start; int battery_state; scalar_t__ disable_nb_ps3_in_battery; TYPE_7__ sys_info; scalar_t__ caps_stable_p_state; } ;
struct TYPE_16__ {scalar_t__ sclk; int vddc_index; } ;
struct TYPE_14__ {scalar_t__ clk; } ;
struct TYPE_11__ {scalar_t__ sclk; scalar_t__ ecclk; scalar_t__ evclk; } ;
struct TYPE_9__ {scalar_t__ sclk_frequency; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct radeon_device*,int ) ;
 int FUNC_1 (struct radeon_device*,int*) ;
 struct kv_power_info* FUNC_2 (struct radeon_device*) ;
 struct kv_ps* FUNC_3 (struct radeon_ps*) ;

__attribute__((used)) static void FUNC_4(struct radeon_device *VAR_4,
     struct radeon_ps *VAR_5,
     struct radeon_ps *VAR_6)
{
 struct kv_ps *VAR_7 = FUNC_3(VAR_5);
 struct kv_power_info *VAR_8 = FUNC_2(VAR_4);
 u32 VAR_9 = 10000;
 u32 VAR_10, VAR_11 = 0;
 int VAR_12, VAR_13;
 bool VAR_14;
 struct radeon_clock_voltage_dependency_table *VAR_15 =
  &VAR_4->pm.dpm.dyn_state.vddc_dependency_on_sclk;
 u32 VAR_16 = 0;
 struct radeon_clock_and_voltage_limits *VAR_17 =
  &VAR_4->pm.dpm.dyn_state.max_clock_voltage_on_ac;

 if (VAR_5->vce_active) {
  VAR_5->evclk = VAR_4->pm.dpm.vce_states[VAR_4->pm.dpm.vce_level].evclk;
  VAR_5->ecclk = VAR_4->pm.dpm.vce_states[VAR_4->pm.dpm.vce_level].ecclk;
 } else {
  VAR_5->evclk = 0;
  VAR_5->ecclk = 0;
 }

 VAR_11 = VAR_17->mclk;
 VAR_10 = VAR_9;

 if (VAR_8->caps_stable_p_state) {
  VAR_16 = (VAR_17->sclk * 75) / 100;

  for (VAR_12 = VAR_15->count - 1; VAR_12 >= 0; VAR_12--) {
   if (VAR_16 >= VAR_15->entries[VAR_12].clk) {
    VAR_16 = VAR_15->entries[VAR_12].clk;
    break;
   }
  }

  if (VAR_12 > 0)
   VAR_16 = VAR_15->entries[0].clk;

  VAR_10 = VAR_16;
 }

 if (VAR_5->vce_active) {
  if (VAR_10 < VAR_4->pm.dpm.vce_states[VAR_4->pm.dpm.vce_level].sclk)
   VAR_10 = VAR_4->pm.dpm.vce_states[VAR_4->pm.dpm.vce_level].sclk;
 }

 VAR_7->need_dfs_bypass = 1;

 for (VAR_12 = 0; VAR_12 < VAR_7->num_levels; VAR_12++) {
  if (VAR_7->levels[VAR_12].sclk < VAR_10)
   VAR_7->levels[VAR_12].sclk = VAR_10;
 }

 if (VAR_15 && VAR_15->count) {
  for (VAR_12 = 0; VAR_12 < VAR_7->num_levels; VAR_12++) {
   if (VAR_8->high_voltage_t &&
       (VAR_8->high_voltage_t <
        FUNC_0(VAR_4, VAR_7->levels[VAR_12].vddc_index))) {
    FUNC_1(VAR_4, &VAR_13);
    VAR_7->levels[VAR_12].sclk = VAR_15->entries[VAR_13].clk;
   }
  }
 } else {
  struct sumo_sclk_voltage_mapping_table *VAR_18 =
   &VAR_8->sys_info.sclk_voltage_mapping_table;

  for (VAR_12 = 0; VAR_12 < VAR_7->num_levels; VAR_12++) {
   if (VAR_8->high_voltage_t &&
       (VAR_8->high_voltage_t <
        FUNC_0(VAR_4, VAR_7->levels[VAR_12].vddc_index))) {
    FUNC_1(VAR_4, &VAR_13);
    VAR_7->levels[VAR_12].sclk = VAR_18->entries[VAR_13].sclk_frequency;
   }
  }
 }

 if (VAR_8->caps_stable_p_state) {
  for (VAR_12 = 0; VAR_12 < VAR_7->num_levels; VAR_12++) {
   VAR_7->levels[VAR_12].sclk = VAR_16;
  }
 }

 VAR_8->video_start = VAR_5->dclk || VAR_5->vclk ||
  VAR_5->evclk || VAR_5->ecclk;

 if ((VAR_5->class & VAR_1) ==
     VAR_0)
  VAR_8->battery_state = 1;
 else
  VAR_8->battery_state = 0;

 if (VAR_4->family == VAR_2 || VAR_4->family == VAR_3) {
  VAR_7->dpm0_pg_nb_ps_lo = 0x1;
  VAR_7->dpm0_pg_nb_ps_hi = 0x0;
  VAR_7->dpmx_nb_ps_lo = 0x1;
  VAR_7->dpmx_nb_ps_hi = 0x0;
 } else {
  VAR_7->dpm0_pg_nb_ps_lo = 0x3;
  VAR_7->dpm0_pg_nb_ps_hi = 0x0;
  VAR_7->dpmx_nb_ps_lo = 0x3;
  VAR_7->dpmx_nb_ps_hi = 0x0;

  if (VAR_8->sys_info.nb_dpm_enable) {
   VAR_14 = (VAR_11 >= VAR_8->sys_info.nbp_memory_clock[3]) ||
    VAR_8->video_start || (VAR_4->pm.dpm.new_active_crtc_count >= 3) ||
    VAR_8->disable_nb_ps3_in_battery;
   VAR_7->dpm0_pg_nb_ps_lo = VAR_14 ? 0x2 : 0x3;
   VAR_7->dpm0_pg_nb_ps_hi = 0x2;
   VAR_7->dpmx_nb_ps_lo = VAR_14 ? 0x2 : 0x3;
   VAR_7->dpmx_nb_ps_hi = 0x2;
  }
 }
}
