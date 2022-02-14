
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;



__attribute__((used)) static unsigned long FUNC_0(struct clk_hw *VAR_0,
         unsigned long VAR_1)
{
 switch (VAR_1) {
 case 26000000:
  return 13000000;
 case 180000000:
  return 25000000;
 case 360000000:
  return 50000000;
 case 720000000:
  return 100000000;
 case 1440000000:
  return 180000000;
 default:
  return VAR_1;
 }
}
