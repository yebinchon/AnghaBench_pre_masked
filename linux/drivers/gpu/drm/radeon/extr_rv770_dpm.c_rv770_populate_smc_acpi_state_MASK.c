
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
struct TYPE_10__ {int mpll_ad_func_cntl; int mpll_ad_func_cntl_2; int mpll_dq_func_cntl; int mpll_dq_func_cntl_2; int cg_spll_func_cntl; int cg_spll_func_cntl_2; int cg_spll_func_cntl_3; } ;
struct TYPE_11__ {TYPE_1__ rv770; } ;
struct rv7xx_power_info {scalar_t__ min_vddc_in_table; scalar_t__ acpi_pcie_gen2; scalar_t__ pcie_gen2; scalar_t__ acpi_vddc; TYPE_2__ clk_regs; } ;
struct radeon_device {int dummy; } ;
struct TYPE_16__ {TYPE_6__* levels; int flags; } ;
struct TYPE_17__ {TYPE_7__ ACPIState; TYPE_7__ initialState; } ;
struct TYPE_14__ {scalar_t__ sclk_value; void* vCG_SPLL_FUNC_CNTL_3; void* vCG_SPLL_FUNC_CNTL_2; void* vCG_SPLL_FUNC_CNTL; } ;
struct TYPE_12__ {scalar_t__ mclk_value; void* vDLL_CNTL; void* vMCLK_PWRMGT_CNTL; void* vMPLL_DQ_FUNC_CNTL_2; void* vMPLL_DQ_FUNC_CNTL; void* vMPLL_AD_FUNC_CNTL_2; void* vMPLL_AD_FUNC_CNTL; } ;
struct TYPE_13__ {TYPE_3__ mclk770; } ;
struct TYPE_15__ {int gen2PCIE; int gen2XSP; int mvdd; TYPE_5__ sclk; TYPE_4__ mclk; int vddc; } ;
typedef TYPE_8__ RV770_SMC_STATETABLE ;


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
 int FUNC_0 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* FUNC_1 (int) ;
 struct rv7xx_power_info* FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*,int ,int *) ;
 int FUNC_4 (struct radeon_device*,scalar_t__,int *) ;

__attribute__((used)) static int FUNC_5(struct radeon_device *VAR_15,
      RV770_SMC_STATETABLE *VAR_16)
{
 struct rv7xx_power_info *VAR_17 = FUNC_2(VAR_15);

 u32 VAR_18 =
  VAR_17->clk_regs.rv770.mpll_ad_func_cntl;
 u32 VAR_19 =
  VAR_17->clk_regs.rv770.mpll_ad_func_cntl_2;
 u32 VAR_20 =
  VAR_17->clk_regs.rv770.mpll_dq_func_cntl;
 u32 VAR_21 =
  VAR_17->clk_regs.rv770.mpll_dq_func_cntl_2;
 u32 VAR_22 =
  VAR_17->clk_regs.rv770.cg_spll_func_cntl;
 u32 VAR_23 =
  VAR_17->clk_regs.rv770.cg_spll_func_cntl_2;
 u32 VAR_24 =
  VAR_17->clk_regs.rv770.cg_spll_func_cntl_3;
 u32 VAR_25;
 u32 VAR_26;

 VAR_16->ACPIState = VAR_16->initialState;

 VAR_16->ACPIState.flags &= ~VAR_9;

 if (VAR_17->acpi_vddc) {
  FUNC_4(VAR_15, VAR_17->acpi_vddc,
       &VAR_16->ACPIState.levels[0].vddc);
  if (VAR_17->pcie_gen2) {
   if (VAR_17->acpi_pcie_gen2)
    VAR_16->ACPIState.levels[0].gen2PCIE = 1;
   else
    VAR_16->ACPIState.levels[0].gen2PCIE = 0;
  } else
   VAR_16->ACPIState.levels[0].gen2PCIE = 0;
  if (VAR_17->acpi_pcie_gen2)
   VAR_16->ACPIState.levels[0].gen2XSP = 1;
  else
   VAR_16->ACPIState.levels[0].gen2XSP = 0;
 } else {
  FUNC_4(VAR_15, VAR_17->min_vddc_in_table,
       &VAR_16->ACPIState.levels[0].vddc);
  VAR_16->ACPIState.levels[0].gen2PCIE = 0;
 }


 VAR_19 |= VAR_0 | VAR_10;

 VAR_21 |= VAR_0 | VAR_10;

 VAR_25 = (VAR_1 |
       VAR_2 |
       VAR_3 |
       VAR_4 |
       VAR_5 |
       VAR_6 |
       VAR_7 |
       VAR_8);

 VAR_26 = 0xff000000;

 VAR_22 |= VAR_13 | VAR_14 | VAR_12;

 VAR_23 &= ~VAR_11;
 VAR_23 |= FUNC_0(4);

 VAR_16->ACPIState.levels[0].mclk.mclk770.vMPLL_AD_FUNC_CNTL = FUNC_1(VAR_18);
 VAR_16->ACPIState.levels[0].mclk.mclk770.vMPLL_AD_FUNC_CNTL_2 = FUNC_1(VAR_19);
 VAR_16->ACPIState.levels[0].mclk.mclk770.vMPLL_DQ_FUNC_CNTL = FUNC_1(VAR_20);
 VAR_16->ACPIState.levels[0].mclk.mclk770.vMPLL_DQ_FUNC_CNTL_2 = FUNC_1(VAR_21);

 VAR_16->ACPIState.levels[0].mclk.mclk770.vMCLK_PWRMGT_CNTL = FUNC_1(VAR_25);
 VAR_16->ACPIState.levels[0].mclk.mclk770.vDLL_CNTL = FUNC_1(VAR_26);

 VAR_16->ACPIState.levels[0].mclk.mclk770.mclk_value = 0;

 VAR_16->ACPIState.levels[0].sclk.vCG_SPLL_FUNC_CNTL = FUNC_1(VAR_22);
 VAR_16->ACPIState.levels[0].sclk.vCG_SPLL_FUNC_CNTL_2 = FUNC_1(VAR_23);
 VAR_16->ACPIState.levels[0].sclk.vCG_SPLL_FUNC_CNTL_3 = FUNC_1(VAR_24);

 VAR_16->ACPIState.levels[0].sclk.sclk_value = 0;

 FUNC_3(VAR_15, 0, &VAR_16->ACPIState.levels[0].mvdd);

 VAR_16->ACPIState.levels[1] = VAR_16->ACPIState.levels[0];
 VAR_16->ACPIState.levels[2] = VAR_16->ACPIState.levels[0];

 return 0;
}
