
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct freq_tbl {int dummy; } ;
struct TYPE_2__ {int regmap; } ;
struct clk_rcg {int ns_reg; TYPE_1__ clkr; int freq_tbl; } ;
struct clk_hw {int clk; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct clk_rcg*,struct freq_tbl const*) ;
 struct freq_tbl* FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 struct clk_rcg* FUNC_5 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_6(struct clk_hw *VAR_1, unsigned long VAR_2,
    unsigned long VAR_3)
{
 struct clk_rcg *VAR_4 = FUNC_5(VAR_1);
 const struct freq_tbl *VAR_5;
 int VAR_6;
 u32 VAR_7 = FUNC_0(10);

 VAR_5 = FUNC_3(VAR_4->freq_tbl, VAR_2);
 if (!VAR_5)
  return -VAR_0;


 FUNC_4(VAR_4->clkr.regmap, VAR_4->ns_reg, VAR_7, 0);
 VAR_6 = FUNC_2(VAR_4, VAR_5);

 if (FUNC_1(VAR_1->clk))
  FUNC_4(VAR_4->clkr.regmap, VAR_4->ns_reg, VAR_7, VAR_7);

 return VAR_6;
}
