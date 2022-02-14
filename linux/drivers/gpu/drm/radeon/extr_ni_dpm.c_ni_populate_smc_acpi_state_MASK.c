
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct rv7xx_power_info {scalar_t__ mem_gddr5; scalar_t__ min_vddc_in_table; scalar_t__ acpi_pcie_gen2; scalar_t__ pcie_gen2; scalar_t__ acpi_vddc; } ;
struct radeon_device {int dummy; } ;
struct TYPE_14__ {int mpll_ad_func_cntl; int mpll_ad_func_cntl_2; int mpll_dq_func_cntl; int mpll_dq_func_cntl_2; int cg_spll_func_cntl; int cg_spll_func_cntl_2; int cg_spll_func_cntl_3; int cg_spll_func_cntl_4; int mclk_pwrmgt_cntl; int dll_cntl; } ;
struct ni_power_info {TYPE_4__ clock_registers; } ;
struct evergreen_power_info {scalar_t__ dynamic_ac_timing; scalar_t__ acpi_vddci; int vddci_voltage_table; scalar_t__ vddci_control; int vddc_voltage_table; } ;
struct TYPE_18__ {int index; } ;
struct TYPE_15__ {TYPE_6__* levels; int flags; } ;
struct TYPE_17__ {TYPE_5__ ACPIState; TYPE_5__ initialState; } ;
struct TYPE_13__ {scalar_t__ BelowSafeInc; scalar_t__ AboveSafeInc; scalar_t__ NearTDPDec; scalar_t__ MaxPS; } ;
struct TYPE_12__ {scalar_t__ sclk_value; void* vCG_SPLL_FUNC_CNTL_4; void* vCG_SPLL_FUNC_CNTL_3; void* vCG_SPLL_FUNC_CNTL_2; void* vCG_SPLL_FUNC_CNTL; } ;
struct TYPE_11__ {scalar_t__ mclk_value; void* vDLL_CNTL; void* vMCLK_PWRMGT_CNTL; void* vMPLL_DQ_FUNC_CNTL_2; void* vMPLL_DQ_FUNC_CNTL; void* vMPLL_AD_FUNC_CNTL_2; void* vMPLL_AD_FUNC_CNTL; } ;
struct TYPE_16__ {int gen2PCIE; int ACIndex; void* SQPowerThrottle_2; void* SQPowerThrottle; TYPE_3__ dpm2; int mvdd; TYPE_2__ sclk; TYPE_1__ mclk; TYPE_8__ vddci; int std_vddc; TYPE_8__ vddc; } ;
typedef TYPE_7__ NISLANDS_SMC_STATETABLE ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_0 (int) ;
 int VAR_33 ;
 int VAR_34 ;
 void* FUNC_1 (int) ;
 struct evergreen_power_info* FUNC_2 (struct radeon_device*) ;
 struct ni_power_info* FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*,TYPE_8__*,int *) ;
 int FUNC_5 (struct radeon_device*,int ,int *) ;
 int FUNC_6 (struct radeon_device*,int ,int ,int *) ;
 int FUNC_7 (struct radeon_device*,int *,scalar_t__,TYPE_8__*) ;
 struct rv7xx_power_info* FUNC_8 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_9(struct radeon_device *VAR_35,
          NISLANDS_SMC_STATETABLE *VAR_36)
{
 struct rv7xx_power_info *VAR_37 = FUNC_8(VAR_35);
 struct evergreen_power_info *VAR_38 = FUNC_2(VAR_35);
 struct ni_power_info *VAR_39 = FUNC_3(VAR_35);
 u32 VAR_40 = VAR_39->clock_registers.mpll_ad_func_cntl;
 u32 VAR_41 = VAR_39->clock_registers.mpll_ad_func_cntl_2;
 u32 VAR_42 = VAR_39->clock_registers.mpll_dq_func_cntl;
 u32 VAR_43 = VAR_39->clock_registers.mpll_dq_func_cntl_2;
 u32 VAR_44 = VAR_39->clock_registers.cg_spll_func_cntl;
 u32 VAR_45 = VAR_39->clock_registers.cg_spll_func_cntl_2;
 u32 VAR_46 = VAR_39->clock_registers.cg_spll_func_cntl_3;
 u32 VAR_47 = VAR_39->clock_registers.cg_spll_func_cntl_4;
 u32 VAR_48 = VAR_39->clock_registers.mclk_pwrmgt_cntl;
 u32 VAR_49 = VAR_39->clock_registers.dll_cntl;
 u32 VAR_50;
 int VAR_51;

 VAR_36->ACPIState = VAR_36->initialState;

 VAR_36->ACPIState.flags &= ~VAR_31;

 if (VAR_37->acpi_vddc) {
  VAR_51 = FUNC_7(VAR_35,
      &VAR_38->vddc_voltage_table,
      VAR_37->acpi_vddc, &VAR_36->ACPIState.levels[0].vddc);
  if (!VAR_51) {
   u16 VAR_52;

   VAR_51 = FUNC_4(VAR_35,
             &VAR_36->ACPIState.levels[0].vddc, &VAR_52);
   if (!VAR_51)
    FUNC_6(VAR_35, VAR_52,
             VAR_36->ACPIState.levels[0].vddc.index,
             &VAR_36->ACPIState.levels[0].std_vddc);
  }

  if (VAR_37->pcie_gen2) {
   if (VAR_37->acpi_pcie_gen2)
    VAR_36->ACPIState.levels[0].gen2PCIE = 1;
   else
    VAR_36->ACPIState.levels[0].gen2PCIE = 0;
  } else {
   VAR_36->ACPIState.levels[0].gen2PCIE = 0;
  }
 } else {
  VAR_51 = FUNC_7(VAR_35,
      &VAR_38->vddc_voltage_table,
      VAR_37->min_vddc_in_table,
      &VAR_36->ACPIState.levels[0].vddc);
  if (!VAR_51) {
   u16 VAR_53;

   VAR_51 = FUNC_4(VAR_35,
             &VAR_36->ACPIState.levels[0].vddc,
             &VAR_53);
   if (!VAR_51)
    FUNC_6(VAR_35, VAR_53,
             VAR_36->ACPIState.levels[0].vddc.index,
             &VAR_36->ACPIState.levels[0].std_vddc);
  }
  VAR_36->ACPIState.levels[0].gen2PCIE = 0;
 }

 if (VAR_38->acpi_vddci) {
  if (VAR_38->vddci_control)
   FUNC_7(VAR_35,
        &VAR_38->vddci_voltage_table,
        VAR_38->acpi_vddci,
        &VAR_36->ACPIState.levels[0].vddci);
 }


 VAR_40 &= ~VAR_30;

 VAR_41 |= VAR_0 | VAR_32;

 if (VAR_37->mem_gddr5)
  VAR_42 &= ~VAR_30;
 VAR_43 |= VAR_0 | VAR_32 | VAR_1;


 VAR_48 |= (VAR_8 |
        VAR_11 |
        VAR_14 |
        VAR_17 |
        VAR_20 |
        VAR_23 |
        VAR_26 |
        VAR_29);

 VAR_48 &= ~(VAR_7 |
         VAR_10 |
         VAR_13 |
         VAR_16 |
         VAR_19 |
         VAR_22 |
         VAR_25 |
         VAR_28);

 VAR_49 |= (VAR_6 |
       VAR_9 |
       VAR_12 |
       VAR_15 |
       VAR_18 |
       VAR_21 |
       VAR_24 |
       VAR_27);

 VAR_45 &= ~VAR_33;
 VAR_45 |= FUNC_0(4);

 VAR_36->ACPIState.levels[0].mclk.vMPLL_AD_FUNC_CNTL = FUNC_1(VAR_40);
 VAR_36->ACPIState.levels[0].mclk.vMPLL_AD_FUNC_CNTL_2 = FUNC_1(VAR_41);
 VAR_36->ACPIState.levels[0].mclk.vMPLL_DQ_FUNC_CNTL = FUNC_1(VAR_42);
 VAR_36->ACPIState.levels[0].mclk.vMPLL_DQ_FUNC_CNTL_2 = FUNC_1(VAR_43);
 VAR_36->ACPIState.levels[0].mclk.vMCLK_PWRMGT_CNTL = FUNC_1(VAR_48);
 VAR_36->ACPIState.levels[0].mclk.vDLL_CNTL = FUNC_1(VAR_49);

 VAR_36->ACPIState.levels[0].mclk.mclk_value = 0;

 VAR_36->ACPIState.levels[0].sclk.vCG_SPLL_FUNC_CNTL = FUNC_1(VAR_44);
 VAR_36->ACPIState.levels[0].sclk.vCG_SPLL_FUNC_CNTL_2 = FUNC_1(VAR_45);
 VAR_36->ACPIState.levels[0].sclk.vCG_SPLL_FUNC_CNTL_3 = FUNC_1(VAR_46);
 VAR_36->ACPIState.levels[0].sclk.vCG_SPLL_FUNC_CNTL_4 = FUNC_1(VAR_47);

 VAR_36->ACPIState.levels[0].sclk.sclk_value = 0;

 FUNC_5(VAR_35, 0, &VAR_36->ACPIState.levels[0].mvdd);

 if (VAR_38->dynamic_ac_timing)
  VAR_36->ACPIState.levels[0].ACIndex = 1;

 VAR_36->ACPIState.levels[0].dpm2.MaxPS = 0;
 VAR_36->ACPIState.levels[0].dpm2.NearTDPDec = 0;
 VAR_36->ACPIState.levels[0].dpm2.AboveSafeInc = 0;
 VAR_36->ACPIState.levels[0].dpm2.BelowSafeInc = 0;

 VAR_50 = VAR_5 | VAR_4;
 VAR_36->ACPIState.levels[0].SQPowerThrottle = FUNC_1(VAR_50);

 VAR_50 = VAR_3 | VAR_34 | VAR_2;
 VAR_36->ACPIState.levels[0].SQPowerThrottle_2 = FUNC_1(VAR_50);

 return 0;
}
