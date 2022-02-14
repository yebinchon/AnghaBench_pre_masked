
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct TYPE_4__ {int regmap; } ;
struct TYPE_6__ {TYPE_2__* parent_map; } ;
struct clk_rcg {int ns_reg; TYPE_1__ clkr; TYPE_3__ s; } ;
struct clk_hw {int dummy; } ;
struct TYPE_5__ {int cfg; } ;


 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;
 struct clk_rcg* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_0, u8 VAR_1)
{
 struct clk_rcg *VAR_2 = FUNC_3(VAR_0);
 u32 VAR_3;

 FUNC_0(VAR_2->clkr.regmap, VAR_2->ns_reg, &VAR_3);
 VAR_3 = FUNC_2(&VAR_2->s, VAR_2->s.parent_map[VAR_1].cfg, VAR_3);
 FUNC_1(VAR_2->clkr.regmap, VAR_2->ns_reg, VAR_3);

 return 0;
}
