
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_13__ {int mpll_ad_func_cntl; int mpll_ad_func_cntl_2; int mpll_dq_func_cntl; int mpll_dq_func_cntl_2; int cg_spll_func_cntl; int cg_spll_func_cntl_2; int cg_spll_func_cntl_3; int mclk_pwrmgt_cntl; int dll_cntl; } ;
struct TYPE_14__ {TYPE_4__ rv770; } ;
struct rv7xx_power_info {scalar_t__ mem_gddr5; scalar_t__ min_vddc_in_table; scalar_t__ acpi_pcie_gen2; scalar_t__ pcie_gen2; scalar_t__ acpi_vddc; TYPE_5__ clk_regs; } ;
struct radeon_device {scalar_t__ family; } ;
struct evergreen_power_info {scalar_t__ dynamic_ac_timing; scalar_t__ acpi_vddci; int vddci_voltage_table; scalar_t__ vddci_control; int vddc_voltage_table; } ;
struct TYPE_16__ {TYPE_6__* levels; int flags; } ;
struct TYPE_17__ {TYPE_7__ ACPIState; TYPE_7__ initialState; } ;
struct TYPE_12__ {scalar_t__ sclk_value; void* vCG_SPLL_FUNC_CNTL_3; void* vCG_SPLL_FUNC_CNTL_2; void* vCG_SPLL_FUNC_CNTL; } ;
struct TYPE_10__ {scalar_t__ mclk_value; void* vDLL_CNTL; void* vMCLK_PWRMGT_CNTL; void* vMPLL_DQ_FUNC_CNTL_2; void* vMPLL_DQ_FUNC_CNTL; void* vMPLL_AD_FUNC_CNTL_2; void* vMPLL_AD_FUNC_CNTL; } ;
struct TYPE_11__ {TYPE_1__ mclk770; } ;
struct TYPE_15__ {int gen2PCIE; int gen2XSP; int ACIndex; int mvdd; TYPE_3__ sclk; TYPE_2__ mclk; int vddci; int vddc; } ;
typedef TYPE_8__ RV770_SMC_STATETABLE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int FUNC_0 (int) ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct radeon_device*,int ,int *) ;
 int FUNC_3 (struct radeon_device*,int *,scalar_t__,int *) ;
 struct evergreen_power_info* FUNC_4 (struct radeon_device*) ;
 struct rv7xx_power_info* FUNC_5 (struct radeon_device*) ;

