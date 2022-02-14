
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;


 int FUNC_0 (long*) ;
 scalar_t__ FUNC_1 (long) ;
 long* VAR_0 ;

__attribute__((used)) static long FUNC_2(struct clk_hw *VAR_1, unsigned long VAR_2,
      unsigned long *VAR_3)
{
 int VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++)
  if (FUNC_1(VAR_0[VAR_5] - VAR_2) <
      FUNC_1(VAR_0[VAR_4] - VAR_2))
   VAR_4 = VAR_5;

 return VAR_0[VAR_4];
}
