
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct samsung_clk_pll {int con_reg; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 struct samsung_clk_pll* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_6,
    unsigned long VAR_7)
{
 struct samsung_clk_pll *VAR_8 = FUNC_2(VAR_6);
 u32 VAR_9, VAR_10, VAR_11, VAR_12;
 u64 VAR_13 = VAR_7;

 VAR_12 = FUNC_1(VAR_8->con_reg);
 VAR_9 = (VAR_12 >> VAR_1) & VAR_0;
 VAR_10 = (VAR_12 >> VAR_3) & VAR_2;
 VAR_11 = (VAR_12 >> VAR_5) & VAR_4;

 VAR_13 *= VAR_9;
 FUNC_0(VAR_13, (VAR_10 << VAR_11));

 return (unsigned long)VAR_13;
}
