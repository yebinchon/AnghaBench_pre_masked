
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int exclusive_count; int core; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

int FUNC_4(struct clk *VAR_0, unsigned long VAR_1)
{
 int VAR_2;

 if (!VAR_0)
  return 0;


 FUNC_2();







 VAR_2 = FUNC_1(VAR_0->core, VAR_1);
 if (!VAR_2) {
  FUNC_0(VAR_0->core);
  VAR_0->exclusive_count++;
 }

 FUNC_3();

 return VAR_2;
}
