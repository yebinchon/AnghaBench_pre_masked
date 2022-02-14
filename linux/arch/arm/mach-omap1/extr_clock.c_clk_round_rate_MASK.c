
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;


 scalar_t__ FUNC_0 (struct clk*) ;
 int VAR_0 ;
 long FUNC_1 (struct clk*,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

long FUNC_4(struct clk *VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3;
 long VAR_4;

 if (VAR_1 == ((void*)0) || FUNC_0(VAR_1))
  return 0;

 FUNC_2(&VAR_0, VAR_3);
 VAR_4 = FUNC_1(VAR_1, VAR_2);
 FUNC_3(&VAR_0, VAR_3);

 return VAR_4;
}
