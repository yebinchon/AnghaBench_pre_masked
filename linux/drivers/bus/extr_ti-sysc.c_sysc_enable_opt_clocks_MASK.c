
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysc {struct clk** clocks; } ;
struct clk {int dummy; } ;


 scalar_t__ FUNC_0 (struct clk*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;

__attribute__((used)) static int FUNC_3(struct sysc *VAR_2)
{
 struct clk *VAR_3;
 int VAR_4, VAR_5;

 if (!VAR_2->clocks)
  return 0;

 for (VAR_4 = VAR_1; VAR_4 < VAR_0; VAR_4++) {
  VAR_3 = VAR_2->clocks[VAR_4];


  if (FUNC_0(VAR_3))
   return 0;

  VAR_5 = FUNC_2(VAR_3);
  if (VAR_5)
   goto err_disable;
 }

 return 0;

err_disable:
 for (VAR_4--; VAR_4 >= 0; VAR_4--) {
  VAR_3 = VAR_2->clocks[VAR_4];
  if (FUNC_0(VAR_3))
   continue;

  FUNC_1(VAR_3);
 }

 return VAR_5;
}
