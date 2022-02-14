
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct rv7xx_power_info {int mclk_strobe_mode_threshold; int mclk_edc_enable_threshold; int power_gating; int gfx_clock_gating; int mg_clock_gating; int mgcgtssm; int dynamic_pcie_gen2; int thermal_protection; int display_gap; int dcodt; int ulps; int mclk_stutter_mode_threshold; int sram_end; int vrc; int pasi; int asi; void* mvdd_control; void* voltage_control; void* lmp; void* lhp; void* rmp; void* rlp; scalar_t__ ref_div; scalar_t__ max_vddc_in_table; scalar_t__ min_vddc_in_table; scalar_t__ acpi_vddc; } ;
struct TYPE_15__ {scalar_t__ sclk; scalar_t__ mclk; } ;
struct TYPE_14__ {int * values; scalar_t__ count; } ;
struct TYPE_13__ {int values; int count; } ;
struct TYPE_20__ {int count; TYPE_10__* entries; } ;
struct TYPE_17__ {int mclk_sclk_ratio; int vddc_vddci_delta; int min_vddc_for_pcie_gen2; int sclk_mclk_delta; TYPE_4__ max_clock_voltage_on_ac; TYPE_4__ max_clock_voltage_on_dc; TYPE_3__ valid_mclk_values; TYPE_2__ valid_sclk_values; TYPE_9__ vddc_dependency_on_dispclk; } ;
struct TYPE_18__ {scalar_t__ voltage_response_time; scalar_t__ backbias_response_time; TYPE_6__ dyn_state; struct evergreen_power_info* priv; } ;
struct TYPE_19__ {scalar_t__ int_thermal_type; TYPE_7__ dpm; } ;
struct radeon_device {int flags; scalar_t__ family; TYPE_8__ pm; } ;
struct radeon_clock_voltage_dependency_entry {int dummy; } ;
struct TYPE_16__ {int supported; } ;
struct evergreen_power_info {int mclk_edc_wr_enable_threshold; int smu_uvd_hs; int ls_clock_gating; int sclk_deep_sleep; int dynamic_ac_timing; int abm; int mcls; int light_sleep; int memory_transition; int pcie_performance_request; int dll_default_on; void* vddci_control; TYPE_1__* ats; scalar_t__ acpi_vddci; TYPE_5__ ulv; struct rv7xx_power_info rv7xx; } ;
struct atom_clock_dividers {scalar_t__ ref_div; } ;
struct TYPE_12__ {void* lmp; void* lhp; void* rmp; void* rlp; } ;
struct TYPE_11__ {int clk; int v; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 TYPE_10__* FUNC_2 (int,int,int ) ;
 struct evergreen_power_info* FUNC_3 (int,int ) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*,int ,int ,int,struct atom_clock_dividers*) ;
 void* FUNC_9 (struct radeon_device*,int ,int ) ;
 int FUNC_10 (struct radeon_device*) ;
 int FUNC_11 (struct radeon_device*) ;
 int FUNC_12 (struct radeon_device*) ;

