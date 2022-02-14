
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct msm_dsi {struct mipi_dsi_host* host; } ;
struct mipi_dsi_host {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 struct msm_dsi* FUNC_1 (int) ;
 int FUNC_2 (struct mipi_dsi_host*,int ,int ) ;

bool FUNC_3(int VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct msm_dsi *VAR_4 = FUNC_1(VAR_1);
 struct msm_dsi *VAR_5 = FUNC_1(VAR_0);
 struct mipi_dsi_host *VAR_6 = VAR_4->host;

 if (FUNC_0() && (VAR_1 == VAR_0))
  return 0;

 if (FUNC_0() && VAR_5)
  FUNC_2(VAR_5->host, VAR_2, VAR_3);

 FUNC_2(VAR_6, VAR_2, VAR_3);

 return 1;
}
