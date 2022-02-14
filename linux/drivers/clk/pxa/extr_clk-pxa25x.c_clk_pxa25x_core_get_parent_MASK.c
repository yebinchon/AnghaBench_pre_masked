
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u8 FUNC_0(struct clk_hw *VAR_2)
{
 unsigned long VAR_3;
 unsigned int VAR_4;

 asm("mrc\tp14, 0, %0, c6, c0, 0" : "=r" (VAR_3));
 VAR_4 = VAR_3 & (1 << 0);
 if (VAR_4)
  return VAR_1;
 return VAR_0;
}
