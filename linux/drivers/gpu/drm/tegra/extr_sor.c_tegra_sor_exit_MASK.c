
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_sor {int clk; int clk_dp; int clk_safe; int dev; scalar_t__ aux; int output; } ;
struct host1x_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (scalar_t__) ;
 struct tegra_sor* FUNC_3 (struct host1x_client*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct tegra_sor*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct host1x_client *VAR_2)
{
 struct tegra_sor *VAR_3 = FUNC_3(VAR_2);
 int VAR_4;

 FUNC_5(VAR_3, 0, VAR_1);
 FUNC_5(VAR_3, 0, VAR_0);

 FUNC_4(&VAR_3->output);

 if (VAR_3->aux) {
  VAR_4 = FUNC_2(VAR_3->aux);
  if (VAR_4 < 0) {
   FUNC_1(VAR_3->dev, "failed to detach DP: %d\n", VAR_4);
   return VAR_4;
  }
 }

 FUNC_0(VAR_3->clk_safe);
 FUNC_0(VAR_3->clk_dp);
 FUNC_0(VAR_3->clk);

 return 0;
}
