
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct samsung_clk_pll {scalar_t__ con_reg; } ;
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
 int FUNC_1 (scalar_t__) ;
 struct samsung_clk_pll* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_8,
      unsigned long VAR_9)
{
 struct samsung_clk_pll *VAR_10 = FUNC_2(VAR_8);
 u32 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 u64 VAR_17 = VAR_9;

 VAR_15 = FUNC_1(VAR_10->con_reg);
 VAR_16 = FUNC_1(VAR_10->con_reg + 0x4);
 VAR_11 = (VAR_15 >> VAR_3) & VAR_2;
 VAR_12 = (VAR_15 >> VAR_5) & VAR_4;
 VAR_13 = (VAR_15 >> VAR_7) & VAR_6;
 VAR_14 = (VAR_16 >> VAR_1) & VAR_0;

 VAR_17 *= (VAR_11 << 16) + VAR_14;
 FUNC_0(VAR_17, (VAR_12 << VAR_13));
 VAR_17 >>= 16;

 return (unsigned long)VAR_17;
}
