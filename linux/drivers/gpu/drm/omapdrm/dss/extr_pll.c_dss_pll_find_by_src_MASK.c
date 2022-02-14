
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dss_pll {int dummy; } ;
struct dss_device {int dummy; } ;
typedef enum dss_clk_source { ____Placeholder_dss_clk_source } dss_clk_source ;
 struct dss_pll* FUNC_0 (struct dss_device*,char*) ;

struct dss_pll *FUNC_1(struct dss_device *VAR_0,
        enum dss_clk_source VAR_1)
{
 struct dss_pll *VAR_2;

 switch (VAR_1) {
 default:
 case 135:
  return ((void*)0);

 case 134:
  return FUNC_0(VAR_0, "hdmi");

 case 133:
 case 132:
 case 131:
  VAR_2 = FUNC_0(VAR_0, "dsi0");
  if (!VAR_2)
   VAR_2 = FUNC_0(VAR_0, "video0");
  return VAR_2;

 case 130:
 case 129:
 case 128:
  VAR_2 = FUNC_0(VAR_0, "dsi1");
  if (!VAR_2)
   VAR_2 = FUNC_0(VAR_0, "video1");
  return VAR_2;
 }
}
