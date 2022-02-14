
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
typedef unsigned long u32 ;
struct clk_hw {int dummy; } ;
struct clk_frac_pll {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (struct clk_frac_pll*) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 unsigned long FUNC_2 (scalar_t__) ;
 struct clk_frac_pll* FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_6, unsigned long VAR_7,
       unsigned long VAR_8)
{
 struct clk_frac_pll *VAR_9 = FUNC_3(VAR_6);
 u32 VAR_10, VAR_11, VAR_12;
 u64 VAR_13;
 int VAR_14;

 VAR_8 *= 8;
 VAR_7 *= 2;
 VAR_11 = VAR_7 / VAR_8;
 VAR_13 = VAR_8 * VAR_11;
 VAR_13 = VAR_7 - VAR_13;
 VAR_13 *= VAR_2;
 FUNC_1(VAR_13, VAR_8);
 VAR_12 = VAR_13;

 VAR_10 = FUNC_2(VAR_9->base + VAR_1);
 VAR_10 &= ~(VAR_3 | VAR_4);
 VAR_10 |= (VAR_12 << 7) | (VAR_11 - 1);
 FUNC_4(VAR_10, VAR_9->base + VAR_1);

 VAR_10 = FUNC_2(VAR_9->base + VAR_0);
 VAR_10 &= ~0x1f;
 FUNC_4(VAR_10, VAR_9->base + VAR_0);


 VAR_10 = FUNC_2(VAR_9->base + VAR_0);
 VAR_10 |= VAR_5;
 FUNC_4(VAR_10, VAR_9->base + VAR_0);

 VAR_14 = FUNC_0(VAR_9);


 VAR_10 = FUNC_2(VAR_9->base + VAR_0);
 VAR_10 &= ~VAR_5;
 FUNC_4(VAR_10, VAR_9->base + VAR_0);

 return VAR_14;
}
