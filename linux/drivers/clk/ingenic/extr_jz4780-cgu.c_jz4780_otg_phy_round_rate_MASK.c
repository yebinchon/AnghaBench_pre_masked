
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;



__attribute__((used)) static long FUNC_0(struct clk_hw *VAR_0, unsigned long VAR_1,
          unsigned long *VAR_2)
{
 if (VAR_1 < 15600000)
  return 12000000;

 if (VAR_1 < 21600000)
  return 19200000;

 if (VAR_1 < 36000000)
  return 24000000;

 return 48000000;
}
