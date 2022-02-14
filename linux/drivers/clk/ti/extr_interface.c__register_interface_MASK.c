
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct device {int dummy; } ;
struct clk_omap_reg {int dummy; } ;
struct clk_init_data {char const* name; int num_parents; char const** parent_names; scalar_t__ flags; int * ops; int * member_0; } ;
struct clk_hw_omap_ops {int dummy; } ;
struct TYPE_2__ {struct clk_init_data* init; } ;
struct clk_hw_omap {TYPE_1__ hw; int enable_bit; int enable_reg; struct clk_hw_omap_ops const* ops; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 struct clk* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk_hw_omap*) ;
 struct clk_hw_omap* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,struct clk_omap_reg*,int) ;
 struct clk* FUNC_5 (int *,TYPE_1__*,char const*) ;
 int VAR_2 ;

__attribute__((used)) static struct clk *FUNC_6(struct device *VAR_3, const char *VAR_4,
           const char *VAR_5,
           struct clk_omap_reg *VAR_6, u8 VAR_7,
           const struct clk_hw_omap_ops *VAR_8)
{
 struct clk_init_data VAR_9 = { ((void*)0) };
 struct clk_hw_omap *VAR_10;
 struct clk *VAR_11;

 VAR_10 = FUNC_3(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return FUNC_0(-VAR_0);

 VAR_10->hw.init = &VAR_9;
 VAR_10->ops = VAR_8;
 FUNC_4(&VAR_10->enable_reg, VAR_6, sizeof(*VAR_6));
 VAR_10->enable_bit = VAR_7;

 VAR_9.name = VAR_4;
 VAR_9.ops = &VAR_2;
 VAR_9.flags = 0;

 VAR_9.num_parents = 1;
 VAR_9.parent_names = &VAR_5;

 VAR_11 = FUNC_5(((void*)0), &VAR_10->hw, VAR_4);

 if (FUNC_1(VAR_11))
  FUNC_2(VAR_10);

 return VAR_11;
}
