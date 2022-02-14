
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rv7xx_power_info {int mclk_strobe_mode_threshold; int mclk_edc_enable_threshold; int power_gating; int gfx_clock_gating; int mg_clock_gating; int mgcgtssm; int dynamic_pcie_gen2; int thermal_protection; int display_gap; int dcodt; int ulps; int soft_regs_start; int state_table_start; int sram_end; scalar_t__ mclk_stutter_mode_threshold; int vrc; int pasi; int asi; void* mvdd_control; void* voltage_control; int lmp; int lhp; int rmp; int rlp; scalar_t__ ref_div; scalar_t__ max_vddc_in_table; scalar_t__ min_vddc_in_table; scalar_t__ acpi_vddc; } ;
struct TYPE_3__ {scalar_t__ voltage_response_time; scalar_t__ backbias_response_time; struct rv7xx_power_info* priv; } ;
struct TYPE_4__ {scalar_t__ int_thermal_type; TYPE_1__ dpm; } ;
struct radeon_device {int flags; TYPE_2__ pm; } ;
struct atom_clock_dividers {scalar_t__ ref_div; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 struct rv7xx_power_info* FUNC_0 (int,int ) ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*,int ,int ,int,struct atom_clock_dividers*) ;
 void* FUNC_3 (struct radeon_device*,int ,int ) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;

int FUNC_7(struct radeon_device *VAR_20)
{
 struct rv7xx_power_info *VAR_21;
 struct atom_clock_dividers VAR_22;
 int VAR_23;

 VAR_21 = FUNC_0(sizeof(struct rv7xx_power_info), VAR_2);
 if (VAR_21 == ((void*)0))
  return -VAR_1;
 VAR_20->pm.dpm.priv = VAR_21;

 FUNC_5(VAR_20);

 VAR_21->acpi_vddc = 0;
 VAR_21->min_vddc_in_table = 0;
 VAR_21->max_vddc_in_table = 0;

 VAR_23 = FUNC_1(VAR_20);
 if (VAR_23)
  return VAR_23;

 VAR_23 = FUNC_6(VAR_20);
 if (VAR_23)
  return VAR_23;

 if (VAR_20->pm.dpm.voltage_response_time == 0)
  VAR_20->pm.dpm.voltage_response_time = VAR_5;
 if (VAR_20->pm.dpm.backbias_response_time == 0)
  VAR_20->pm.dpm.backbias_response_time = VAR_3;

 VAR_23 = FUNC_2(VAR_20, VAR_0,
          0, 0, &VAR_22);
 if (VAR_23)
  VAR_21->ref_div = VAR_22.ref_div + 1;
 else
  VAR_21->ref_div = VAR_4;

 VAR_21->mclk_strobe_mode_threshold = 30000;
 VAR_21->mclk_edc_enable_threshold = 30000;

 VAR_21->rlp = VAR_11;
 VAR_21->rmp = VAR_12;
 VAR_21->lhp = VAR_9;
 VAR_21->lmp = VAR_10;

 VAR_21->voltage_control =
  FUNC_3(VAR_20, VAR_17, 0);

 VAR_21->mvdd_control =
  FUNC_3(VAR_20, VAR_16, 0);

 FUNC_4(VAR_20);

 VAR_21->asi = VAR_7;
 VAR_21->pasi = VAR_8;
 VAR_21->vrc = VAR_15;

 VAR_21->power_gating = 0;

 VAR_21->gfx_clock_gating = 1;

 VAR_21->mg_clock_gating = 1;
 VAR_21->mgcgtssm = 1;

 VAR_21->dynamic_pcie_gen2 = 1;

 if (VAR_20->pm.int_thermal_type != VAR_19)
  VAR_21->thermal_protection = 1;
 else
  VAR_21->thermal_protection = 0;

 VAR_21->display_gap = 1;

 if (VAR_20->flags & VAR_6)
  VAR_21->dcodt = 1;
 else
  VAR_21->dcodt = 0;

 VAR_21->ulps = 1;

 VAR_21->mclk_stutter_mode_threshold = 0;

 VAR_21->sram_end = VAR_18;
 VAR_21->state_table_start = VAR_14;
 VAR_21->soft_regs_start = VAR_13;

 return 0;
}
