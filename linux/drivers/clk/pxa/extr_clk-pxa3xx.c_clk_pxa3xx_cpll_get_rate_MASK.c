
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (char*,unsigned long,unsigned int,unsigned int) ;

__attribute__((used)) static unsigned long FUNC_1(struct clk_hw *VAR_3,
 unsigned long VAR_4)
{
 unsigned long VAR_5 = VAR_2;
 unsigned int VAR_6 = (VAR_5 & VAR_1) >> 8;
 unsigned int VAR_7 = VAR_5 & VAR_0;
 unsigned int VAR_8, VAR_9;


 __asm__ __volatile__("mrc\tp14, 0, %0, c6, c0, 0" : "=r"(VAR_9));
 VAR_8 = VAR_9 & 0x1;

 FUNC_0("RJK: parent_rate=%lu, xl=%u, xn=%u\n", VAR_4, VAR_7, VAR_6);
 return VAR_8 ? VAR_4 * VAR_7 * VAR_6 : VAR_4 * VAR_7;
}
