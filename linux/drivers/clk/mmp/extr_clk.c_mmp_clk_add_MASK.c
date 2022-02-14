
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmp_clk_unit {unsigned int nr_clks; struct clk** clk_table; } ;
struct clk {int dummy; } ;


 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (char*,unsigned int,...) ;

void FUNC_2(struct mmp_clk_unit *VAR_0, unsigned int VAR_1,
   struct clk *VAR_2)
{
 if (FUNC_0(VAR_2)) {
  FUNC_1("CLK %d has invalid pointer %p\n", VAR_1, VAR_2);
  return;
 }
 if (VAR_1 >= VAR_0->nr_clks) {
  FUNC_1("CLK %d is invalid\n", VAR_1);
  return;
 }

 VAR_0->clk_table[VAR_1] = VAR_2;
}
