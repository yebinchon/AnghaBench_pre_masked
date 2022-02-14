
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {long (* round_rate ) (struct clk*,unsigned long) ;long rate; } ;


 long VAR_0 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 long FUNC_1 (struct clk*,unsigned long) ;

long FUNC_2(struct clk *VAR_1, unsigned long VAR_2)
{
 if (VAR_1 == ((void*)0) || FUNC_0(VAR_1))
  return -VAR_0;

 if (VAR_1->round_rate)
  return VAR_1->round_rate(VAR_1, VAR_2);

 return VAR_1->rate;
}
