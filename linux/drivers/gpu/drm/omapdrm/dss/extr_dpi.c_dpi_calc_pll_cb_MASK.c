
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int n; int m; unsigned long fint; unsigned long clkdco; } ;
struct dpi_clk_calc_ctx {TYPE_1__* dpi; int pck_min; TYPE_2__ pll_cinfo; } ;
struct TYPE_3__ {int dss; int pll; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long,int ,int ,int ,struct dpi_clk_calc_ctx*) ;

__attribute__((used)) static bool FUNC_2(int VAR_1, int VAR_2, unsigned long VAR_3,
  unsigned long VAR_4,
  void *VAR_5)
{
 struct dpi_clk_calc_ctx *VAR_6 = VAR_5;

 VAR_6->pll_cinfo.n = VAR_1;
 VAR_6->pll_cinfo.m = VAR_2;
 VAR_6->pll_cinfo.fint = VAR_3;
 VAR_6->pll_cinfo.clkdco = VAR_4;

 return FUNC_1(VAR_6->dpi->pll, VAR_4,
  VAR_6->pck_min, FUNC_0(VAR_6->dpi->dss),
  VAR_0, VAR_6);
}
