
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_dsi_pll {int pll_on; int (* disable_seq ) (struct msm_dsi_pll*) ;} ;


 int FUNC_0 (struct msm_dsi_pll*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct msm_dsi_pll *VAR_0)
{
 if (FUNC_1(!VAR_0->pll_on))
  return;

 VAR_0->disable_seq(VAR_0);

 VAR_0->pll_on = 0;
}
