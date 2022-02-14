
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
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 unsigned long FUNC_2 (scalar_t__) ;
 struct clk_pllv4* FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_8, unsigned long VAR_9,
         unsigned long VAR_10)
{
 struct clk_pllv4 *VAR_11 = FUNC_3(VAR_8);
 u32 VAR_12, VAR_13, VAR_14, VAR_15 = VAR_2;
 u64 VAR_16;

 VAR_13 = VAR_9 / VAR_10;

 if (!FUNC_0(VAR_13))
  return -VAR_3;

 if (VAR_10 <= VAR_4)
  VAR_15 = VAR_10;

 VAR_16 = (u64)(VAR_9 - VAR_13 * VAR_10);
 VAR_16 *= VAR_15;
 FUNC_1(VAR_16, VAR_10);
 VAR_14 = VAR_16;

 VAR_12 = FUNC_2(VAR_11->base + VAR_5);
 VAR_12 &= ~VAR_0;
 VAR_12 |= VAR_13 << VAR_1;
 FUNC_4(VAR_12, VAR_11->base + VAR_5);

 FUNC_4(VAR_14, VAR_11->base + VAR_7);
 FUNC_4(VAR_15, VAR_11->base + VAR_6);

 return 0;
}
