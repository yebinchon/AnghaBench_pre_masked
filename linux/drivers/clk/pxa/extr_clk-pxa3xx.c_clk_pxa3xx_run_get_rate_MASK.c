
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;

__attribute__((used)) static unsigned long FUNC_0(struct clk_hw *VAR_2,
          unsigned long VAR_3)
{
 unsigned long VAR_4 = VAR_1;
 unsigned int VAR_5 = (VAR_4 & VAR_0) >> 8;
 unsigned int VAR_6, VAR_7;


 __asm__ __volatile__("mrc\tp14, 0, %0, c6, c0, 0" : "=r"(VAR_7));
 VAR_6 = VAR_7 & 0x1;

 return VAR_6 ? (VAR_3 / VAR_5) * 2 : VAR_3;
}
