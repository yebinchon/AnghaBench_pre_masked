
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct samsung_clk_pll {scalar_t__ con_reg; } ;
struct clk_hw {int dummy; } ;
typedef int s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (scalar_t__) ;
 struct samsung_clk_pll* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_7,
    unsigned long VAR_8)
{
 struct samsung_clk_pll *VAR_9 = FUNC_2(VAR_7);
 u32 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 s16 VAR_15;
 u64 VAR_16 = VAR_8;

 VAR_13 = FUNC_1(VAR_9->con_reg);
 VAR_14 = FUNC_1(VAR_9->con_reg + 8);
 VAR_10 = (VAR_13 >> VAR_2) & VAR_1;
 VAR_11 = (VAR_13 >> VAR_4) & VAR_3;
 VAR_12 = (VAR_13 >> VAR_6) & VAR_5;
 VAR_15 = (s16)(VAR_14 & VAR_0);

 VAR_16 *= (VAR_10 << 16) + VAR_15;
 FUNC_0(VAR_16, (VAR_11 << VAR_12));
 VAR_16 >>= 16;

 return (unsigned long)VAR_16;
}
