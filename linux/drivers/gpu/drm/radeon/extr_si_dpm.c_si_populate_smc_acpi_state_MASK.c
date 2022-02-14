
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_25__ {int cg_spll_func_cntl; int cg_spll_func_cntl_2; int cg_spll_func_cntl_3; int cg_spll_func_cntl_4; int dll_cntl; int mclk_pwrmgt_cntl; int mpll_ad_func_cntl; int mpll_dq_func_cntl; int mpll_func_cntl; int mpll_func_cntl_1; int mpll_func_cntl_2; int mpll_ss1; int mpll_ss2; } ;
struct si_power_info {TYPE_9__ clock_registers; scalar_t__ vddc_phase_shed_control; int boot_pcie_gen; int sys_pcie_mask; int acpi_pcie_gen; } ;
struct rv7xx_power_info {scalar_t__ acpi_vddc; scalar_t__ min_vddc_in_table; } ;
struct TYPE_17__ {int phase_shedding_limits_table; } ;
struct TYPE_18__ {TYPE_1__ dyn_state; } ;
struct TYPE_19__ {TYPE_2__ dpm; } ;
struct radeon_device {TYPE_3__ pm; } ;
struct evergreen_power_info {scalar_t__ dynamic_ac_timing; scalar_t__ acpi_vddci; int vddci_voltage_table; int vddc_voltage_table; } ;
struct TYPE_24__ {TYPE_7__* levels; int flags; } ;
struct TYPE_22__ {scalar_t__ PwrEfficiencyRatio; scalar_t__ BelowSafeInc; scalar_t__ AboveSafeInc; scalar_t__ NearTDPDec; scalar_t__ MaxPS; } ;
struct TYPE_21__ {scalar_t__ sclk_value; void* vCG_SPLL_FUNC_CNTL_4; void* vCG_SPLL_FUNC_CNTL_3; void* vCG_SPLL_FUNC_CNTL_2; void* vCG_SPLL_FUNC_CNTL; } ;
struct TYPE_20__ {scalar_t__ mclk_value; void* vMPLL_SS2; void* vMPLL_SS; void* vMPLL_FUNC_CNTL_2; void* vMPLL_FUNC_CNTL_1; void* vMPLL_FUNC_CNTL; void* vMPLL_DQ_FUNC_CNTL; void* vMPLL_AD_FUNC_CNTL; void* vMCLK_PWRMGT_CNTL; void* vDLL_CNTL; } ;
struct TYPE_16__ {int index; } ;
struct TYPE_23__ {void* SQPowerThrottle_2; void* SQPowerThrottle; TYPE_6__ dpm2; scalar_t__ ACIndex; int mvdd; TYPE_5__ sclk; TYPE_4__ mclk; TYPE_11__ vddci; TYPE_11__ vddc; int gen2PCIE; int std_vddc; } ;
struct TYPE_15__ {TYPE_8__ ACPIState; TYPE_8__ initialState; } ;
typedef TYPE_10__ SISLANDS_SMC_STATETABLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 void* FUNC_1 (int) ;
 struct evergreen_power_info* FUNC_2 (struct radeon_device*) ;
 scalar_t__ FUNC_3 (struct radeon_device*,int ,int ,int ) ;
 struct rv7xx_power_info* FUNC_4 (struct radeon_device*) ;
 struct si_power_info* FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*,TYPE_11__*,int *) ;
 int FUNC_7 (struct radeon_device*,int ,int *) ;
 int FUNC_8 (struct radeon_device*,int *,scalar_t__,int ,int ,TYPE_11__*) ;
 int FUNC_9 (struct radeon_device*,int ,int ,int *) ;
 int FUNC_10 (struct radeon_device*,int *,scalar_t__,TYPE_11__*) ;

