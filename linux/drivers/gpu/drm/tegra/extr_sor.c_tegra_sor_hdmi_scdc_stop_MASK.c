
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_sor {int scdc; scalar_t__ scdc_enabled; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct tegra_sor*) ;

__attribute__((used)) static void FUNC_2(struct tegra_sor *VAR_0)
{
 if (VAR_0->scdc_enabled) {
  FUNC_0(&VAR_0->scdc);
  FUNC_1(VAR_0);
 }
}
