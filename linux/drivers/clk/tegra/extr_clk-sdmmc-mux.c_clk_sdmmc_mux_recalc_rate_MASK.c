
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct tegra_sdmmc_mux {int reg; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct tegra_sdmmc_mux* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_4(struct clk_hw *VAR_1,
            unsigned long VAR_2)
{
 struct tegra_sdmmc_mux *VAR_3 = FUNC_3(VAR_1);
 u32 VAR_4;
 int VAR_5;
 u64 VAR_6 = VAR_2;

 VAR_4 = FUNC_2(VAR_3->reg);
 VAR_5 = FUNC_1(VAR_4);

 VAR_5 += VAR_0;

 VAR_6 *= VAR_0;
 VAR_6 += VAR_5 - 1;
 FUNC_0(VAR_6, VAR_5);

 return VAR_6;
}
