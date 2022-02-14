
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_dsi {int phy_enabled; int phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 struct msm_dsi* FUNC_1 (int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(int VAR_2)
{
 struct msm_dsi *VAR_3 = FUNC_1(VAR_2);
 struct msm_dsi *VAR_4 = FUNC_1(VAR_0);
 struct msm_dsi *VAR_5 = FUNC_1(VAR_1);





 VAR_3->phy_enabled = 0;
 if (FUNC_0() && VAR_4 && VAR_5) {
  if (!VAR_4->phy_enabled && !VAR_5->phy_enabled) {
   FUNC_2(VAR_5->phy);
   FUNC_2(VAR_4->phy);
  }
 } else {
  FUNC_2(VAR_3->phy);
 }
}
