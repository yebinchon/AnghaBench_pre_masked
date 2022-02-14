
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tegra_clk_super_mux {int flags; int pllx_index; int div2_index; int reg; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct tegra_clk_super_mux*) ;
 int FUNC_4 (struct tegra_clk_super_mux*,int ) ;
 struct tegra_clk_super_mux* FUNC_5 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_6(struct clk_hw *VAR_5)
{
 struct tegra_clk_super_mux *VAR_6 = FUNC_5(VAR_5);
 u32 VAR_7, VAR_8;
 u8 VAR_9, VAR_10;

 VAR_7 = FUNC_1(VAR_6->reg);

 VAR_8 = VAR_7 & VAR_2;

 FUNC_0((VAR_8 != FUNC_2(VAR_3)) &&
        (VAR_8 != FUNC_2(VAR_1)));
 VAR_10 = (VAR_8 == FUNC_2(VAR_1)) ?
  FUNC_4(VAR_6, VAR_1) :
  FUNC_4(VAR_6, VAR_3);

 VAR_9 = (VAR_7 >> VAR_10) & FUNC_3(VAR_6);





 if ((VAR_6->flags & VAR_4) && !(VAR_7 & VAR_0) &&
     (VAR_9 == VAR_6->pllx_index))
  VAR_9 = VAR_6->div2_index;

 return VAR_9;
}
