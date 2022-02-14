
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dss_device {int dispc_clk_source; } ;
typedef enum dss_clk_source { ____Placeholder_dss_clk_source } dss_clk_source ;



enum dss_clk_source FUNC_0(struct dss_device *VAR_0)
{
 return VAR_0->dispc_clk_source;
}
