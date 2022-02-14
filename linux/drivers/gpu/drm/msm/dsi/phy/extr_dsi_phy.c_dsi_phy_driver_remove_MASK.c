
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct msm_dsi_phy {int * pll; } ;


 int FUNC_0 (int *) ;
 struct msm_dsi_phy* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct platform_device*,int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct msm_dsi_phy *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1 && VAR_1->pll) {
  FUNC_0(VAR_1->pll);
  VAR_1->pll = ((void*)0);
 }

 FUNC_2(VAR_0, ((void*)0));

 return 0;
}
