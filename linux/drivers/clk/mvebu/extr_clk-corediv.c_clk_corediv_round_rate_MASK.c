
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;



__attribute__((used)) static long FUNC_0(struct clk_hw *VAR_0, unsigned long VAR_1,
          unsigned long *VAR_2)
{

 u32 VAR_3;

 VAR_3 = *VAR_2 / VAR_1;
 if (VAR_3 < 4)
  VAR_3 = 4;
 else if (VAR_3 > 6)
  VAR_3 = 8;

 return *VAR_2 / VAR_3;
}
