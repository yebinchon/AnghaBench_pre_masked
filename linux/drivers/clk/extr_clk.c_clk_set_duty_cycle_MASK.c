
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_duty {unsigned int num; unsigned int den; } ;
struct clk {int core; scalar_t__ exclusive_count; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct clk_duty*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

int FUNC_5(struct clk *VAR_1, unsigned int VAR_2, unsigned int VAR_3)
{
 int VAR_4;
 struct clk_duty VAR_5;

 if (!VAR_1)
  return 0;


 if (VAR_3 == 0 || VAR_2 > VAR_3)
  return -VAR_0;

 VAR_5.num = VAR_2;
 VAR_5.den = VAR_3;

 FUNC_3();

 if (VAR_1->exclusive_count)
  FUNC_1(VAR_1->core);

 VAR_4 = FUNC_2(VAR_1->core, &VAR_5);

 if (VAR_1->exclusive_count)
  FUNC_0(VAR_1->core);

 FUNC_4();

 return VAR_4;
}
