
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {unsigned long rate; } ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (struct clk*) ;

unsigned long FUNC_1(struct clk *VAR_1)
{
 if (VAR_1 == ((void*)0) || FUNC_0(VAR_1))
  return -VAR_0;

 return VAR_1->rate;
}
