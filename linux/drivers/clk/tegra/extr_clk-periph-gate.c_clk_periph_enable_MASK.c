
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_clk_periph_gate {int* enable_refcnt; size_t clk_num; int flags; scalar_t__ clk_base; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct tegra_clk_periph_gate*) ;
 int VAR_4 ;
 int FUNC_2 (struct tegra_clk_periph_gate*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct tegra_clk_periph_gate* FUNC_5 (struct clk_hw*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,struct tegra_clk_periph_gate*) ;
 int FUNC_8 (int,struct tegra_clk_periph_gate*) ;
 int FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct clk_hw *VAR_5)
{
 struct tegra_clk_periph_gate *VAR_6 = FUNC_5(VAR_5);
 unsigned long VAR_7 = 0;

 FUNC_3(&VAR_4, VAR_7);

 VAR_6->enable_refcnt[VAR_6->clk_num]++;
 if (VAR_6->enable_refcnt[VAR_6->clk_num] > 1) {
  FUNC_4(&VAR_4, VAR_7);
  return 0;
 }

 FUNC_7(FUNC_1(VAR_6), VAR_6);
 FUNC_6(2);

 if (!(VAR_6->flags & VAR_2) &&
     !(VAR_6->flags & VAR_1)) {
  if (FUNC_2(VAR_6) & FUNC_1(VAR_6)) {
   FUNC_6(5);
   FUNC_8(FUNC_1(VAR_6), VAR_6);
  }
 }

 if (VAR_6->flags & VAR_3) {
  FUNC_9(0, VAR_6->clk_base + VAR_0);
  FUNC_9(FUNC_0(22), VAR_6->clk_base + VAR_0);
  FUNC_6(1);
  FUNC_9(0, VAR_6->clk_base + VAR_0);
 }

 FUNC_4(&VAR_4, VAR_7);

 return 0;
}
