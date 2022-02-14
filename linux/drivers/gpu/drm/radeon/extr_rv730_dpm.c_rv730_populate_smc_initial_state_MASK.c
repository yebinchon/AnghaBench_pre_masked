
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_19__ {int mclk; int sclk; int flags; int vddc; } ;
struct rv7xx_ps {TYPE_9__ low; } ;
struct TYPE_13__ {int mpll_func_cntl; int mpll_func_cntl2; int mpll_func_cntl3; int mclk_pwrmgt_cntl; int dll_cntl; int mpll_ss; int mpll_ss2; int cg_spll_func_cntl; int cg_spll_func_cntl_2; int cg_spll_func_cntl_3; int cg_spll_spread_spectrum; int cg_spll_spread_spectrum_2; } ;
struct TYPE_14__ {TYPE_3__ rv730; } ;
struct rv7xx_power_info {int dsp; scalar_t__ boot_in_gen2; TYPE_4__ clk_regs; } ;
struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;
struct TYPE_17__ {int flags; TYPE_6__* levels; } ;
struct TYPE_18__ {TYPE_7__ initialState; } ;
struct TYPE_15__ {void* sclk_value; void* vCG_SPLL_SPREAD_SPECTRUM_2; void* vCG_SPLL_SPREAD_SPECTRUM; void* vCG_SPLL_FUNC_CNTL_3; void* vCG_SPLL_FUNC_CNTL_2; void* vCG_SPLL_FUNC_CNTL; } ;
struct TYPE_11__ {void* mclk_value; void* vMPLL_SS2; void* vMPLL_SS; void* vDLL_CNTL; void* vMCLK_PWRMGT_CNTL; void* vMPLL_FUNC_CNTL3; void* vMPLL_FUNC_CNTL2; void* vMPLL_FUNC_CNTL; } ;
struct TYPE_12__ {TYPE_1__ mclk730; } ;
struct TYPE_16__ {int gen2PCIE; int gen2XSP; void* bSP; void* aT; int mvdd; int vddc; int seqValue; int arbValue; TYPE_5__ sclk; TYPE_2__ mclk; } ;
typedef TYPE_8__ RV770_SMC_STATETABLE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_2 (int) ;
 struct rv7xx_power_info* FUNC_3 (struct radeon_device*) ;
 struct rv7xx_ps* FUNC_4 (struct radeon_ps*) ;
 int FUNC_5 (struct radeon_device*,TYPE_9__*) ;
 int FUNC_6 (struct radeon_device*,int *) ;
 int FUNC_7 (struct radeon_device*,int ,int *) ;

int FUNC_8(struct radeon_device *VAR_3,
         struct radeon_ps *VAR_4,
         RV770_SMC_STATETABLE *VAR_5)
{
 struct rv7xx_ps *VAR_6 = FUNC_4(VAR_4);
 struct rv7xx_power_info *VAR_7 = FUNC_3(VAR_3);
 u32 VAR_8;

 VAR_5->initialState.levels[0].mclk.mclk730.vMPLL_FUNC_CNTL =
  FUNC_2(VAR_7->clk_regs.rv730.mpll_func_cntl);
 VAR_5->initialState.levels[0].mclk.mclk730.vMPLL_FUNC_CNTL2 =
  FUNC_2(VAR_7->clk_regs.rv730.mpll_func_cntl2);
 VAR_5->initialState.levels[0].mclk.mclk730.vMPLL_FUNC_CNTL3 =
  FUNC_2(VAR_7->clk_regs.rv730.mpll_func_cntl3);
 VAR_5->initialState.levels[0].mclk.mclk730.vMCLK_PWRMGT_CNTL =
  FUNC_2(VAR_7->clk_regs.rv730.mclk_pwrmgt_cntl);
 VAR_5->initialState.levels[0].mclk.mclk730.vDLL_CNTL =
  FUNC_2(VAR_7->clk_regs.rv730.dll_cntl);
 VAR_5->initialState.levels[0].mclk.mclk730.vMPLL_SS =
  FUNC_2(VAR_7->clk_regs.rv730.mpll_ss);
 VAR_5->initialState.levels[0].mclk.mclk730.vMPLL_SS2 =
  FUNC_2(VAR_7->clk_regs.rv730.mpll_ss2);

 VAR_5->initialState.levels[0].mclk.mclk730.mclk_value =
  FUNC_2(VAR_6->low.mclk);

 VAR_5->initialState.levels[0].sclk.vCG_SPLL_FUNC_CNTL =
  FUNC_2(VAR_7->clk_regs.rv730.cg_spll_func_cntl);
 VAR_5->initialState.levels[0].sclk.vCG_SPLL_FUNC_CNTL_2 =
  FUNC_2(VAR_7->clk_regs.rv730.cg_spll_func_cntl_2);
 VAR_5->initialState.levels[0].sclk.vCG_SPLL_FUNC_CNTL_3 =
  FUNC_2(VAR_7->clk_regs.rv730.cg_spll_func_cntl_3);
 VAR_5->initialState.levels[0].sclk.vCG_SPLL_SPREAD_SPECTRUM =
  FUNC_2(VAR_7->clk_regs.rv730.cg_spll_spread_spectrum);
 VAR_5->initialState.levels[0].sclk.vCG_SPLL_SPREAD_SPECTRUM_2 =
  FUNC_2(VAR_7->clk_regs.rv730.cg_spll_spread_spectrum_2);

 VAR_5->initialState.levels[0].sclk.sclk_value =
  FUNC_2(VAR_6->low.sclk);

 VAR_5->initialState.levels[0].arbValue = VAR_1;

 VAR_5->initialState.levels[0].seqValue =
  FUNC_5(VAR_3, &VAR_6->low);

 FUNC_7(VAR_3,
      VAR_6->low.vddc,
      &VAR_5->initialState.levels[0].vddc);
 FUNC_6(VAR_3,
       &VAR_5->initialState.levels[0].mvdd);

 VAR_8 = FUNC_1(0xffff) | FUNC_0(0);

 VAR_5->initialState.levels[0].aT = FUNC_2(VAR_8);

 VAR_5->initialState.levels[0].bSP = FUNC_2(VAR_7->dsp);

 if (VAR_7->boot_in_gen2)
  VAR_5->initialState.levels[0].gen2PCIE = 1;
 else
  VAR_5->initialState.levels[0].gen2PCIE = 0;
 if (VAR_6->low.flags & VAR_0)
  VAR_5->initialState.levels[0].gen2XSP = 1;
 else
  VAR_5->initialState.levels[0].gen2XSP = 0;

 VAR_5->initialState.levels[1] = VAR_5->initialState.levels[0];
 VAR_5->initialState.levels[2] = VAR_5->initialState.levels[0];

 VAR_5->initialState.flags |= VAR_2;

 return 0;
}
