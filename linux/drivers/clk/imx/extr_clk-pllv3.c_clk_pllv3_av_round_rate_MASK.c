
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
typedef unsigned long u32 ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (unsigned long,unsigned long) ;

__attribute__((used)) static long FUNC_1(struct clk_hw *VAR_0, unsigned long VAR_1,
        unsigned long *VAR_2)
{
 unsigned long VAR_3 = *VAR_2;
 unsigned long VAR_4 = VAR_3 * 27;
 unsigned long VAR_5 = VAR_3 * 54;
 u32 VAR_6;
 u32 VAR_7, VAR_8 = 1000000;
 u32 VAR_9 = 0x3FFFFFFF;
 u64 VAR_10;

 if (VAR_1 > VAR_5)
  VAR_1 = VAR_5;
 else if (VAR_1 < VAR_4)
  VAR_1 = VAR_4;

 if (VAR_3 <= VAR_9)
  VAR_8 = VAR_3;

 VAR_6 = VAR_1 / VAR_3;
 VAR_10 = (u64) (VAR_1 - VAR_6 * VAR_3);
 VAR_10 *= VAR_8;
 FUNC_0(VAR_10, VAR_3);
 VAR_7 = VAR_10;

 VAR_10 = (u64)VAR_3;
 VAR_10 *= VAR_7;
 FUNC_0(VAR_10, VAR_8);

 return VAR_3 * VAR_6 + (unsigned long)VAR_10;
}
