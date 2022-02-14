
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_14__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct rv7xx_power_info {int mclk_strobe_mode_threshold; int mclk_edc_enable_threshold; int power_gating; int gfx_clock_gating; int mg_clock_gating; int mgcgtssm; int dynamic_pcie_gen2; int thermal_protection; int display_gap; int dcodt; int ulps; int sram_end; scalar_t__ mclk_stutter_mode_threshold; int vrc; int pasi; int asi; void* mvdd_control; void* voltage_control; void* lmp; void* lhp; void* rmp; void* rlp; scalar_t__ ref_div; scalar_t__ max_vddc_in_table; scalar_t__ min_vddc_in_table; scalar_t__ acpi_vddc; } ;
struct TYPE_30__ {scalar_t__ sclk; scalar_t__ mclk; } ;
struct TYPE_26__ {int * values; scalar_t__ count; } ;
struct TYPE_25__ {int values; int count; } ;
struct TYPE_23__ {int count; TYPE_13__* entries; } ;
struct TYPE_17__ {int mclk_sclk_ratio; int vddc_vddci_delta; int min_vddc_for_pcie_gen2; int sclk_mclk_delta; TYPE_9__ max_clock_voltage_on_ac; TYPE_9__ max_clock_voltage_on_dc; TYPE_5__ valid_mclk_values; TYPE_4__ valid_sclk_values; TYPE_2__ vddc_dependency_on_dispclk; } ;
struct TYPE_18__ {scalar_t__ voltage_response_time; scalar_t__ backbias_response_time; TYPE_10__ dyn_state; struct ni_power_info* priv; } ;
struct TYPE_19__ {scalar_t__ int_thermal_type; TYPE_11__ dpm; } ;
struct radeon_device {TYPE_12__ pm; TYPE_8__* pdev; } ;
struct radeon_clock_voltage_dependency_entry {int dummy; } ;
struct TYPE_27__ {int at; int bt; int av; int bv; } ;
struct TYPE_28__ {TYPE_6__ leakage_coefficients; } ;
struct TYPE_22__ {int supported; } ;
struct evergreen_power_info {int smu_uvd_hs; int mclk_edc_wr_enable_threshold; int ls_clock_gating; int sclk_deep_sleep; int dynamic_ac_timing; int abm; int mcls; int light_sleep; int memory_transition; int pcie_performance_request; int dll_default_on; void* vddci_control; TYPE_3__* ats; scalar_t__ acpi_vddci; TYPE_1__ ulv; struct rv7xx_power_info rv7xx; } ;
struct ni_power_info {int mclk_rtt_mode_threshold; int enable_power_containment; int enable_cac; int enable_sq_ramping; int driver_calculate_cac_leakage; int cac_configuration_required; int support_cac_long_term_average; int use_power_boost_limit; scalar_t__ lts_truncate; scalar_t__ lta_window_size; TYPE_14__* cac_weights; TYPE_7__ cac_data; struct evergreen_power_info eg; } ;
struct atom_clock_dividers {scalar_t__ ref_div; } ;
struct TYPE_29__ {int device; } ;
struct TYPE_24__ {void* lmp; void* lhp; void* rmp; void* rlp; } ;
struct TYPE_21__ {scalar_t__ lts_truncate; scalar_t__ l2_lta_window_size; scalar_t__ enable_power_containment_by_default; } ;
struct TYPE_20__ {int clk; int v; } ;


 int FUNC_0 (int ) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 TYPE_14__ VAR_23 ;
 TYPE_14__ VAR_24 ;
 TYPE_14__ VAR_25 ;
 TYPE_13__* FUNC_1 (int,int,int ) ;
 struct ni_power_info* FUNC_2 (int,int ) ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*,int ,int ,int,struct atom_clock_dividers*) ;
 void* FUNC_10 (struct radeon_device*,int ,int ) ;
 int FUNC_11 (struct radeon_device*) ;
 int FUNC_12 (struct radeon_device*) ;

