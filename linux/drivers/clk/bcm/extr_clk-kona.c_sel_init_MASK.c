
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccu_data {int dummy; } ;
struct bcm_clk_trig {int dummy; } ;
struct bcm_clk_sel {int dummy; } ;
struct bcm_clk_gate {int dummy; } ;


 int FUNC_0 (struct ccu_data*,struct bcm_clk_gate*,struct bcm_clk_sel*,struct bcm_clk_trig*) ;
 int FUNC_1 (struct bcm_clk_sel*) ;

__attribute__((used)) static bool FUNC_2(struct ccu_data *VAR_0, struct bcm_clk_gate *VAR_1,
   struct bcm_clk_sel *VAR_2, struct bcm_clk_trig *VAR_3)
{
 if (!FUNC_1(VAR_2))
  return 1;
 return !FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}
