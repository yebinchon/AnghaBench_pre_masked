
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lck_div; int pck_div; } ;
struct TYPE_3__ {TYPE_2__ clock_info; } ;
struct dpi_data {TYPE_1__ mgr_config; int dss; } ;
struct dpi_clk_calc_ctx {unsigned long fck; TYPE_2__ dispc_cinfo; } ;


 int VAR_0 ;
 int FUNC_0 (struct dpi_data*,unsigned long,struct dpi_clk_calc_ctx*) ;
 int FUNC_1 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct dpi_data *VAR_1, unsigned long VAR_2,
  unsigned long *VAR_3, int *VAR_4, int *VAR_5)
{
 struct dpi_clk_calc_ctx VAR_6;
 int VAR_7;
 bool VAR_8;

 VAR_8 = FUNC_0(VAR_1, VAR_2, &VAR_6);
 if (!VAR_8)
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_1->dss, VAR_6.fck);
 if (VAR_7)
  return VAR_7;

 VAR_1->mgr_config.clock_info = VAR_6.dispc_cinfo;

 *VAR_3 = VAR_6.fck;
 *VAR_4 = VAR_6.dispc_cinfo.lck_div;
 *VAR_5 = VAR_6.dispc_cinfo.pck_div;

 return 0;
}
