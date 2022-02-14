
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
typedef unsigned long u32 ;
struct clk_pll14xx {scalar_t__ base; } ;
struct clk_hw {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 unsigned long FUNC_1 (scalar_t__) ;
 struct clk_pll14xx* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_6,
        unsigned long VAR_7)
{
 struct clk_pll14xx *VAR_8 = FUNC_2(VAR_6);
 u32 VAR_9, VAR_10, VAR_11, VAR_12;
 u64 VAR_13 = VAR_7;

 VAR_12 = FUNC_1(VAR_8->base + 4);
 VAR_9 = (VAR_12 & VAR_0) >> VAR_1;
 VAR_10 = (VAR_12 & VAR_2) >> VAR_3;
 VAR_11 = (VAR_12 & VAR_4) >> VAR_5;

 VAR_13 *= VAR_9;
 FUNC_0(VAR_13, VAR_10 << VAR_11);

 return VAR_13;
}
