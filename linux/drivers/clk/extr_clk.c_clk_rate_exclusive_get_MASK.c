
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int exclusive_count; int core; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

int FUNC_3(struct clk *VAR_0)
{
 if (!VAR_0)
  return 0;

 FUNC_1();
 FUNC_0(VAR_0->core);
 VAR_0->exclusive_count++;
 FUNC_2();

 return 0;
}
