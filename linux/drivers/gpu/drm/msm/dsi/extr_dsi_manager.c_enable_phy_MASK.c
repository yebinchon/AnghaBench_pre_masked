
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_dsi_phy_shared_timings {int dummy; } ;
struct msm_dsi_phy_clk_request {int dummy; } ;
struct msm_dsi {int phy; int host; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,struct msm_dsi_phy_clk_request*,int) ;
 int FUNC_2 (int ,int,struct msm_dsi_phy_clk_request*) ;
 int FUNC_3 (int ,struct msm_dsi_phy_shared_timings*) ;

__attribute__((used)) static int FUNC_4(struct msm_dsi *VAR_0, int VAR_1,
        struct msm_dsi_phy_shared_timings *VAR_2)
{
 struct msm_dsi_phy_clk_request VAR_3;
 int VAR_4;
 bool VAR_5 = FUNC_0();

 FUNC_1(VAR_0->host, &VAR_3, VAR_5);

 VAR_4 = FUNC_2(VAR_0->phy, VAR_1, &VAR_3);
 FUNC_3(VAR_0->phy, VAR_2);

 return VAR_4;
}
