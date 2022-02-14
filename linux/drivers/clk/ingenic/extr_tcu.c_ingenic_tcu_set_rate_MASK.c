
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


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (int ,int ,int ,int) ;
 struct ingenic_tcu_clk* FUNC_5 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_6(struct clk_hw *VAR_2, unsigned long VAR_3,
  unsigned long VAR_4)
{
 struct ingenic_tcu_clk *VAR_5 = FUNC_5(VAR_2);
 const struct ingenic_tcu_clk_info *VAR_6 = VAR_5->info;
 u8 VAR_7 = FUNC_3(VAR_4, VAR_3);
 bool VAR_8;
 int VAR_9;

 VAR_8 = FUNC_2(VAR_2);

 VAR_9 = FUNC_4(VAR_5->tcu->map, VAR_6->tcsr_reg,
     VAR_1,
     VAR_7 << VAR_0);
 FUNC_0(VAR_9 < 0, "Unable to update TCSR %d", VAR_5->idx);

 if (!VAR_8)
  FUNC_1(VAR_2);

 return 0;
}
