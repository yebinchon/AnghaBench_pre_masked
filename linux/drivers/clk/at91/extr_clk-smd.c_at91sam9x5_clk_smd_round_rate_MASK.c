
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static long FUNC_0(struct clk_hw *VAR_1, unsigned long VAR_2,
       unsigned long *VAR_3)
{
 unsigned long VAR_4;
 unsigned long VAR_5;
 unsigned long VAR_6;

 if (VAR_2 >= *VAR_3)
  return *VAR_3;

 VAR_4 = *VAR_3 / VAR_2;
 if (VAR_4 > VAR_0)
  return *VAR_3 / (VAR_0 + 1);

 VAR_5 = *VAR_3 / VAR_4;
 VAR_6 = *VAR_3 / (VAR_4 + 1);
 if (VAR_5 - VAR_2 > VAR_2 - VAR_6)
  VAR_5 = VAR_6;

 return VAR_5;
}
