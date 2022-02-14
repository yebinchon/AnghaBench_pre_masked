
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ingenic_tcu_clk_info {int tcsr_reg; } ;
struct ingenic_tcu_clk {int idx; TYPE_1__* tcu; struct ingenic_tcu_clk_info* info; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int map; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int,char*,int ) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 struct ingenic_tcu_clk* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_4(struct clk_hw *VAR_1)
{
 struct ingenic_tcu_clk *VAR_2 = FUNC_3(VAR_1);
 const struct ingenic_tcu_clk_info *VAR_3 = VAR_2->info;
 unsigned int VAR_4 = 0;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_2->tcu->map, VAR_3->tcsr_reg, &VAR_4);
 FUNC_0(VAR_5 < 0, "Unable to read TCSR %d", VAR_2->idx);

 return FUNC_1(VAR_4 & VAR_0) - 1;
}
