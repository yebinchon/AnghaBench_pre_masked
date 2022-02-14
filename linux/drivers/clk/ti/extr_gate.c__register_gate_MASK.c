
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct device {int dummy; } ;
struct clk_ops {int dummy; } ;
struct clk_omap_reg {int dummy; } ;
struct clk_init_data {char const* name; char const** parent_names; int num_parents; unsigned long flags; struct clk_ops const* ops; int * member_0; } ;
struct clk_hw_omap_ops {int dummy; } ;
struct TYPE_2__ {struct clk_init_data* init; } ;
struct clk_hw_omap {TYPE_1__ hw; void* flags; struct clk_hw_omap_ops const* ops; void* enable_bit; int enable_reg; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 struct clk* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk_hw_omap*) ;
 struct clk_hw_omap* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,struct clk_omap_reg*,int) ;
 struct clk* FUNC_5 (int *,TYPE_1__*,char const*) ;

__attribute__((used)) static struct clk *FUNC_6(struct device *VAR_2, const char *VAR_3,
      const char *VAR_4, unsigned long VAR_5,
      struct clk_omap_reg *VAR_6, u8 VAR_7,
      u8 VAR_8, const struct clk_ops *VAR_9,
      const struct clk_hw_omap_ops *VAR_10)
{
 struct clk_init_data VAR_11 = { ((void*)0) };
 struct clk_hw_omap *VAR_12;
 struct clk *VAR_13;

 VAR_12 = FUNC_3(sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  return FUNC_0(-VAR_0);

 VAR_12->hw.init = &VAR_11;

 VAR_11.name = VAR_3;
 VAR_11.ops = VAR_9;

 FUNC_4(&VAR_12->enable_reg, VAR_6, sizeof(*VAR_6));
 VAR_12->enable_bit = VAR_7;
 VAR_12->ops = VAR_10;

 VAR_12->flags = VAR_8;

 VAR_11.parent_names = &VAR_4;
 VAR_11.num_parents = 1;

 VAR_11.flags = VAR_5;

 VAR_13 = FUNC_5(((void*)0), &VAR_12->hw, VAR_3);

 if (FUNC_1(VAR_13))
  FUNC_2(VAR_12);

 return VAR_13;
}
