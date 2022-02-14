
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dss_device {int syscon_pll_ctrl_offset; int syscon_pll_ctrl; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;
typedef enum dss_clk_source { ____Placeholder_dss_clk_source } dss_clk_source ;


 int FUNC_0 (char*) ;





 int VAR_0 ;



 int FUNC_1 (int ,int ,int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct dss_device *VAR_1,
     enum dss_clk_source VAR_2,
     enum omap_channel VAR_3)
{
 unsigned int VAR_4, VAR_5;

 if (!VAR_1->syscon_pll_ctrl)
  return -VAR_0;

 switch (VAR_3) {
 case 130:
  VAR_4 = 3;

  switch (VAR_2) {
  case 134:
   VAR_5 = 0; break;
  case 135:
   VAR_5 = 1; break;
  default:
   FUNC_0("error in PLL mux config for LCD\n");
   return -VAR_0;
  }

  break;
 case 129:
  VAR_4 = 5;

  switch (VAR_2) {
  case 133:
   VAR_5 = 0; break;
  case 131:
   VAR_5 = 1; break;
  case 135:
   VAR_5 = 2; break;
  default:
   FUNC_0("error in PLL mux config for LCD2\n");
   return -VAR_0;
  }

  break;
 case 128:
  VAR_4 = 7;

  switch (VAR_2) {
  case 132:
   VAR_5 = 0; break;
  case 133:
   VAR_5 = 1; break;
  case 135:
   VAR_5 = 2; break;
  default:
   FUNC_0("error in PLL mux config for LCD3\n");
   return -VAR_0;
  }

  break;
 default:
  FUNC_0("error in PLL mux config\n");
  return -VAR_0;
 }

 FUNC_1(VAR_1->syscon_pll_ctrl, VAR_1->syscon_pll_ctrl_offset,
  0x3 << VAR_4, VAR_5 << VAR_4);

 return 0;
}
