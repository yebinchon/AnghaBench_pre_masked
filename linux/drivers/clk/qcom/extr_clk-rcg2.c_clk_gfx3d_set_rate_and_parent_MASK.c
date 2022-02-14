
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct TYPE_4__ {int regmap; } ;
struct clk_rcg2 {scalar_t__ cmd_rcgr; TYPE_2__ clkr; TYPE_1__* parent_map; } ;
struct clk_hw {int dummy; } ;
struct TYPE_3__ {int cfg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int) ;
 struct clk_rcg2* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (struct clk_rcg2*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_2, unsigned long VAR_3,
  unsigned long VAR_4, u8 VAR_5)
{
 struct clk_rcg2 *VAR_6 = FUNC_1(VAR_2);
 u32 VAR_7;
 int VAR_8;


 VAR_7 = VAR_6->parent_map[VAR_5].cfg << VAR_1;
 VAR_8 = FUNC_0(VAR_6->clkr.regmap, VAR_6->cmd_rcgr + VAR_0, VAR_7);
 if (VAR_8)
  return VAR_8;

 return FUNC_2(VAR_6);
}
