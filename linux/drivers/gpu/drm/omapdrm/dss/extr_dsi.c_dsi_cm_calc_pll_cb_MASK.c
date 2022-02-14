
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dsi_data {TYPE_1__* data; } ;
struct TYPE_4__ {int n; int m; unsigned long fint; unsigned long clkdco; } ;
struct dsi_clk_calc_ctx {int req_pck_min; int pll; TYPE_2__ dsi_cinfo; struct dsi_data* dsi; } ;
struct TYPE_3__ {int max_fck_freq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned long,int ,int ,int ,struct dsi_clk_calc_ctx*) ;

__attribute__((used)) static bool FUNC_1(int VAR_1, int VAR_2, unsigned long VAR_3,
  unsigned long VAR_4, void *VAR_5)
{
 struct dsi_clk_calc_ctx *VAR_6 = VAR_5;
 struct dsi_data *VAR_7 = VAR_6->dsi;

 VAR_6->dsi_cinfo.n = VAR_1;
 VAR_6->dsi_cinfo.m = VAR_2;
 VAR_6->dsi_cinfo.fint = VAR_3;
 VAR_6->dsi_cinfo.clkdco = VAR_4;

 return FUNC_0(VAR_6->pll, VAR_4, VAR_6->req_pck_min,
   VAR_7->data->max_fck_freq,
   VAR_0, VAR_6);
}
