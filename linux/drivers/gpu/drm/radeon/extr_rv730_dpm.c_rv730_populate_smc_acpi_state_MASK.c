
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
struct TYPE_10__ {int mpll_func_cntl; int mpll_func_cntl2; int mpll_func_cntl3; int cg_spll_func_cntl; int cg_spll_func_cntl_2; int cg_spll_func_cntl_3; } ;
struct TYPE_11__ {TYPE_1__ rv730; } ;
struct rv7xx_power_info {TYPE_2__ clk_regs; scalar_t__ min_vddc_in_table; int acpi_pcie_gen2; scalar_t__ pcie_gen2; scalar_t__ acpi_vddc; } ;
struct radeon_device {int dummy; } ;
struct TYPE_15__ {TYPE_7__* levels; int flags; } ;
struct TYPE_17__ {TYPE_6__ ACPIState; TYPE_6__ initialState; } ;
struct TYPE_14__ {scalar_t__ sclk_value; void* vCG_SPLL_FUNC_CNTL_3; void* vCG_SPLL_FUNC_CNTL_2; void* vCG_SPLL_FUNC_CNTL; } ;
struct TYPE_12__ {scalar_t__ mclk_value; void* vDLL_CNTL; void* vMCLK_PWRMGT_CNTL; void* vMPLL_FUNC_CNTL3; void* vMPLL_FUNC_CNTL2; void* vMPLL_FUNC_CNTL; } ;
struct TYPE_13__ {TYPE_3__ mclk730; } ;
struct TYPE_16__ {int mvdd; TYPE_5__ sclk; TYPE_4__ mclk; int gen2PCIE; int vddc; int gen2XSP; } ;
typedef TYPE_8__ RV770_SMC_STATETABLE ;


 int FUNC_0 (int) ;
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
 int FUNC_1 (int) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 void* FUNC_2 (int) ;
 struct rv7xx_power_info* FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*,int ,int *) ;
 int FUNC_5 (struct radeon_device*,scalar_t__,int *) ;

int FUNC_6(struct radeon_device *VAR_25,
      RV770_SMC_STATETABLE *VAR_26)
{
 struct rv7xx_power_info *VAR_27 = FUNC_3(VAR_25);
 u32 VAR_28 = 0;
 u32 VAR_29 = 0 ;
 u32 VAR_30 = 0;
 u32 VAR_31;
 u32 VAR_32;
 u32 VAR_33;
 u32 VAR_34;
 u32 VAR_35;

 VAR_26->ACPIState = VAR_26->initialState;
 VAR_26->ACPIState.flags &= ~VAR_20;

 if (VAR_27->acpi_vddc) {
  FUNC_5(VAR_25, VAR_27->acpi_vddc,
       &VAR_26->ACPIState.levels[0].vddc);
  VAR_26->ACPIState.levels[0].gen2PCIE = VAR_27->pcie_gen2 ?
   VAR_27->acpi_pcie_gen2 : 0;
  VAR_26->ACPIState.levels[0].gen2XSP =
   VAR_27->acpi_pcie_gen2;
 } else {
  FUNC_5(VAR_25, VAR_27->min_vddc_in_table,
       &VAR_26->ACPIState.levels[0].vddc);
  VAR_26->ACPIState.levels[0].gen2PCIE = 0;
 }

 VAR_28 = VAR_27->clk_regs.rv730.mpll_func_cntl;
 VAR_29 = VAR_27->clk_regs.rv730.mpll_func_cntl2;
 VAR_30 = VAR_27->clk_regs.rv730.mpll_func_cntl3;

 VAR_28 |= VAR_2 | VAR_1;
 VAR_28 &= ~VAR_3;

 VAR_29 &= ~VAR_0;
 VAR_29 |= FUNC_0(1);

 VAR_31 = (VAR_4 |
       VAR_6 |
       VAR_8 |
       VAR_10 |
       VAR_12 |
       VAR_14 |
       VAR_16 |
       VAR_18 |
       VAR_5 |
       VAR_7 |
       VAR_9 |
       VAR_11 |
       VAR_13 |
       VAR_15 |
       VAR_17 |
       VAR_19);

 VAR_32 = 0xff000000;

 VAR_33 = VAR_27->clk_regs.rv730.cg_spll_func_cntl;
 VAR_34 = VAR_27->clk_regs.rv730.cg_spll_func_cntl_2;
 VAR_35 = VAR_27->clk_regs.rv730.cg_spll_func_cntl_3;

 VAR_33 |= VAR_23 | VAR_22;
 VAR_33 &= ~VAR_24;

 VAR_34 &= ~VAR_21;
 VAR_34 |= FUNC_1(4);

 VAR_26->ACPIState.levels[0].mclk.mclk730.vMPLL_FUNC_CNTL = FUNC_2(VAR_28);
 VAR_26->ACPIState.levels[0].mclk.mclk730.vMPLL_FUNC_CNTL2 = FUNC_2(VAR_29);
 VAR_26->ACPIState.levels[0].mclk.mclk730.vMPLL_FUNC_CNTL3 = FUNC_2(VAR_30);
 VAR_26->ACPIState.levels[0].mclk.mclk730.vMCLK_PWRMGT_CNTL = FUNC_2(VAR_31);
 VAR_26->ACPIState.levels[0].mclk.mclk730.vDLL_CNTL = FUNC_2(VAR_32);

 VAR_26->ACPIState.levels[0].mclk.mclk730.mclk_value = 0;

 VAR_26->ACPIState.levels[0].sclk.vCG_SPLL_FUNC_CNTL = FUNC_2(VAR_33);
 VAR_26->ACPIState.levels[0].sclk.vCG_SPLL_FUNC_CNTL_2 = FUNC_2(VAR_34);
 VAR_26->ACPIState.levels[0].sclk.vCG_SPLL_FUNC_CNTL_3 = FUNC_2(VAR_35);

 VAR_26->ACPIState.levels[0].sclk.sclk_value = 0;

 FUNC_4(VAR_25, 0, &VAR_26->ACPIState.levels[0].mvdd);

 VAR_26->ACPIState.levels[1] = VAR_26->ACPIState.levels[0];
 VAR_26->ACPIState.levels[2] = VAR_26->ACPIState.levels[0];

 return 0;
}
