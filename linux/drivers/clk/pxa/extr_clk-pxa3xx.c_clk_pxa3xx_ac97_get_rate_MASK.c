
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static unsigned long FUNC_0(struct clk_hw *VAR_1,
          unsigned long VAR_2)
{
 unsigned long VAR_3, VAR_4;

 VAR_3 = VAR_0;




 VAR_4 = VAR_2 / 2;
 VAR_4 /= ((VAR_3 >> 12) & 0x7fff);
 VAR_4 *= (VAR_3 & 0xfff);

 return VAR_4;
}
