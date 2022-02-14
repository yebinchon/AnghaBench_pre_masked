
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_clk_periph_gate {scalar_t__* enable_refcnt; size_t clk_num; int flags; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tegra_clk_periph_gate*) ;
 int VAR_1 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 () ;
 struct tegra_clk_periph_gate* FUNC_4 (struct clk_hw*) ;
 int FUNC_5 (int ,struct tegra_clk_periph_gate*) ;

__attribute__((used)) static void FUNC_6(struct clk_hw *VAR_2)
{
 struct tegra_clk_periph_gate *VAR_3 = FUNC_4(VAR_2);
 unsigned long VAR_4 = 0;

 FUNC_1(&VAR_1, VAR_4);

 VAR_3->enable_refcnt[VAR_3->clk_num]--;
 if (VAR_3->enable_refcnt[VAR_3->clk_num] > 0) {
  FUNC_2(&VAR_1, VAR_4);
  return;
 }






 if (VAR_3->flags & VAR_0)
  FUNC_3();

 FUNC_5(FUNC_0(VAR_3), VAR_3);

 FUNC_2(&VAR_1, VAR_4);
}
