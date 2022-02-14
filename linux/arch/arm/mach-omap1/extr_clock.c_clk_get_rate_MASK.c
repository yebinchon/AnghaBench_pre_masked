
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {unsigned long rate; } ;


 scalar_t__ FUNC_0 (struct clk*) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

unsigned long FUNC_3(struct clk *VAR_1)
{
 unsigned long VAR_2;
 unsigned long VAR_3;

 if (VAR_1 == ((void*)0) || FUNC_0(VAR_1))
  return 0;

 FUNC_1(&VAR_0, VAR_2);
 VAR_3 = VAR_1->rate;
 FUNC_2(&VAR_0, VAR_2);

 return VAR_3;
}
