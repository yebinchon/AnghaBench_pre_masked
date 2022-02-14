
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct samsung_clk_pll {scalar_t__ type; scalar_t__ con_reg; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (scalar_t__) ;
 struct samsung_clk_pll* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_12,
    unsigned long VAR_13)
{
 struct samsung_clk_pll *VAR_14 = FUNC_2(VAR_12);
 u32 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
 u64 VAR_22 = VAR_13;

 VAR_19 = FUNC_1(VAR_14->con_reg);
 VAR_20 = FUNC_1(VAR_14->con_reg + 4);
 VAR_15 = (VAR_19 >> VAR_4) & ((VAR_14->type == VAR_9) ?
    VAR_0 : VAR_3);
 VAR_16 = (VAR_19 >> VAR_6) & VAR_5;
 VAR_17 = (VAR_19 >> VAR_8) & VAR_7;
 VAR_18 = VAR_14->type == VAR_11 ? VAR_20 & VAR_1 :
     VAR_20 & VAR_2;

 VAR_21 = ((VAR_14->type == VAR_10) || (VAR_14->type == VAR_9)) ? 16 : 10;

 VAR_22 *= (VAR_15 << VAR_21) + VAR_18;
 FUNC_0(VAR_22, (VAR_16 << VAR_17));
 VAR_22 >>= VAR_21;

 return (unsigned long)VAR_22;
}
