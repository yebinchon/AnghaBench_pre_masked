
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_dfll {int mode; } ;
typedef enum dfll_ctrl_mode { ____Placeholder_dfll_ctrl_mode } dfll_ctrl_mode ;


 int VAR_0 ;
 int FUNC_0 (struct tegra_dfll*) ;
 int FUNC_1 (struct tegra_dfll*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct tegra_dfll *VAR_1,
     enum dfll_ctrl_mode VAR_2)
{
 VAR_1->mode = VAR_2;
 FUNC_1(VAR_1, VAR_2 - 1, VAR_0);
 FUNC_0(VAR_1);
}
