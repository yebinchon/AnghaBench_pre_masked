
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_dsi_host {int dummy; } ;
struct mipi_dsi_msg {int dummy; } ;
struct mipi_dsi_host {int dummy; } ;


 int FUNC_0 (struct msm_dsi_host*,struct mipi_dsi_msg const*) ;
 struct msm_dsi_host* FUNC_1 (struct mipi_dsi_host*) ;

int FUNC_2(struct mipi_dsi_host *VAR_0,
    const struct mipi_dsi_msg *VAR_1)
{
 struct msm_dsi_host *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2, VAR_1);
}
