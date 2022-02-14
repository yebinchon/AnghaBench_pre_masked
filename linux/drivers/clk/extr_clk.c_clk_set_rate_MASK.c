
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int core; scalar_t__ exclusive_count; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

int FUNC_5(struct clk *VAR_0, unsigned long VAR_1)
{
 int VAR_2;

 if (!VAR_0)
  return 0;


 FUNC_3();

 if (VAR_0->exclusive_count)
  FUNC_1(VAR_0->core);

 VAR_2 = FUNC_2(VAR_0->core, VAR_1);

 if (VAR_0->exclusive_count)
  FUNC_0(VAR_0->core);

 FUNC_4();

 return VAR_2;
}
