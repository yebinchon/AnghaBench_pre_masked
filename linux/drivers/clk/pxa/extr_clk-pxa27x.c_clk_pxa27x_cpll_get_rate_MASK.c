
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_0 (int ) ;

__attribute__((used)) static unsigned long FUNC_1(struct clk_hw *VAR_4,
 unsigned long VAR_5)
{
 unsigned long VAR_6;
 unsigned int VAR_7, VAR_8;
 unsigned int VAR_9, VAR_10, VAR_11, VAR_12;
 unsigned long VAR_13 = FUNC_0(VAR_0);

 asm("mrc\tp14, 0, %0, c6, c0, 0" : "=r" (VAR_6));
 VAR_7 = VAR_6 & (1 << 0);
 VAR_8 = VAR_6 & (1 << 2);

 VAR_9 = VAR_13 & VAR_1;
 VAR_11 = (VAR_13 & VAR_2) >> VAR_3;
 VAR_10 = VAR_9 * VAR_5;
 VAR_12 = (VAR_10 * VAR_11) / 2;

 return VAR_12;
}
