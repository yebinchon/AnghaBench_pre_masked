
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;


 int VAR_0 ;
 unsigned int* VAR_1 ;
 unsigned int* VAR_2 ;
 unsigned int* VAR_3 ;
 unsigned long FUNC_0 (int ) ;

__attribute__((used)) static unsigned long FUNC_1(struct clk_hw *VAR_4,
 unsigned long VAR_5)
{
 unsigned long VAR_6, VAR_7 = FUNC_0(VAR_0);
 unsigned int VAR_8, VAR_9, VAR_10, VAR_11;

 asm("mrc\tp14, 0, %0, c6, c0, 0" : "=r" (VAR_6));
 VAR_11 = VAR_6 & (1 << 0);
 VAR_8 = VAR_1[(VAR_7 >> 0) & 0x1f];
 VAR_9 = VAR_2[(VAR_7 >> 5) & 0x03];
 VAR_10 = VAR_3[(VAR_7 >> 7) & 0x07];

 return VAR_9 * VAR_8 * VAR_10 * VAR_5 / 2;
}
