
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int regmap; } ;
struct clk_rcg2 {scalar_t__ cmd_rcgr; TYPE_1__ clkr; } ;
struct clk_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int*) ;
 struct clk_rcg2* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_2)
{
 struct clk_rcg2 *VAR_3 = FUNC_1(VAR_2);
 u32 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3->clkr.regmap, VAR_3->cmd_rcgr + VAR_0, &VAR_4);
 if (VAR_5)
  return VAR_5;

 return (VAR_4 & VAR_1) == 0;
}
