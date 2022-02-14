
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_mdss {int dummy; } ;
struct mdp5_mdss {scalar_t__ ahb_clk; scalar_t__ axi_clk; scalar_t__ vsync_clk; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 struct mdp5_mdss* FUNC_2 (struct msm_mdss*) ;

__attribute__((used)) static int FUNC_3(struct msm_mdss *VAR_0)
{
 struct mdp5_mdss *VAR_1 = FUNC_2(VAR_0);
 FUNC_0("");

 if (VAR_1->vsync_clk)
  FUNC_1(VAR_1->vsync_clk);
 if (VAR_1->axi_clk)
  FUNC_1(VAR_1->axi_clk);
 FUNC_1(VAR_1->ahb_clk);

 return 0;
}
