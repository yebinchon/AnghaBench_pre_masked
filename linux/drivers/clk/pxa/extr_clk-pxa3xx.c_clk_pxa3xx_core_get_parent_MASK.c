
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;

__attribute__((used)) static u8 FUNC_1(struct clk_hw *VAR_3)
{
 unsigned long VAR_4;
 unsigned int VAR_5;

 if (FUNC_0())
  return VAR_0;


 __asm__ __volatile__("mrc\tp14, 0, %0, c6, c0, 0" : "=r"(VAR_4));
 VAR_5 = VAR_4 & 0x1;

 if (VAR_5)
  return VAR_2;
 return VAR_1;
}