int FUNC_13(struct radeon_device *VAR_26)
{
 struct rv7xx_power_info *VAR_27;
 struct evergreen_power_info *VAR_28;
 struct atom_clock_dividers VAR_29;
 int VAR_30;

 VAR_28 = FUNC_3(sizeof(struct evergreen_power_info), VAR_10);
 if (VAR_28 == ((void*)0))
  return -VAR_9;
 VAR_26->pm.dpm.priv = VAR_28;
 VAR_27 = &VAR_28->rv7xx;

 FUNC_11(VAR_26);

 VAR_28->ulv.supported = 0;
 VAR_27->acpi_vddc = 0;
 VAR_28->acpi_vddci = 0;
 VAR_27->min_vddc_in_table = 0;
 VAR_27->max_vddc_in_table = 0;

 VAR_30 = FUNC_5(VAR_26);
 if (VAR_30)
  return VAR_30;

 VAR_30 = FUNC_12(VAR_26);
 if (VAR_30)
  return VAR_30;
 VAR_30 = FUNC_6(VAR_26);
 if (VAR_30)
  return VAR_30;

 VAR_26->pm.dpm.dyn_state.vddc_dependency_on_dispclk.entries =
  FUNC_2(4,
   sizeof(struct radeon_clock_voltage_dependency_entry),
   VAR_10);
 if (!VAR_26->pm.dpm.dyn_state.vddc_dependency_on_dispclk.entries) {
  FUNC_4(VAR_26);
  return -VAR_9;
 }
 VAR_26->pm.dpm.dyn_state.vddc_dependency_on_dispclk.count = 4;
 VAR_26->pm.dpm.dyn_state.vddc_dependency_on_dispclk.entries[0].clk = 0;
 VAR_26->pm.dpm.dyn_state.vddc_dependency_on_dispclk.entries[0].v = 0;
 VAR_26->pm.dpm.dyn_state.vddc_dependency_on_dispclk.entries[1].clk = 36000;
 VAR_26->pm.dpm.dyn_state.vddc_dependency_on_dispclk.entries[1].v = 800;
 VAR_26->pm.dpm.dyn_state.vddc_dependency_on_dispclk.entries[2].clk = 54000;
 VAR_26->pm.dpm.dyn_state.vddc_dependency_on_dispclk.entries[2].v = 800;
 VAR_26->pm.dpm.dyn_state.vddc_dependency_on_dispclk.entries[3].clk = 72000;
 VAR_26->pm.dpm.dyn_state.vddc_dependency_on_dispclk.entries[3].v = 800;

 if (VAR_26->pm.dpm.voltage_response_time == 0)
  VAR_26->pm.dpm.voltage_response_time = VAR_13;
 if (VAR_26->pm.dpm.backbias_response_time == 0)
  VAR_26->pm.dpm.backbias_response_time = VAR_11;

 VAR_30 = FUNC_8(VAR_26, VAR_6,
          0, 0, &VAR_29);
 if (VAR_30)
  VAR_27->ref_div = VAR_29.ref_div + 1;
 else
  VAR_27->ref_div = VAR_12;

 VAR_27->mclk_strobe_mode_threshold = 40000;
 VAR_27->mclk_edc_enable_threshold = 40000;
 VAR_28->mclk_edc_wr_enable_threshold = 40000;

 VAR_27->rlp = VAR_18;
 VAR_27->rmp = VAR_19;
 VAR_27->lhp = VAR_16;
 VAR_27->lmp = VAR_17;

 VAR_28->ats[0].rlp = VAR_18;
 VAR_28->ats[0].rmp = VAR_19;
 VAR_28->ats[0].lhp = VAR_16;
 VAR_28->ats[0].lmp = VAR_17;

 VAR_28->ats[1].rlp = VAR_2;
 VAR_28->ats[1].rmp = VAR_3;
 VAR_28->ats[1].lhp = VAR_0;
 VAR_28->ats[1].lmp = VAR_1;

 VAR_28->smu_uvd_hs = 1;

 VAR_27->voltage_control =
  FUNC_9(VAR_26, VAR_21, 0);

 VAR_27->mvdd_control =
  FUNC_9(VAR_26, VAR_20, 0);

 VAR_28->vddci_control =
  FUNC_9(VAR_26, VAR_22, 0);

 FUNC_10(VAR_26);

 VAR_27->asi = VAR_15;
 VAR_27->pasi = VAR_7;
 VAR_27->vrc = VAR_8;

 VAR_27->power_gating = 0;

 VAR_27->gfx_clock_gating = 1;

 VAR_27->mg_clock_gating = 1;
 VAR_27->mgcgtssm = 1;
 VAR_28->ls_clock_gating = 0;
 VAR_28->sclk_deep_sleep = 0;

 VAR_27->dynamic_pcie_gen2 = 1;

 if (VAR_26->pm.int_thermal_type != VAR_24)
  VAR_27->thermal_protection = 1;
 else
  VAR_27->thermal_protection = 0;

 VAR_27->display_gap = 1;

 if (VAR_26->flags & VAR_14)
  VAR_27->dcodt = 1;
 else
  VAR_27->dcodt = 0;

 VAR_27->ulps = 1;

 VAR_28->dynamic_ac_timing = 1;
 VAR_28->abm = 1;
 VAR_28->mcls = 1;
 VAR_28->light_sleep = 1;
 VAR_28->memory_transition = 1;




 VAR_28->pcie_performance_request = 0;


 if (VAR_26->family == VAR_4)
  VAR_28->dll_default_on = 1;
 else
  VAR_28->dll_default_on = 0;

 VAR_28->sclk_deep_sleep = 0;
 if (FUNC_1(VAR_26))
  VAR_27->mclk_stutter_mode_threshold = 30000;
 else
  VAR_27->mclk_stutter_mode_threshold = 0;

 VAR_27->sram_end = VAR_23;

 VAR_26->pm.dpm.dyn_state.mclk_sclk_ratio = 4;
 VAR_26->pm.dpm.dyn_state.vddc_vddci_delta = 200;
 VAR_26->pm.dpm.dyn_state.min_vddc_for_pcie_gen2 = 900;
 VAR_26->pm.dpm.dyn_state.valid_sclk_values.count = FUNC_0(VAR_25);
 VAR_26->pm.dpm.dyn_state.valid_sclk_values.values = VAR_25;
 VAR_26->pm.dpm.dyn_state.valid_mclk_values.count = 0;
 VAR_26->pm.dpm.dyn_state.valid_mclk_values.values = ((void*)0);

 if (VAR_26->family == VAR_5)
  VAR_26->pm.dpm.dyn_state.sclk_mclk_delta = 15000;
 else
  VAR_26->pm.dpm.dyn_state.sclk_mclk_delta = 10000;


 if ((VAR_26->pm.dpm.dyn_state.max_clock_voltage_on_dc.sclk == 0) ||
     (VAR_26->pm.dpm.dyn_state.max_clock_voltage_on_dc.mclk == 0))
  VAR_26->pm.dpm.dyn_state.max_clock_voltage_on_dc =
   VAR_26->pm.dpm.dyn_state.max_clock_voltage_on_ac;

 return 0;
}
