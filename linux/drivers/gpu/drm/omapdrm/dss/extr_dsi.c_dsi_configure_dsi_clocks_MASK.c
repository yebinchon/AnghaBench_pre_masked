
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dss_pll_clock_info {int dummy; } ;
struct dsi_data {int pll; struct dss_pll_clock_info user_dsi_cinfo; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,struct dss_pll_clock_info*) ;

__attribute__((used)) static int FUNC_2(struct dsi_data *VAR_0)
{
 struct dss_pll_clock_info VAR_1;
 int VAR_2;

 VAR_1 = VAR_0->user_dsi_cinfo;

 VAR_2 = FUNC_1(&VAR_0->pll, &VAR_1);
 if (VAR_2) {
  FUNC_0("Failed to set dsi clocks\n");
  return VAR_2;
 }

 return 0;
}
