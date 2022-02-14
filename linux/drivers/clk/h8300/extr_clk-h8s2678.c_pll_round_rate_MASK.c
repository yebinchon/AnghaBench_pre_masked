
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 long FUNC_0 (unsigned long) ;

__attribute__((used)) static long FUNC_1(struct clk_hw *VAR_2, unsigned long VAR_3,
    unsigned long *VAR_4)
{
 int VAR_5, VAR_6 = -1;
 long VAR_7[3];

 if (VAR_3 > VAR_0)
  VAR_3 = VAR_0;
 if (VAR_3 < VAR_1)
  VAR_3 = VAR_1;

 for (VAR_5 = 0; VAR_5 < 3; VAR_5++)
  VAR_7[VAR_5] = FUNC_0(VAR_3 - (*VAR_4 * (1 << VAR_5)));
 for (VAR_5 = 0; VAR_5 < 3; VAR_5++)
  if (VAR_6 < 0)
   VAR_6 = VAR_5;
  else
   VAR_6 = (VAR_7[VAR_5] < VAR_7[VAR_6])?VAR_5:VAR_6;

 return *VAR_4 * (1 << VAR_6);
}
