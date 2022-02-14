
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_dfll {scalar_t__ tune_range; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct tegra_dfll*,int ) ;
 int FUNC_1 (struct tegra_dfll*) ;
 int FUNC_2 (struct tegra_dfll*) ;
 int FUNC_3 (struct tegra_dfll*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct tegra_dfll *VAR_4)
{
 u32 VAR_5;


 if (VAR_4->tune_range != VAR_3)
  FUNC_1(VAR_4);

 VAR_5 = FUNC_0(VAR_4, VAR_0);
 VAR_5 |= VAR_2;
 VAR_5 &= ~VAR_1;
 FUNC_3(VAR_4, VAR_5, VAR_0);
 FUNC_2(VAR_4);
}
