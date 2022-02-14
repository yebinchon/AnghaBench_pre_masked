
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ingenic_tcu_clk_info {int gate_bit; } ;
struct ingenic_tcu_clk {TYPE_1__* tcu; struct ingenic_tcu_clk_info* info; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int map; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 struct ingenic_tcu_clk* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_1)
{
 struct ingenic_tcu_clk *VAR_2 = FUNC_2(VAR_1);
 const struct ingenic_tcu_clk_info *VAR_3 = VAR_2->info;
 unsigned int VAR_4;

 FUNC_1(VAR_2->tcu->map, VAR_0, &VAR_4);

 return !(VAR_4 & FUNC_0(VAR_3->gate_bit));
}
