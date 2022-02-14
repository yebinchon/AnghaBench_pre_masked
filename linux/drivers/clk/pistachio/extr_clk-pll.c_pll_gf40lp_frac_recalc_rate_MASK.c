
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pistachio_clk_pll {int dummy; } ;
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
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (struct pistachio_clk_pll*,int ) ;
 struct pistachio_clk_pll* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_4(struct clk_hw *VAR_13,
       unsigned long VAR_14)
{
 struct pistachio_clk_pll *VAR_15 = FUNC_3(VAR_13);
 u64 VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;

 VAR_16 = FUNC_2(VAR_15, VAR_0);
 VAR_17 = (VAR_16 >> VAR_4) & VAR_3;
 VAR_18 = (VAR_16 >> VAR_2) & VAR_1;

 VAR_16 = FUNC_2(VAR_15, VAR_5);
 VAR_20 = (VAR_16 >> VAR_9) &
  VAR_8;
 VAR_21 = (VAR_16 >> VAR_11) &
  VAR_10;
 VAR_19 = (VAR_16 >> VAR_7) & VAR_6;


 VAR_22 = VAR_14;
 if (FUNC_1(VAR_13) == VAR_12)
  VAR_22 *= (VAR_18 << 24) + VAR_19;
 else
  VAR_22 *= (VAR_18 << 24);

 VAR_22 = FUNC_0(VAR_22, (VAR_17 * VAR_20 * VAR_21) << 24);

 return VAR_22;
}
