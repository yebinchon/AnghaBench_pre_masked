
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_core {int dummy; } ;


 int FUNC_0 (struct clk_core*) ;
 int FUNC_1 (struct clk_core*) ;
 int FUNC_2 (struct clk_core*) ;

__attribute__((used)) static int FUNC_3(struct clk_core *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  FUNC_2(VAR_0);

 return VAR_1;
}
