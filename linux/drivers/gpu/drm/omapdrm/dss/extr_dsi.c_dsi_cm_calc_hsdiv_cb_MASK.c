
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* mX; unsigned long* clkout; } ;
struct dsi_clk_calc_ctx {int req_pck_max; int req_pck_min; TYPE_3__* dsi; TYPE_1__ dsi_cinfo; } ;
struct TYPE_6__ {TYPE_2__* dss; } ;
struct TYPE_5__ {int dispc; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,unsigned long,int ,int ,int ,struct dsi_clk_calc_ctx*) ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_1(int VAR_2, unsigned long VAR_3,
  void *VAR_4)
{
 struct dsi_clk_calc_ctx *VAR_5 = VAR_4;

 VAR_5->dsi_cinfo.mX[VAR_0] = VAR_2;
 VAR_5->dsi_cinfo.clkout[VAR_0] = VAR_3;

 return FUNC_0(VAR_5->dsi->dss->dispc, VAR_3,
         VAR_5->req_pck_min, VAR_5->req_pck_max,
         VAR_1, VAR_5);
}
