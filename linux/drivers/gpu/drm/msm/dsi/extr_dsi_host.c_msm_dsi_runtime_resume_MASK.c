
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct msm_dsi_host {int cfg_hnd; } ;
struct msm_dsi {struct mipi_dsi_host* host; } ;
struct mipi_dsi_host {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct msm_dsi_host*) ;
 struct msm_dsi* FUNC_1 (struct platform_device*) ;
 struct msm_dsi_host* FUNC_2 (struct mipi_dsi_host*) ;
 struct platform_device* FUNC_3 (struct device*) ;

int FUNC_4(struct device *VAR_0)
{
 struct platform_device *VAR_1 = FUNC_3(VAR_0);
 struct msm_dsi *VAR_2 = FUNC_1(VAR_1);
 struct mipi_dsi_host *VAR_3 = VAR_2->host;
 struct msm_dsi_host *VAR_4 = FUNC_2(VAR_3);

 if (!VAR_4->cfg_hnd)
  return 0;

 return FUNC_0(VAR_4);
}
