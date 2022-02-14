
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;



__attribute__((used)) static long
FUNC_0(struct clk_hw *VAR_0, unsigned long VAR_1,
      unsigned long *VAR_2)
{
 if (VAR_1 <= 18900000)
  return 18900000;
 if (VAR_1 <= 20800000)
  return 20800000;
 if (VAR_1 <= 23100000)
  return 23100000;
 if (VAR_1 <= 26000000)
  return 26000000;
 if (VAR_1 <= 29700000)
  return 29700000;
 if (VAR_1 <= 34700000)
  return 34700000;
 if (VAR_1 <= 41600000)
  return 41600000;

 return 52000000;
}
