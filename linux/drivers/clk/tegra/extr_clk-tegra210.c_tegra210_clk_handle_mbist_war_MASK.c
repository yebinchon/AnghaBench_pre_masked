
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra210_domain_mbist_war {int clks; scalar_t__ num_clks; int (* handle_lvl2_ovr ) (struct tegra210_domain_mbist_war*) ;} ;


 unsigned int FUNC_0 (struct tegra210_domain_mbist_war*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct tegra210_domain_mbist_war*) ;
 struct tegra210_domain_mbist_war* VAR_3 ;

int FUNC_7(unsigned int VAR_4)
{
 int VAR_5;
 struct tegra210_domain_mbist_war *VAR_6;

 if (VAR_4 >= FUNC_0(VAR_3)) {
  FUNC_1(1, "unknown domain id in MBIST WAR handler\n");
  return -VAR_0;
 }

 VAR_6 = &VAR_3[VAR_4];
 if (!VAR_6->handle_lvl2_ovr)
  return 0;

 if (VAR_6->num_clks && !VAR_6->clks)
  return -VAR_1;

 VAR_5 = FUNC_3(VAR_6->num_clks, VAR_6->clks);
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_4(&VAR_2);

 VAR_6->handle_lvl2_ovr(VAR_6);

 FUNC_5(&VAR_2);

 FUNC_2(VAR_6->num_clks, VAR_6->clks);

 return 0;
}
