
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
 int FUNC_0 (struct tegra_sor*,int ) ;
 struct tegra_clk_sor_pad* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_2(struct clk_hw *VAR_3)
{
 struct tegra_clk_sor_pad *VAR_4 = FUNC_1(VAR_3);
 struct tegra_sor *VAR_5 = VAR_4->sor;
 u8 VAR_6 = VAR_2;
 u32 VAR_7;

 VAR_7 = FUNC_0(VAR_5, VAR_0);

 switch (VAR_7 & VAR_1) {
 case 128:
 case 130:
  VAR_6 = 0;
  break;

 case 129:
 case 131:
  VAR_6 = 1;
  break;
 }

 return VAR_6;
}