int FUNC_6(struct radeon_device *VAR_34,
        RV770_SMC_STATETABLE *VAR_35)
{
 struct rv7xx_power_info *VAR_36 = FUNC_5(VAR_34);
 struct evergreen_power_info *VAR_37 = FUNC_4(VAR_34);
 u32 VAR_38 =
  VAR_36->clk_regs.rv770.mpll_ad_func_cntl;
 u32 VAR_39 =
  VAR_36->clk_regs.rv770.mpll_ad_func_cntl_2;
 u32 VAR_40 =
  VAR_36->clk_regs.rv770.mpll_dq_func_cntl;
 u32 VAR_41 =
  VAR_36->clk_regs.rv770.mpll_dq_func_cntl_2;
 u32 VAR_42 =
  VAR_36->clk_regs.rv770.cg_spll_func_cntl;
 u32 VAR_43 =
  VAR_36->clk_regs.rv770.cg_spll_func_cntl_2;
 u32 VAR_44 =
  VAR_36->clk_regs.rv770.cg_spll_func_cntl_3;
 u32 VAR_45 =
  VAR_36->clk_regs.rv770.mclk_pwrmgt_cntl;
 u32 VAR_46 =
  VAR_36->clk_regs.rv770.dll_cntl;

 VAR_35->ACPIState = VAR_35->initialState;

 VAR_35->ACPIState.flags &= ~VAR_28;

 if (VAR_36->acpi_vddc) {
  FUNC_3(VAR_34,
            &VAR_37->vddc_voltage_table,
            VAR_36->acpi_vddc,
            &VAR_35->ACPIState.levels[0].vddc);
  if (VAR_36->pcie_gen2) {
   if (VAR_36->acpi_pcie_gen2)
    VAR_35->ACPIState.levels[0].gen2PCIE = 1;
   else
    VAR_35->ACPIState.levels[0].gen2PCIE = 0;
  } else
   VAR_35->ACPIState.levels[0].gen2PCIE = 0;
  if (VAR_36->acpi_pcie_gen2)
   VAR_35->ACPIState.levels[0].gen2XSP = 1;
  else
   VAR_35->ACPIState.levels[0].gen2XSP = 0;
 } else {
  FUNC_3(VAR_34,
            &VAR_37->vddc_voltage_table,
            VAR_36->min_vddc_in_table,
            &VAR_35->ACPIState.levels[0].vddc);
  VAR_35->ACPIState.levels[0].gen2PCIE = 0;
 }

 if (VAR_37->acpi_vddci) {
  if (VAR_37->vddci_control) {
   FUNC_3(VAR_34,
             &VAR_37->vddci_voltage_table,
             VAR_37->acpi_vddci,
             &VAR_35->ACPIState.levels[0].vddci);
  }
 }

 VAR_38 &= ~VAR_27;

 VAR_39 |= VAR_0 | VAR_29;

 if (VAR_36->mem_gddr5)
  VAR_40 &= ~VAR_27;
 VAR_41 |= VAR_0 | VAR_29 | VAR_1;

 VAR_45 |= (VAR_5 |
        VAR_8 |
        VAR_11 |
        VAR_14 |
        VAR_17 |
        VAR_20 |
        VAR_23 |
        VAR_26);

 VAR_45 &= ~(VAR_4 |
         VAR_7 |
         VAR_10 |
         VAR_13 |
         VAR_16 |
         VAR_19 |
         VAR_22 |
         VAR_25);

 VAR_46 |= (VAR_3 |
       VAR_6 |
       VAR_9 |
       VAR_12 |
       VAR_15 |
       VAR_18 |
       VAR_21 |
       VAR_24);


 if (VAR_34->family <= VAR_2)
  VAR_42 |= VAR_32 | VAR_33 | VAR_31;

 VAR_43 &= ~VAR_30;
 VAR_43 |= FUNC_0(4);

 VAR_35->ACPIState.levels[0].mclk.mclk770.vMPLL_AD_FUNC_CNTL =
  FUNC_1(VAR_38);
 VAR_35->ACPIState.levels[0].mclk.mclk770.vMPLL_AD_FUNC_CNTL_2 =
  FUNC_1(VAR_39);
 VAR_35->ACPIState.levels[0].mclk.mclk770.vMPLL_DQ_FUNC_CNTL =
  FUNC_1(VAR_40);
 VAR_35->ACPIState.levels[0].mclk.mclk770.vMPLL_DQ_FUNC_CNTL_2 =
  FUNC_1(VAR_41);
 VAR_35->ACPIState.levels[0].mclk.mclk770.vMCLK_PWRMGT_CNTL =
  FUNC_1(VAR_45);
 VAR_35->ACPIState.levels[0].mclk.mclk770.vDLL_CNTL = FUNC_1(VAR_46);

 VAR_35->ACPIState.levels[0].mclk.mclk770.mclk_value = 0;

 VAR_35->ACPIState.levels[0].sclk.vCG_SPLL_FUNC_CNTL =
  FUNC_1(VAR_42);
 VAR_35->ACPIState.levels[0].sclk.vCG_SPLL_FUNC_CNTL_2 =
  FUNC_1(VAR_43);
 VAR_35->ACPIState.levels[0].sclk.vCG_SPLL_FUNC_CNTL_3 =
  FUNC_1(VAR_44);

 VAR_35->ACPIState.levels[0].sclk.sclk_value = 0;

 FUNC_2(VAR_34, 0, &VAR_35->ACPIState.levels[0].mvdd);

 if (VAR_37->dynamic_ac_timing)
  VAR_35->ACPIState.levels[0].ACIndex = 1;

 VAR_35->ACPIState.levels[1] = VAR_35->ACPIState.levels[0];
 VAR_35->ACPIState.levels[2] = VAR_35->ACPIState.levels[0];

 return 0;
}
