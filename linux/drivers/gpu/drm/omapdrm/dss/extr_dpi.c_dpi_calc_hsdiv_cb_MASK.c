
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* mX; unsigned long* clkout; } ;
struct dpi_clk_calc_ctx {size_t clkout_idx; int pck_max; int pck_min; TYPE_3__* dpi; TYPE_1__ pll_cinfo; } ;
struct TYPE_6__ {TYPE_2__* dss; } ;
struct TYPE_5__ {int dispc; } ;


 int FUNC_0 (int ,unsigned long,int ,int ,int ,struct dpi_clk_calc_ctx*) ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_1(int VAR_1, unsigned long VAR_2,
  void *VAR_3)
{
 struct dpi_clk_calc_ctx *VAR_4 = VAR_3;

 VAR_4->pll_cinfo.mX[VAR_4->clkout_idx] = VAR_1;
 VAR_4->pll_cinfo.clkout[VAR_4->clkout_idx] = VAR_2;

 return FUNC_0(VAR_4->dpi->dss->dispc, VAR_2,
         VAR_4->pck_min, VAR_4->pck_max,
         VAR_0, VAR_4);
}
