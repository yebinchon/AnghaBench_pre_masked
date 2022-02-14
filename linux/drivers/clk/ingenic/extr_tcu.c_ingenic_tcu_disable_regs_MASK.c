
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ingenic_tcu_clk_info {int gate_bit; } ;
struct ingenic_tcu_clk {struct ingenic_tcu* tcu; struct ingenic_tcu_clk_info* info; } ;
struct ingenic_tcu {int map; int clk; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 struct ingenic_tcu_clk* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_3(struct clk_hw *VAR_1)
{
 struct ingenic_tcu_clk *VAR_2 = FUNC_2(VAR_1);
 const struct ingenic_tcu_clk_info *VAR_3 = VAR_2->info;
 struct ingenic_tcu *VAR_4 = VAR_2->tcu;

 if (!VAR_4->clk)
  FUNC_1(VAR_4->map, VAR_0, FUNC_0(VAR_3->gate_bit));
}
