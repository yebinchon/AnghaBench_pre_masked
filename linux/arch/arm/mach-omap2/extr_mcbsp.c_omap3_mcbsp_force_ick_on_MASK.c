
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;


 int FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;

__attribute__((used)) static int FUNC_2(struct clk *VAR_0, bool VAR_1)
{
 if (!VAR_0)
  return 0;

 if (VAR_1)
  return FUNC_1(VAR_0);
 else
  return FUNC_0(VAR_0);
}
