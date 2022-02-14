
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dss_device {int* dsi_clk_source; } ;
typedef enum dss_clk_source { ____Placeholder_dss_clk_source } dss_clk_source ;



enum dss_clk_source FUNC_0(struct dss_device *VAR_0,
        int VAR_1)
{
 return VAR_0->dsi_clk_source[VAR_1];
}
