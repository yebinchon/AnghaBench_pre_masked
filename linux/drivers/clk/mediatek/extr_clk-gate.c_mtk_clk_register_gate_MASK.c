
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct regmap {int dummy; } ;
struct TYPE_2__ {struct clk_init_data* init; } ;
struct mtk_clk_gate {int set_ofs; int clr_ofs; int sta_ofs; TYPE_1__ hw; int bit; struct regmap* regmap; } ;
struct device {int dummy; } ;
struct clk_ops {int dummy; } ;
struct clk_init_data {char const* name; unsigned long flags; char const** parent_names; int num_parents; struct clk_ops const* ops; } ;
struct clk {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 struct clk* FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct clk*) ;
 struct clk* FUNC_2 (struct device*,TYPE_1__*) ;
 int FUNC_3 (struct mtk_clk_gate*) ;
 struct mtk_clk_gate* FUNC_4 (int,int ) ;

struct clk *FUNC_5(
  const char *VAR_3,
  const char *VAR_4,
  struct regmap *VAR_5,
  int VAR_6,
  int VAR_7,
  int VAR_8,
  u8 VAR_9,
  const struct clk_ops *VAR_10,
  unsigned long VAR_11,
  struct device *VAR_12)
{
 struct mtk_clk_gate *VAR_13;
 struct clk *VAR_14;
 struct clk_init_data VAR_15 = {};

 VAR_13 = FUNC_4(sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return FUNC_0(-VAR_1);

 VAR_15.name = VAR_3;
 VAR_15.flags = VAR_11 | VAR_0;
 VAR_15.parent_names = VAR_4 ? &VAR_4 : ((void*)0);
 VAR_15.num_parents = VAR_4 ? 1 : 0;
 VAR_15.ops = VAR_10;

 VAR_13->regmap = VAR_5;
 VAR_13->set_ofs = VAR_6;
 VAR_13->clr_ofs = VAR_7;
 VAR_13->sta_ofs = VAR_8;
 VAR_13->bit = VAR_9;

 VAR_13->hw.init = &VAR_15;

 VAR_14 = FUNC_2(VAR_12, &VAR_13->hw);
 if (FUNC_1(VAR_14))
  FUNC_3(VAR_13);

 return VAR_14;
}
