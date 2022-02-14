
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysc {struct clk** clocks; } ;
struct clk {int dummy; } ;


 scalar_t__ FUNC_0 (struct clk*) ;
 int VAR_0 ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;

__attribute__((used)) static int FUNC_3(struct sysc *VAR_1)
{
 struct clk *VAR_2;
 int VAR_3, VAR_4;

 if (!VAR_1->clocks)
  return 0;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2 = VAR_1->clocks[VAR_3];


  if (FUNC_0(VAR_2))
   continue;

  VAR_4 = FUNC_2(VAR_2);
  if (VAR_4)
   goto err_disable;
 }

 return 0;

err_disable:
 for (VAR_3--; VAR_3 >= 0; VAR_3--) {
  VAR_2 = VAR_1->clocks[VAR_3];


  if (FUNC_0(VAR_2))
   continue;

  FUNC_1(VAR_2);
 }

 return VAR_4;
}
