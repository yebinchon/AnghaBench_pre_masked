
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_clk_pll_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,struct tegra_clk_pll_params*,int,int,int) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_1(struct tegra_clk_pll_params *VAR_8,
    bool VAR_9)
{
 u32 VAR_10, VAR_11;


 VAR_10 = VAR_0 & (~VAR_1);
 VAR_11 = VAR_2 | (VAR_9 ? VAR_1 : 0);
 FUNC_0(VAR_7, VAR_8, 0, VAR_10,
   ~VAR_11 & VAR_3);

 VAR_10 = VAR_4;
 VAR_11 = VAR_5;
 FUNC_0(VAR_7, VAR_8, 1, VAR_10,
   ~VAR_11 & VAR_6);
}
