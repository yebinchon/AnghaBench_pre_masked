
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static long FUNC_0(struct clk_hw *VAR_1, unsigned long VAR_2,
          unsigned long *VAR_3)
{
 unsigned VAR_4;

 VAR_4 = (*VAR_3 + VAR_2 / 2) / VAR_2;
 if (VAR_4 > VAR_0 + 1)
  VAR_4 = VAR_0 + 1;

 return *VAR_3 / VAR_4;
}
