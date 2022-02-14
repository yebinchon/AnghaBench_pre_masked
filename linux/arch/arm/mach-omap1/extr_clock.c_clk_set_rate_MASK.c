
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int VAR_1 ;
 int FUNC_1 (struct clk*,unsigned long) ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct clk *VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4;
 int VAR_5 = -VAR_0;

 if (VAR_2 == ((void*)0) || FUNC_0(VAR_2))
  return VAR_5;

 FUNC_3(&VAR_1, VAR_4);
 VAR_5 = FUNC_1(VAR_2, VAR_3);
 if (VAR_5 == 0)
  FUNC_2(VAR_2);
 FUNC_4(&VAR_1, VAR_4);

 return VAR_5;
}
