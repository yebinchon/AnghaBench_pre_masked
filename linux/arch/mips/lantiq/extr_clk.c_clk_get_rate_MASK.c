
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {scalar_t__ rate; unsigned long (* get_rate ) () ;} ;


 int FUNC_0 (struct clk*) ;
 unsigned long FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;

unsigned long FUNC_3(struct clk *VAR_0)
{
 if (FUNC_2(!FUNC_0(VAR_0)))
  return 0;

 if (VAR_0->rate != 0)
  return VAR_0->rate;

 if (VAR_0->get_rate != ((void*)0))
  return VAR_0->get_rate();

 return 0;
}
