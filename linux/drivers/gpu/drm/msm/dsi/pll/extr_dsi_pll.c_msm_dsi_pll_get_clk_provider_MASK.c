
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_dsi_pll {int (* get_provider ) (struct msm_dsi_pll*,struct clk**,struct clk**) ;} ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct msm_dsi_pll*,struct clk**,struct clk**) ;

int FUNC_1(struct msm_dsi_pll *VAR_1,
 struct clk **VAR_2, struct clk **VAR_3)
{
 if (VAR_1->get_provider)
  return VAR_1->get_provider(VAR_1,
     VAR_2,
     VAR_3);

 return -VAR_0;
}
