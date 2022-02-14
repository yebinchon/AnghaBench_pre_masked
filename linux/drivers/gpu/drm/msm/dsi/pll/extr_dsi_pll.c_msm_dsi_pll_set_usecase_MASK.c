
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_dsi_pll {int (* set_usecase ) (struct msm_dsi_pll*,int) ;} ;
typedef enum msm_dsi_phy_usecase { ____Placeholder_msm_dsi_phy_usecase } msm_dsi_phy_usecase ;


 int FUNC_0 (struct msm_dsi_pll*,int) ;

int FUNC_1(struct msm_dsi_pll *VAR_0,
       enum msm_dsi_phy_usecase VAR_1)
{
 if (VAR_0->set_usecase)
  return VAR_0->set_usecase(VAR_0, VAR_1);

 return 0;
}
