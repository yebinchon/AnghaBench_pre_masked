
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int regmap; } ;
struct clk_rcg {int ns_reg; TYPE_1__ clkr; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct clk_rcg* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_3(struct clk_hw *VAR_0)
{
 struct clk_rcg *VAR_1 = FUNC_2(VAR_0);
 u32 VAR_2 = FUNC_0(10);


 FUNC_1(VAR_1->clkr.regmap, VAR_1->ns_reg, VAR_2, 0);
}
