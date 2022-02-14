
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rv7xx_power_info {int mclk_strobe_mode_threshold; int mclk_edc_enable_threshold; int power_gating; int gfx_clock_gating; int mg_clock_gating; int mgcgtssm; int dynamic_pcie_gen2; int thermal_protection; int display_gap; int dcodt; int ulps; int sram_end; scalar_t__ mclk_stutter_mode_threshold; int vrc; int pasi; int asi; void* mvdd_control; void* voltage_control; int lmp; int lhp; int rmp; int rlp; scalar_t__ ref_div; scalar_t__ max_vddc_in_table; scalar_t__ min_vddc_in_table; scalar_t__ acpi_vddc; } ;
struct TYPE_5__ {scalar_t__ voltage_response_time; scalar_t__ backbias_response_time; struct evergreen_power_info* priv; } ;
struct TYPE_6__ {scalar_t__ int_thermal_type; TYPE_2__ dpm; } ;
struct radeon_device {scalar_t__ family; int flags; TYPE_3__ pm; } ;
struct TYPE_4__ {int supported; } ;
struct evergreen_power_info {int mclk_edc_wr_enable_threshold; int ls_clock_gating; int sclk_deep_sleep; int dynamic_ac_timing; int abm; int mcls; int light_sleep; int memory_transition; int pcie_performance_request; int dll_default_on; void* vddci_control; scalar_t__ acpi_vddci; TYPE_1__ ulv; struct rv7xx_power_info rv7xx; } ;
struct atom_clock_dividers {scalar_t__ ref_div; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 struct evergreen_power_info* FUNC_0 (int,int ) ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*,int ,int ,int,struct atom_clock_dividers*) ;
 void* FUNC_4 (struct radeon_device*,int ,int ) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*) ;

int FUNC_8(struct radeon_device *VAR_22)
{
 struct rv7xx_power_info *VAR_23;
 struct evergreen_power_info *VAR_24;
 struct atom_clock_dividers VAR_25;
 int VAR_26;

 VAR_24 = FUNC_0(sizeof(struct evergreen_power_info), VAR_7);
 if (VAR_24 == ((void*)0))
  return -VAR_6;
 VAR_22->pm.dpm.priv = VAR_24;
 VAR_23 = &VAR_24->rv7xx;

 FUNC_6(VAR_22);

 VAR_24->ulv.supported = 0;
 VAR_23->acpi_vddc = 0;
 VAR_24->acpi_vddci = 0;
 VAR_23->min_vddc_in_table = 0;
 VAR_23->max_vddc_in_table = 0;

 VAR_26 = FUNC_1(VAR_22);
 if (VAR_26)
  return VAR_26;

 VAR_26 = FUNC_7(VAR_22);
 if (VAR_26)
  return VAR_26;

 if (VAR_22->pm.dpm.voltage_response_time == 0)
  VAR_22->pm.dpm.voltage_response_time = VAR_10;
 if (VAR_22->pm.dpm.backbias_response_time == 0)
  VAR_22->pm.dpm.backbias_response_time = VAR_8;

 VAR_26 = FUNC_3(VAR_22, VAR_3,
          0, 0, &VAR_25);
 if (VAR_26)
  VAR_23->ref_div = VAR_25.ref_div + 1;
 else
  VAR_23->ref_div = VAR_9;

 VAR_23->mclk_strobe_mode_threshold = 40000;
 VAR_23->mclk_edc_enable_threshold = 40000;
 VAR_24->mclk_edc_wr_enable_threshold = 40000;

 VAR_23->rlp = VAR_15;
 VAR_23->rmp = VAR_16;
 VAR_23->lhp = VAR_13;
 VAR_23->lmp = VAR_14;

 VAR_23->voltage_control =
  FUNC_4(VAR_22, VAR_18, 0);

 VAR_23->mvdd_control =
  FUNC_4(VAR_22, VAR_17, 0);

 VAR_24->vddci_control =
  FUNC_4(VAR_22, VAR_19, 0);

 FUNC_5(VAR_22);

 VAR_23->asi = VAR_12;
 VAR_23->pasi = VAR_4;
 VAR_23->vrc = VAR_5;

 VAR_23->power_gating = 0;

 if ((VAR_22->family == VAR_0) ||
     (VAR_22->family == VAR_1))
  VAR_23->gfx_clock_gating = 0;
 else
  VAR_23->gfx_clock_gating = 1;

 VAR_23->mg_clock_gating = 1;
 VAR_23->mgcgtssm = 1;
 VAR_24->ls_clock_gating = 0;
 VAR_24->sclk_deep_sleep = 0;

 VAR_23->dynamic_pcie_gen2 = 1;

 if (VAR_22->pm.int_thermal_type != VAR_21)
  VAR_23->thermal_protection = 1;
 else
  VAR_23->thermal_protection = 0;

 VAR_23->display_gap = 1;

 if (VAR_22->flags & VAR_11)
  VAR_23->dcodt = 1;
 else
  VAR_23->dcodt = 0;

 VAR_23->ulps = 1;

 VAR_24->dynamic_ac_timing = 1;
 VAR_24->abm = 1;
 VAR_24->mcls = 1;
 VAR_24->light_sleep = 1;
 VAR_24->memory_transition = 1;




 VAR_24->pcie_performance_request = 0;


 if ((VAR_22->family == VAR_0) ||
     (VAR_22->family == VAR_1) ||
     (VAR_22->family == VAR_2))
  VAR_24->dll_default_on = 1;
 else
  VAR_24->dll_default_on = 0;

 VAR_24->sclk_deep_sleep = 0;
 VAR_23->mclk_stutter_mode_threshold = 0;

 VAR_23->sram_end = VAR_20;

 return 0;
}
