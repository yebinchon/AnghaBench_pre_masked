
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {scalar_t__ exclusive_count; int core; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

void FUNC_4(struct clk *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_2();





 if (FUNC_0(VAR_0->exclusive_count <= 0))
  goto out;

 FUNC_1(VAR_0->core);
 VAR_0->exclusive_count--;
out:
 FUNC_3();
}
