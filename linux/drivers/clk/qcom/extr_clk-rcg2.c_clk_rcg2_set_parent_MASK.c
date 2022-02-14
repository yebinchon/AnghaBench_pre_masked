
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct TYPE_4__ {int regmap; } ;
struct clk_rcg2 {TYPE_2__ clkr; TYPE_1__* parent_map; } ;
struct clk_hw {int dummy; } ;
struct TYPE_3__ {int cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct clk_rcg2*) ;
 int FUNC_1 (int ,int ,int ,int) ;
 struct clk_rcg2* FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (struct clk_rcg2*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_2, u8 VAR_3)
{
 struct clk_rcg2 *VAR_4 = FUNC_2(VAR_2);
 int VAR_5;
 u32 VAR_6 = VAR_4->parent_map[VAR_3].cfg << VAR_1;

 VAR_5 = FUNC_1(VAR_4->clkr.regmap, FUNC_0(VAR_4),
     VAR_0, VAR_6);
 if (VAR_5)
  return VAR_5;

 return FUNC_3(VAR_4);
}
