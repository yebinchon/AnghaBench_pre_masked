
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {unsigned long* rates; long rate; } ;


 int FUNC_0 (struct clk*) ;
 scalar_t__ FUNC_1 (int) ;

long FUNC_2(struct clk *VAR_0, unsigned long VAR_1)
{
 if (FUNC_1(!FUNC_0(VAR_0)))
  return 0;
 if (VAR_0->rates && *VAR_0->rates) {
  unsigned long *VAR_2 = VAR_0->rates;

  while (*VAR_2 && (*VAR_2 != VAR_1))
   VAR_2++;
  if (!*VAR_2) {
   return VAR_0->rate;
  }
 }
 return VAR_1;
}
