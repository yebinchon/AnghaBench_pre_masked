
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tegra_sor {int dummy; } ;
struct tegra_clk_sor_pad {struct tegra_sor* sor; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tegra_sor*,int ) ;
 int FUNC_1 (struct tegra_sor*,int ,int ) ;
 struct tegra_clk_sor_pad* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_4, u8 VAR_5)
{
 struct tegra_clk_sor_pad *VAR_6 = FUNC_2(VAR_4);
 struct tegra_sor *VAR_7 = VAR_6->sor;
 u32 VAR_8;

 VAR_8 = FUNC_0(VAR_7, VAR_0);
 VAR_8 &= ~VAR_1;

 switch (VAR_5) {
 case 0:
  VAR_8 |= VAR_3;
  break;

 case 1:
  VAR_8 |= VAR_2;
  break;
 }

 FUNC_1(VAR_7, VAR_8, VAR_0);

 return 0;
}
