
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct dpi_data {TYPE_3__* pll; int clk_src; } ;
struct TYPE_7__ {int lck_div; int pck_div; int lck; int pck; } ;
struct TYPE_9__ {int * clkout; } ;
struct dpi_clk_calc_ctx {unsigned long pck_min; unsigned long pck_max; TYPE_2__ dispc_cinfo; TYPE_4__ pll_cinfo; struct dpi_data* dpi; int clkout_idx; } ;
struct TYPE_8__ {TYPE_1__* hw; int clkin; } ;
struct TYPE_6__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*,unsigned long,unsigned long,unsigned long,int ,struct dpi_clk_calc_ctx*) ;
 int FUNC_2 (TYPE_3__*,unsigned long,unsigned long,TYPE_4__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct dpi_clk_calc_ctx*,int ,int) ;

__attribute__((used)) static bool FUNC_5(struct dpi_data *VAR_2, unsigned long VAR_3,
  struct dpi_clk_calc_ctx *VAR_4)
{
 unsigned long VAR_5;

 FUNC_4(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->dpi = VAR_2;
 VAR_4->clkout_idx = FUNC_3(VAR_2->clk_src);

 VAR_5 = FUNC_0(VAR_2->pll->clkin);

 if (VAR_2->pll->hw->type == VAR_0) {
  unsigned long VAR_6, VAR_7;

  VAR_4->pck_min = VAR_3 - 1000;
  VAR_4->pck_max = VAR_3 + 1000;

  VAR_6 = 0;
  VAR_7 = 0;

  return FUNC_1(VAR_4->dpi->pll, VAR_5,
    VAR_6, VAR_7,
    VAR_1, VAR_4);
 } else {
  FUNC_2(VAR_2->pll, VAR_5, VAR_3, &VAR_4->pll_cinfo);

  VAR_4->dispc_cinfo.lck_div = 1;
  VAR_4->dispc_cinfo.pck_div = 1;
  VAR_4->dispc_cinfo.lck = VAR_4->pll_cinfo.clkout[0];
  VAR_4->dispc_cinfo.pck = VAR_4->dispc_cinfo.lck;

  return 1;
 }
}
