
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef size_t u32 ;
struct tegra_sdmmc_mux {int reg; } ;
struct clk_hw {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (size_t) ;
 size_t* VAR_2 ;
 size_t* VAR_3 ;
 size_t FUNC_1 (int ) ;
 struct tegra_sdmmc_mux* FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (size_t,int ) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_4, u8 VAR_5)
{
 struct tegra_sdmmc_mux *VAR_6 = FUNC_2(VAR_4);
 u32 VAR_7;


 VAR_7 = FUNC_1(VAR_6->reg);
 if (FUNC_0(VAR_7))
  VAR_5 = VAR_3[VAR_5];
 else
  VAR_5 = VAR_2[VAR_5];

 VAR_7 &= ~VAR_0;
 VAR_7 |= VAR_5 << VAR_1;

 FUNC_3(VAR_7, VAR_6->reg);

 return 0;
}
