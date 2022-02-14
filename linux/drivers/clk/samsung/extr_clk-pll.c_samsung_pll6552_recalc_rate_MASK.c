
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct samsung_clk_pll {scalar_t__ type; int con_reg; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int) ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ) ;
 struct samsung_clk_pll* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_9,
      unsigned long VAR_10)
{
 struct samsung_clk_pll *VAR_11 = FUNC_2(VAR_9);
 u32 VAR_12, VAR_13, VAR_14, VAR_15;
 u64 VAR_16 = VAR_10;

 VAR_15 = FUNC_1(VAR_11->con_reg);
 if (VAR_11->type == VAR_8) {
  VAR_12 = (VAR_15 >> VAR_2) & VAR_0;
  VAR_13 = (VAR_15 >> VAR_5) & VAR_3;
 } else {
  VAR_12 = (VAR_15 >> VAR_1) & VAR_0;
  VAR_13 = (VAR_15 >> VAR_4) & VAR_3;
 }
 VAR_14 = (VAR_15 >> VAR_7) & VAR_6;

 VAR_16 *= VAR_12;
 FUNC_0(VAR_16, (VAR_13 << VAR_14));

 return (unsigned long)VAR_16;
}