int FUNC_13(struct radeon_device *VAR_26)
{
 struct rv7xx_power_info *VAR_27;
 struct evergreen_power_info *VAR_28;
 struct ni_power_info *VAR_29;
 struct atom_clock_dividers VAR_30;
 int VAR_31;

 VAR_29 = FUNC_2(sizeof(struct ni_power_info), VAR_8);
 if (VAR_29 == ((void*)0))
  return -VAR_7;
 VAR_26->pm.dpm.priv = VAR_29;
 VAR_28 = &VAR_29->eg;
 VAR_27 = &VAR_28->rv7xx;

 FUNC_12(VAR_26);

 VAR_28->ulv.supported = 0;
 VAR_27->acpi_vddc = 0;
 VAR_28->acpi_vddci = 0;
 VAR_27->min_vddc_in_table = 0;
 VAR_27->max_vddc_in_table = 0;

 VAR_31 = FUNC_6(VAR_26);
 if (VAR_31)
  return VAR_31;

 VAR_31 = FUNC_3(VAR_26);
 if (VAR_31)
  return VAR_31;
 VAR_31 = FUNC_7(VAR_26);
 if (VAR_31)
  return VAR_31;

 VAR_26->pm.dpm.dyn_state.vddc_dependency_on_dispclk.entries =
  FUNC_1(4,
   sizeof(struct radeon_clock_voltage_dependency_entry),
   VAR_8);
 if (!VAR_26->pm.dpm.dyn_state.vddc_dependency_on_dispclk.entries) {
  FUNC_5(VAR_26);
  return -VAR_7;
 }
 VAR_26->pm.dpm.dyn_state.vddc_dependency_on_dispclk.count = 4;
 VAR_26->pm.dpm.dyn_state.vddc_dependency_on_dispclk.entries[0].clk = 0;
 VAR_26->pm.dpm.dyn_state.vddc_dependency_on_dispclk.entries[0].v = 0;
 VAR_26->pm.dpm.dyn_state.vddc_dependency_on_dispclk.entries[1].clk = 36000;
 VAR_26->pm.dpm.dyn_state.vddc_dependency_on_dispclk.entries[1].v = 720;
 VAR_26->pm.dpm.dyn_state.vddc_dependency_on_dispclk.entries[2].clk = 54000;
 VAR_26->pm.dpm.dyn_state.vddc_dependency_on_dispclk.entries[2].v = 810;
 VAR_26->pm.dpm.dyn_state.vddc_dependency_on_dispclk.entries[3].clk = 72000;
 VAR_26->pm.dpm.dyn_state.vddc_dependency_on_dispclk.entries[3].v = 900;

 FUNC_4(VAR_26);

 if (VAR_26->pm.dpm.voltage_response_time == 0)
  VAR_26->pm.dpm.voltage_response_time = VAR_11;
 if (VAR_26->pm.dpm.backbias_response_time == 0)
  VAR_26->pm.dpm.backbias_response_time = VAR_9;

 VAR_31 = FUNC_9(VAR_26, VAR_4,
          0, 0, &VAR_30);
 if (VAR_31)
  VAR_27->ref_div = VAR_30.ref_div + 1;
 else
  VAR_27->ref_div = VAR_10;

 VAR_27->rlp = VAR_15;
 VAR_27->rmp = VAR_16;
 VAR_27->lhp = VAR_13;
 VAR_27->lmp = VAR_14;

 VAR_28->ats[0].rlp = VAR_15;
 VAR_28->ats[0].rmp = VAR_16;
 VAR_28->ats[0].lhp = VAR_13;
 VAR_28->ats[0].lmp = VAR_14;

 VAR_28->ats[1].rlp = VAR_2;
 VAR_28->ats[1].rmp = VAR_3;
 VAR_28->ats[1].lhp = VAR_0;
 VAR_28->ats[1].lmp = VAR_1;

 VAR_28->smu_uvd_hs = 1;

 if (VAR_26->pdev->device == 0x6707) {
  VAR_27->mclk_strobe_mode_threshold = 55000;
  VAR_27->mclk_edc_enable_threshold = 55000;
  VAR_28->mclk_edc_wr_enable_threshold = 55000;
 } else {
  VAR_27->mclk_strobe_mode_threshold = 40000;
  VAR_27->mclk_edc_enable_threshold = 40000;
  VAR_28->mclk_edc_wr_enable_threshold = 40000;
 }
 VAR_29->mclk_rtt_mode_threshold = VAR_28->mclk_edc_wr_enable_threshold;

 VAR_27->voltage_control =
  FUNC_10(VAR_26, VAR_18, 0);

 VAR_27->mvdd_control =
  FUNC_10(VAR_26, VAR_17, 0);

 VAR_28->vddci_control =
  FUNC_10(VAR_26, VAR_19, 0);

 FUNC_11(VAR_26);

 VAR_27->asi = VAR_12;
 VAR_27->pasi = VAR_5;
 VAR_27->vrc = VAR_6;

 VAR_27->power_gating = 0;

 VAR_27->gfx_clock_gating = 1;

 VAR_27->mg_clock_gating = 1;
 VAR_27->mgcgtssm = 1;
 VAR_28->ls_clock_gating = 0;
 VAR_28->sclk_deep_sleep = 0;

 VAR_27->dynamic_pcie_gen2 = 1;

 if (VAR_26->pm.int_thermal_type != VAR_21)
  VAR_27->thermal_protection = 1;
 else
  VAR_27->thermal_protection = 0;

 VAR_27->display_gap = 1;

 VAR_27->dcodt = 1;

 VAR_27->ulps = 1;

 VAR_28->dynamic_ac_timing = 1;
 VAR_28->abm = 1;
 VAR_28->mcls = 1;
 VAR_28->light_sleep = 1;
 VAR_28->memory_transition = 1;




 VAR_28->pcie_performance_request = 0;


 VAR_28->dll_default_on = 0;

 VAR_28->sclk_deep_sleep = 0;

 VAR_27->mclk_stutter_mode_threshold = 0;

 VAR_27->sram_end = VAR_20;

 VAR_26->pm.dpm.dyn_state.mclk_sclk_ratio = 3;
 VAR_26->pm.dpm.dyn_state.vddc_vddci_delta = 200;
 VAR_26->pm.dpm.dyn_state.min_vddc_for_pcie_gen2 = 900;
 VAR_26->pm.dpm.dyn_state.valid_sclk_values.count = FUNC_0(VAR_22);
 VAR_26->pm.dpm.dyn_state.valid_sclk_values.values = VAR_22;
 VAR_26->pm.dpm.dyn_state.valid_mclk_values.count = 0;
 VAR_26->pm.dpm.dyn_state.valid_mclk_values.values = ((void*)0);
 VAR_26->pm.dpm.dyn_state.sclk_mclk_delta = 12500;

 VAR_29->cac_data.leakage_coefficients.at = 516;
 VAR_29->cac_data.leakage_coefficients.bt = 18;
 VAR_29->cac_data.leakage_coefficients.av = 51;
 VAR_29->cac_data.leakage_coefficients.bv = 2957;

 switch (VAR_26->pdev->device) {
 case 0x6700:
 case 0x6701:
 case 0x6702:
 case 0x6703:
 case 0x6718:
  VAR_29->cac_weights = &VAR_25;
  break;
 case 0x6705:
 case 0x6719:
 case 0x671D:
 case 0x671C:
 default:
  VAR_29->cac_weights = &VAR_24;
  break;
 case 0x6704:
 case 0x6706:
 case 0x6707:
 case 0x6708:
 case 0x6709:
  VAR_29->cac_weights = &VAR_23;
  break;
 }

 if (VAR_29->cac_weights->enable_power_containment_by_default) {
  VAR_29->enable_power_containment = 1;
  VAR_29->enable_cac = 1;
  VAR_29->enable_sq_ramping = 1;
 } else {
  VAR_29->enable_power_containment = 0;
  VAR_29->enable_cac = 0;
  VAR_29->enable_sq_ramping = 0;
 }

 VAR_29->driver_calculate_cac_leakage = 0;
 VAR_29->cac_configuration_required = 1;

 if (VAR_29->cac_configuration_required) {
  VAR_29->support_cac_long_term_average = 1;
  VAR_29->lta_window_size = VAR_29->cac_weights->l2_lta_window_size;
  VAR_29->lts_truncate = VAR_29->cac_weights->lts_truncate;
 } else {
  VAR_29->support_cac_long_term_average = 0;
  VAR_29->lta_window_size = 0;
  VAR_29->lts_truncate = 0;
 }

 VAR_29->use_power_boost_limit = 1;


 if ((VAR_26->pm.dpm.dyn_state.max_clock_voltage_on_dc.sclk == 0) ||
     (VAR_26->pm.dpm.dyn_state.max_clock_voltage_on_dc.mclk == 0))
  VAR_26->pm.dpm.dyn_state.max_clock_voltage_on_dc =
   VAR_26->pm.dpm.dyn_state.max_clock_voltage_on_ac;

 return 0;
}
