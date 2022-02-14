
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ingenic_tcu_clk_info {int tcsr_reg; } ;
struct ingenic_tcu_clk {int idx; TYPE_1__* tcu; struct ingenic_tcu_clk_info* info; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int map; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 struct ingenic_tcu_clk* FUNC_5 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_6(struct clk_hw *VAR_1, u8 VAR_2)
{
 struct ingenic_tcu_clk *VAR_3 = FUNC_5(VAR_1);
 const struct ingenic_tcu_clk_info *VAR_4 = VAR_3->info;
 bool VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(VAR_1);

 VAR_6 = FUNC_4(VAR_3->tcu->map, VAR_4->tcsr_reg,
     VAR_0, FUNC_0(VAR_2));
 FUNC_1(VAR_6 < 0, "Unable to update TCSR %d", VAR_3->idx);

 if (!VAR_5)
  FUNC_2(VAR_1);

 return 0;
}
