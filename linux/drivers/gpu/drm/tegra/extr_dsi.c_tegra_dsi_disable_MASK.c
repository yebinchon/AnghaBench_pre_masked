
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_dsi {struct tegra_dsi* slave; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tegra_dsi*) ;
 int FUNC_1 (struct tegra_dsi*,int ) ;
 int FUNC_2 (struct tegra_dsi*,int ,int ) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct tegra_dsi *VAR_2)
{
 u32 VAR_3;

 if (VAR_2->slave) {
  FUNC_0(VAR_2->slave);
  FUNC_0(VAR_2);
 }

 VAR_3 = FUNC_1(VAR_2, VAR_0);
 VAR_3 &= ~VAR_1;
 FUNC_2(VAR_2, VAR_3, VAR_0);

 if (VAR_2->slave)
  FUNC_4(VAR_2->slave);

 FUNC_3(5000, 10000);
}
