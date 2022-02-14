
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
typedef unsigned long u32 ;
struct clk_pllv4 {scalar_t__ base; } ;
struct clk_hw {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 unsigned long FUNC_1 (scalar_t__) ;
 struct clk_pllv4* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_5,
        unsigned long VAR_6)
{
 struct clk_pllv4 *VAR_7 = FUNC_2(VAR_5);
 u32 VAR_8, VAR_9, VAR_10;
 u64 VAR_11;

 VAR_8 = FUNC_1(VAR_7->base + VAR_2);
 VAR_8 &= VAR_0;
 VAR_8 >>= VAR_1;

 VAR_9 = FUNC_1(VAR_7->base + VAR_4);
 VAR_10 = FUNC_1(VAR_7->base + VAR_3);
 VAR_11 = VAR_6;
 VAR_11 *= VAR_9;
 FUNC_0(VAR_11, VAR_10);

 return (VAR_6 * VAR_8) + (u32)VAR_11;
}
