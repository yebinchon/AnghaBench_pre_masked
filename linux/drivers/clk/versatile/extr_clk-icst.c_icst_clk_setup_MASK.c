
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct TYPE_2__ {struct clk_init_data* init; } ;
struct icst_params {int ctype; TYPE_1__ hw; int lockreg_off; int vcoreg_off; struct icst_params* params; struct regmap* map; } ;
struct device {int dummy; } ;
struct clk_init_data {char const* name; char const** parent_names; int num_parents; scalar_t__ flags; int * ops; } ;
struct clk_icst_desc {int lock_offset; int vco_offset; int params; } ;
struct clk_icst {int ctype; TYPE_1__ hw; int lockreg_off; int vcoreg_off; struct clk_icst* params; struct regmap* map; } ;
struct clk {int dummy; } ;
typedef enum icst_control_type { ____Placeholder_icst_control_type } icst_control_type ;


 int VAR_0 ;
 struct clk* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct clk*) ;
 struct clk* FUNC_2 (struct device*,TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_3 (struct icst_params*) ;
 struct icst_params* FUNC_4 (int ,int,int ) ;
 struct icst_params* FUNC_5 (int,int ) ;

__attribute__((used)) static struct clk *FUNC_6(struct device *VAR_3,
      const struct clk_icst_desc *VAR_4,
      const char *VAR_5,
      const char *VAR_6,
      struct regmap *VAR_7,
      enum icst_control_type VAR_8)
{
 struct clk *VAR_9;
 struct clk_icst *VAR_10;
 struct clk_init_data VAR_11;
 struct icst_params *VAR_12;

 VAR_10 = FUNC_5(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return FUNC_0(-VAR_0);

 VAR_12 = FUNC_4(VAR_4->params, sizeof(*VAR_12), VAR_1);
 if (!VAR_12) {
  FUNC_3(VAR_10);
  return FUNC_0(-VAR_0);
 }

 VAR_11.name = VAR_5;
 VAR_11.ops = &VAR_2;
 VAR_11.flags = 0;
 VAR_11.parent_names = (VAR_6 ? &VAR_6 : ((void*)0));
 VAR_11.num_parents = (VAR_6 ? 1 : 0);
 VAR_10->map = VAR_7;
 VAR_10->hw.init = &VAR_11;
 VAR_10->params = VAR_12;
 VAR_10->vcoreg_off = VAR_4->vco_offset;
 VAR_10->lockreg_off = VAR_4->lock_offset;
 VAR_10->ctype = VAR_8;

 VAR_9 = FUNC_2(VAR_3, &VAR_10->hw);
 if (FUNC_1(VAR_9)) {
  FUNC_3(VAR_12);
  FUNC_3(VAR_10);
 }

 return VAR_9;
}
