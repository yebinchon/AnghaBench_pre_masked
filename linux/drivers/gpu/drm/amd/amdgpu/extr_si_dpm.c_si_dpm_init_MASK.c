
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


struct rv7xx_power_info {int mclk_strobe_mode_threshold; int mclk_stutter_mode_threshold; int mclk_edc_enable_threshold; int gfx_clock_gating; int thermal_protection; int vrc; int pasi; int asi; void* mvdd_control; void* voltage_control; scalar_t__ ref_div; scalar_t__ max_vddc_in_table; scalar_t__ min_vddc_in_table; scalar_t__ acpi_vddc; } ;
struct evergreen_power_info {int smu_uvd_hs; int mclk_edc_wr_enable_threshold; int sclk_deep_sleep; int dynamic_ac_timing; int light_sleep; int pcie_performance_request; void* vddci_control; scalar_t__ acpi_vddci; struct rv7xx_power_info rv7xx; } ;
struct ni_power_info {int mclk_rtt_mode_threshold; struct evergreen_power_info eg; } ;
struct si_power_info {int sys_pcie_mask; int sclk_deep_sleep_above_low; int fan_ctrl_is_in_default_mode; int sram_end; void* vddc_phase_shed_control; void* vddci_control_svi2; int svc_gpio_id; int svd_gpio_id; void* voltage_control_svi2; int boot_pcie_gen; int force_pcie_gen; struct ni_power_info ni; } ;
struct atom_clock_dividers {scalar_t__ ref_div; } ;
struct TYPE_11__ {scalar_t__ sclk; scalar_t__ mclk; } ;
struct TYPE_10__ {int * values; scalar_t__ count; } ;
struct TYPE_9__ {int * values; scalar_t__ count; } ;
struct TYPE_12__ {int count; TYPE_8__* entries; } ;
struct TYPE_14__ {int mclk_sclk_ratio; int sclk_mclk_delta; int vddc_vddci_delta; TYPE_3__ max_clock_voltage_on_ac; TYPE_3__ max_clock_voltage_on_dc; TYPE_2__ valid_mclk_values; TYPE_1__ valid_sclk_values; TYPE_4__ vddc_dependency_on_dispclk; } ;
struct TYPE_13__ {scalar_t__ voltage_response_time; scalar_t__ backbias_response_time; TYPE_6__ dyn_state; struct si_power_info* priv; } ;
struct TYPE_15__ {int pcie_gen_mask; scalar_t__ int_thermal_type; TYPE_5__ dpm; } ;
struct amdgpu_device {TYPE_7__ pm; } ;
struct amdgpu_clock_voltage_dependency_entry {int dummy; } ;
struct TYPE_16__ {int clk; int v; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*,int ,int ,int,struct atom_clock_dividers*) ;
 int FUNC_2 (struct amdgpu_device*,int ,int *,int *) ;
 void* FUNC_3 (struct amdgpu_device*,int ,int ) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*) ;
 TYPE_8__* FUNC_7 (int,int,int ) ;
 struct si_power_info* FUNC_8 (int,int ) ;
 int FUNC_9 (struct amdgpu_device*) ;
 int FUNC_10 (struct amdgpu_device*) ;
 int FUNC_11 (struct amdgpu_device*) ;
 int FUNC_12 (struct amdgpu_device*) ;
 int FUNC_13 (struct amdgpu_device*) ;
 scalar_t__ FUNC_14 (struct amdgpu_device*) ;
 int FUNC_15 (struct amdgpu_device*) ;
 int FUNC_16 (struct amdgpu_device*) ;
 int FUNC_17 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_18(struct amdgpu_device *VAR_19)
{
 struct rv7xx_power_info *VAR_20;
 struct evergreen_power_info *VAR_21;
 struct ni_power_info *VAR_22;
 struct si_power_info *VAR_23;
 struct atom_clock_dividers VAR_24;
 int VAR_25;

 VAR_23 = FUNC_8(sizeof(struct si_power_info), VAR_5);
 if (VAR_23 == ((void*)0))
  return -VAR_4;
 VAR_19->pm.dpm.priv = VAR_23;
 VAR_22 = &VAR_23->ni;
 VAR_21 = &VAR_22->eg;
 VAR_20 = &VAR_21->rv7xx;

 VAR_23->sys_pcie_mask =
  VAR_19->pm.pcie_gen_mask & VAR_1;
 VAR_23->force_pcie_gen = VAR_0;
 VAR_23->boot_pcie_gen = FUNC_11(VAR_19);

 FUNC_17(VAR_19);

 FUNC_10(VAR_19);
 FUNC_12(VAR_19);
 FUNC_16(VAR_19);

 VAR_20->acpi_vddc = 0;
 VAR_21->acpi_vddci = 0;
 VAR_20->min_vddc_in_table = 0;
 VAR_20->max_vddc_in_table = 0;

 VAR_25 = FUNC_5(VAR_19);
 if (VAR_25)
  return VAR_25;

 VAR_25 = FUNC_6(VAR_19);
 if (VAR_25)
  return VAR_25;

 VAR_25 = FUNC_15(VAR_19);
 if (VAR_25)
  return VAR_25;

 VAR_19->pm.dpm.dyn_state.vddc_dependency_on_dispclk.entries =
  FUNC_7(4,
   sizeof(struct amdgpu_clock_voltage_dependency_entry),
   VAR_5);
 if (!VAR_19->pm.dpm.dyn_state.vddc_dependency_on_dispclk.entries) {
  FUNC_4(VAR_19);
  return -VAR_4;
 }
 VAR_19->pm.dpm.dyn_state.vddc_dependency_on_dispclk.count = 4;
 VAR_19->pm.dpm.dyn_state.vddc_dependency_on_dispclk.entries[0].clk = 0;
 VAR_19->pm.dpm.dyn_state.vddc_dependency_on_dispclk.entries[0].v = 0;
 VAR_19->pm.dpm.dyn_state.vddc_dependency_on_dispclk.entries[1].clk = 36000;
 VAR_19->pm.dpm.dyn_state.vddc_dependency_on_dispclk.entries[1].v = 720;
 VAR_19->pm.dpm.dyn_state.vddc_dependency_on_dispclk.entries[2].clk = 54000;
 VAR_19->pm.dpm.dyn_state.vddc_dependency_on_dispclk.entries[2].v = 810;
 VAR_19->pm.dpm.dyn_state.vddc_dependency_on_dispclk.entries[3].clk = 72000;
 VAR_19->pm.dpm.dyn_state.vddc_dependency_on_dispclk.entries[3].v = 900;

 if (VAR_19->pm.dpm.voltage_response_time == 0)
  VAR_19->pm.dpm.voltage_response_time = VAR_8;
 if (VAR_19->pm.dpm.backbias_response_time == 0)
  VAR_19->pm.dpm.backbias_response_time = VAR_6;

 VAR_25 = FUNC_1(VAR_19, VAR_2,
          0, 0, &VAR_24);
 if (VAR_25)
  VAR_20->ref_div = VAR_24.ref_div + 1;
 else
  VAR_20->ref_div = VAR_7;

 VAR_21->smu_uvd_hs = 0;

 VAR_20->mclk_strobe_mode_threshold = 40000;
 if (FUNC_14(VAR_19))
  VAR_20->mclk_stutter_mode_threshold = 0;
 else
  VAR_20->mclk_stutter_mode_threshold = VAR_20->mclk_strobe_mode_threshold;
 VAR_20->mclk_edc_enable_threshold = 40000;
 VAR_21->mclk_edc_wr_enable_threshold = 40000;

 VAR_22->mclk_rtt_mode_threshold = VAR_21->mclk_edc_wr_enable_threshold;

 VAR_20->voltage_control =
  FUNC_3(VAR_19, VAR_11,
         VAR_16);
 if (!VAR_20->voltage_control) {
  VAR_23->voltage_control_svi2 =
   FUNC_3(VAR_19, VAR_11,
          VAR_18);
  if (VAR_23->voltage_control_svi2)
   FUNC_2(VAR_19, VAR_11,
        &VAR_23->svd_gpio_id, &VAR_23->svc_gpio_id);
 }

 VAR_20->mvdd_control =
  FUNC_3(VAR_19, VAR_10,
         VAR_16);

 VAR_21->vddci_control =
  FUNC_3(VAR_19, VAR_12,
         VAR_16);
 if (!VAR_21->vddci_control)
  VAR_23->vddci_control_svi2 =
   FUNC_3(VAR_19, VAR_12,
          VAR_18);

 VAR_23->vddc_phase_shed_control =
  FUNC_3(VAR_19, VAR_11,
         VAR_17);

 FUNC_9(VAR_19);

 VAR_20->asi = VAR_9;
 VAR_20->pasi = VAR_3;
 VAR_20->vrc = VAR_13;

 VAR_20->gfx_clock_gating = 1;

 VAR_21->sclk_deep_sleep = 1;
 VAR_23->sclk_deep_sleep_above_low = 0;

 if (VAR_19->pm.int_thermal_type != VAR_15)
  VAR_20->thermal_protection = 1;
 else
  VAR_20->thermal_protection = 0;

 VAR_21->dynamic_ac_timing = 1;

 VAR_21->light_sleep = 1;




 VAR_21->pcie_performance_request = 0;


 VAR_23->sram_end = VAR_14;

 VAR_19->pm.dpm.dyn_state.mclk_sclk_ratio = 4;
 VAR_19->pm.dpm.dyn_state.sclk_mclk_delta = 15000;
 VAR_19->pm.dpm.dyn_state.vddc_vddci_delta = 200;
 VAR_19->pm.dpm.dyn_state.valid_sclk_values.count = 0;
 VAR_19->pm.dpm.dyn_state.valid_sclk_values.values = ((void*)0);
 VAR_19->pm.dpm.dyn_state.valid_mclk_values.count = 0;
 VAR_19->pm.dpm.dyn_state.valid_mclk_values.values = ((void*)0);

 FUNC_13(VAR_19);


 if ((VAR_19->pm.dpm.dyn_state.max_clock_voltage_on_dc.sclk == 0) ||
     (VAR_19->pm.dpm.dyn_state.max_clock_voltage_on_dc.mclk == 0))
  VAR_19->pm.dpm.dyn_state.max_clock_voltage_on_dc =
   VAR_19->pm.dpm.dyn_state.max_clock_voltage_on_ac;

 VAR_23->fan_ctrl_is_in_default_mode = 1;

 return 0;
}