__attribute__((used)) static int FUNC_11(struct radeon_device *VAR_14,
          SISLANDS_SMC_STATETABLE *VAR_15)
{
 struct rv7xx_power_info *VAR_16 = FUNC_4(VAR_14);
 struct evergreen_power_info *VAR_17 = FUNC_2(VAR_14);
 struct si_power_info *VAR_18 = FUNC_5(VAR_14);
 u32 VAR_19 = VAR_18->clock_registers.cg_spll_func_cntl;
 u32 VAR_20 = VAR_18->clock_registers.cg_spll_func_cntl_2;
 u32 VAR_21 = VAR_18->clock_registers.cg_spll_func_cntl_3;
 u32 VAR_22 = VAR_18->clock_registers.cg_spll_func_cntl_4;
 u32 VAR_23 = VAR_18->clock_registers.dll_cntl;
 u32 VAR_24 = VAR_18->clock_registers.mclk_pwrmgt_cntl;
 u32 VAR_25 = VAR_18->clock_registers.mpll_ad_func_cntl;
 u32 VAR_26 = VAR_18->clock_registers.mpll_dq_func_cntl;
 u32 VAR_27 = VAR_18->clock_registers.mpll_func_cntl;
 u32 VAR_28 = VAR_18->clock_registers.mpll_func_cntl_1;
 u32 VAR_29 = VAR_18->clock_registers.mpll_func_cntl_2;
 u32 VAR_30;
 int VAR_31;

 VAR_15->ACPIState = VAR_15->initialState;

 VAR_15->ACPIState.flags &= ~VAR_10;

 if (VAR_16->acpi_vddc) {
  VAR_31 = FUNC_10(VAR_14, &VAR_17->vddc_voltage_table,
      VAR_16->acpi_vddc, &VAR_15->ACPIState.levels[0].vddc);
  if (!VAR_31) {
   u16 VAR_32;

   VAR_31 = FUNC_6(VAR_14,
             &VAR_15->ACPIState.levels[0].vddc, &VAR_32);
   if (!VAR_31)
    FUNC_9(VAR_14, VAR_32,
             VAR_15->ACPIState.levels[0].vddc.index,
             &VAR_15->ACPIState.levels[0].std_vddc);
  }
  VAR_15->ACPIState.levels[0].gen2PCIE = VAR_18->acpi_pcie_gen;

  if (VAR_18->vddc_phase_shed_control) {
   FUNC_8(VAR_14,
        &VAR_14->pm.dpm.dyn_state.phase_shedding_limits_table,
        VAR_16->acpi_vddc,
        0,
        0,
        &VAR_15->ACPIState.levels[0].vddc);
  }
 } else {
  VAR_31 = FUNC_10(VAR_14, &VAR_17->vddc_voltage_table,
      VAR_16->min_vddc_in_table, &VAR_15->ACPIState.levels[0].vddc);
  if (!VAR_31) {
   u16 VAR_33;

   VAR_31 = FUNC_6(VAR_14,
             &VAR_15->ACPIState.levels[0].vddc, &VAR_33);

   if (!VAR_31)
    FUNC_9(VAR_14, VAR_33,
             VAR_15->ACPIState.levels[0].vddc.index,
             &VAR_15->ACPIState.levels[0].std_vddc);
  }
  VAR_15->ACPIState.levels[0].gen2PCIE = (u8)FUNC_3(VAR_14,
              VAR_18->sys_pcie_mask,
              VAR_18->boot_pcie_gen,
              VAR_11);

  if (VAR_18->vddc_phase_shed_control)
   FUNC_8(VAR_14,
        &VAR_14->pm.dpm.dyn_state.phase_shedding_limits_table,
        VAR_16->min_vddc_in_table,
        0,
        0,
        &VAR_15->ACPIState.levels[0].vddc);
 }

 if (VAR_16->acpi_vddc) {
  if (VAR_17->acpi_vddci)
   FUNC_10(VAR_14, &VAR_17->vddci_voltage_table,
        VAR_17->acpi_vddci,
        &VAR_15->ACPIState.levels[0].vddci);
 }

 VAR_24 |= VAR_6 | VAR_9;
 VAR_24 &= ~(VAR_5 | VAR_8);

 VAR_23 &= ~(VAR_4 | VAR_7);

 VAR_20 &= ~VAR_12;
 VAR_20 |= FUNC_0(4);

 VAR_15->ACPIState.levels[0].mclk.vDLL_CNTL =
  FUNC_1(VAR_23);
 VAR_15->ACPIState.levels[0].mclk.vMCLK_PWRMGT_CNTL =
  FUNC_1(VAR_24);
 VAR_15->ACPIState.levels[0].mclk.vMPLL_AD_FUNC_CNTL =
  FUNC_1(VAR_25);
 VAR_15->ACPIState.levels[0].mclk.vMPLL_DQ_FUNC_CNTL =
  FUNC_1(VAR_26);
 VAR_15->ACPIState.levels[0].mclk.vMPLL_FUNC_CNTL =
  FUNC_1(VAR_27);
 VAR_15->ACPIState.levels[0].mclk.vMPLL_FUNC_CNTL_1 =
  FUNC_1(VAR_28);
 VAR_15->ACPIState.levels[0].mclk.vMPLL_FUNC_CNTL_2 =
  FUNC_1(VAR_29);
 VAR_15->ACPIState.levels[0].mclk.vMPLL_SS =
  FUNC_1(VAR_18->clock_registers.mpll_ss1);
 VAR_15->ACPIState.levels[0].mclk.vMPLL_SS2 =
  FUNC_1(VAR_18->clock_registers.mpll_ss2);

 VAR_15->ACPIState.levels[0].sclk.vCG_SPLL_FUNC_CNTL =
  FUNC_1(VAR_19);
 VAR_15->ACPIState.levels[0].sclk.vCG_SPLL_FUNC_CNTL_2 =
  FUNC_1(VAR_20);
 VAR_15->ACPIState.levels[0].sclk.vCG_SPLL_FUNC_CNTL_3 =
  FUNC_1(VAR_21);
 VAR_15->ACPIState.levels[0].sclk.vCG_SPLL_FUNC_CNTL_4 =
  FUNC_1(VAR_22);

 VAR_15->ACPIState.levels[0].mclk.mclk_value = 0;
 VAR_15->ACPIState.levels[0].sclk.sclk_value = 0;

 FUNC_7(VAR_14, 0, &VAR_15->ACPIState.levels[0].mvdd);

 if (VAR_17->dynamic_ac_timing)
  VAR_15->ACPIState.levels[0].ACIndex = 0;

 VAR_15->ACPIState.levels[0].dpm2.MaxPS = 0;
 VAR_15->ACPIState.levels[0].dpm2.NearTDPDec = 0;
 VAR_15->ACPIState.levels[0].dpm2.AboveSafeInc = 0;
 VAR_15->ACPIState.levels[0].dpm2.BelowSafeInc = 0;
 VAR_15->ACPIState.levels[0].dpm2.PwrEfficiencyRatio = 0;

 VAR_30 = VAR_3 | VAR_2;
 VAR_15->ACPIState.levels[0].SQPowerThrottle = FUNC_1(VAR_30);

 VAR_30 = VAR_1 | VAR_13 | VAR_0;
 VAR_15->ACPIState.levels[0].SQPowerThrottle_2 = FUNC_1(VAR_30);

 return 0;
}
