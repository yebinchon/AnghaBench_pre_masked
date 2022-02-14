
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long* VAR_1 ;
 scalar_t__ FUNC_0 () ;

__attribute__((used)) static unsigned long FUNC_1(struct clk_hw *VAR_2,
         unsigned long VAR_3)
{
 unsigned long VAR_4 = VAR_0;
 unsigned int VAR_5 = (VAR_4 >> 14) & 0x3;

 if (FUNC_0())
  return VAR_3;
 return VAR_3 / 48 * VAR_1[VAR_5];
}
