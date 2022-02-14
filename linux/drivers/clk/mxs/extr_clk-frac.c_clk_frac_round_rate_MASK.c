
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct clk_hw {int dummy; } ;
struct clk_frac {int width; } ;


 long VAR_0 ;
 int FUNC_0 (int,unsigned long) ;
 struct clk_frac* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_2(struct clk_hw *VAR_1, unsigned long VAR_2,
    unsigned long *VAR_3)
{
 struct clk_frac *VAR_4 = FUNC_1(VAR_1);
 unsigned long VAR_5 = *VAR_3;
 u32 VAR_6;
 u64 VAR_7, VAR_8, VAR_9;

 if (VAR_2 > VAR_5)
  return -VAR_0;

 VAR_7 = VAR_2;
 VAR_7 <<= VAR_4->width;
 FUNC_0(VAR_7, VAR_5);
 VAR_6 = VAR_7;

 if (!VAR_6)
  return -VAR_0;

 VAR_8 = (u64)VAR_5 * VAR_6;
 VAR_9 = VAR_8 >> VAR_4->width;
 if ((VAR_9 << VAR_4->width) < VAR_8)
  VAR_9 += 1;
 return VAR_9;
}
