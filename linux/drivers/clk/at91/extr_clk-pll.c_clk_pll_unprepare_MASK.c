
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_pll {int id; int regmap; TYPE_1__* layout; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {unsigned int pllr_mask; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,unsigned int,unsigned int) ;
 struct clk_pll* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_3(struct clk_hw *VAR_0)
{
 struct clk_pll *VAR_1 = FUNC_2(VAR_0);
 unsigned int VAR_2 = VAR_1->layout->pllr_mask;

 FUNC_1(VAR_1->regmap, FUNC_0(VAR_1->id), VAR_2, ~VAR_2);
}
