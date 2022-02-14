
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int regmap; } ;
struct clk_rcg2 {int safe_src_index; scalar_t__ cmd_rcgr; TYPE_1__ clkr; } ;
struct clk_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (int ,scalar_t__,int*) ;
 int FUNC_3 (int ,scalar_t__,int) ;
 struct clk_rcg2* FUNC_4 (struct clk_hw*) ;
 int FUNC_5 (struct clk_rcg2*) ;

__attribute__((used)) static void FUNC_6(struct clk_hw *VAR_2)
{
 struct clk_rcg2 *VAR_3 = FUNC_4(VAR_2);
 u32 VAR_4;





 FUNC_2(VAR_3->clkr.regmap, VAR_3->cmd_rcgr + VAR_0, &VAR_4);
 FUNC_1(VAR_2);

 FUNC_3(VAR_3->clkr.regmap, VAR_3->cmd_rcgr + VAR_0,
       VAR_3->safe_src_index << VAR_1);

 FUNC_5(VAR_3);

 FUNC_0(VAR_2);


 FUNC_3(VAR_3->clkr.regmap, VAR_3->cmd_rcgr + VAR_0, VAR_4);
}
