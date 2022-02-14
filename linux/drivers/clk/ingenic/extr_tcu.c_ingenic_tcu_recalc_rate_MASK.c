
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ingenic_tcu_clk_info {int tcsr_reg; } ;
struct ingenic_tcu_clk {int idx; TYPE_1__* tcu; struct ingenic_tcu_clk_info* info; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int map; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 struct ingenic_tcu_clk* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_2,
  unsigned long VAR_3)
{
 struct ingenic_tcu_clk *VAR_4 = FUNC_2(VAR_2);
 const struct ingenic_tcu_clk_info *VAR_5 = VAR_4->info;
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_4->tcu->map, VAR_5->tcsr_reg, &VAR_6);
 FUNC_0(VAR_7 < 0, "Unable to read TCSR %d", VAR_4->idx);

 VAR_6 = (VAR_6 & VAR_1) >> VAR_0;

 return VAR_3 >> (VAR_6 * 2);
}
