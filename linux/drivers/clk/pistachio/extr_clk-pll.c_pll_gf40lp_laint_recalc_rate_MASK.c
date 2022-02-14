
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
typedef unsigned long u32 ;
struct pistachio_clk_pll {int dummy; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 unsigned long FUNC_1 (struct pistachio_clk_pll*,int ) ;
 struct pistachio_clk_pll* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_9,
        unsigned long VAR_10)
{
 struct pistachio_clk_pll *VAR_11 = FUNC_2(VAR_9);
 u32 VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 u64 VAR_17 = VAR_10;

 VAR_12 = FUNC_1(VAR_11, VAR_0);
 VAR_13 = (VAR_12 >> VAR_4) & VAR_3;
 VAR_14 = (VAR_12 >> VAR_2) & VAR_1;
 VAR_15 = (VAR_12 >> VAR_6) &
  VAR_5;
 VAR_16 = (VAR_12 >> VAR_8) &
  VAR_7;

 VAR_17 *= VAR_14;
 VAR_17 = FUNC_0(VAR_17, VAR_13 * VAR_15 * VAR_16);

 return VAR_17;
}
