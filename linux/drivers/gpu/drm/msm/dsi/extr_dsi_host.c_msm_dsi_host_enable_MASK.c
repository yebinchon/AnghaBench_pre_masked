
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_dsi_host {int mode_flags; int enabled; } ;
struct mipi_dsi_host {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct msm_dsi_host*,int,int) ;
 struct msm_dsi_host* FUNC_1 (struct mipi_dsi_host*) ;

int FUNC_2(struct mipi_dsi_host *VAR_1)
{
 struct msm_dsi_host *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2,
  !!(VAR_2->mode_flags & VAR_0), 1);
 VAR_2->enabled = 1;
 return 0;
}
