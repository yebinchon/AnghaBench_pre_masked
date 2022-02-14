
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef void* u16 ;
struct device {int dummy; } ;
struct TYPE_2__ {struct clk_init_data* init; } ;
struct clk_sysctrl {int* reg_bits; int* reg_mask; unsigned long rate; unsigned long enable_delay_us; TYPE_1__ hw; struct device* dev; scalar_t__ parent_index; void** reg_sel; } ;
struct clk_ops {int dummy; } ;
struct clk_init_data {char const* name; unsigned long flags; char const** parent_names; int num_parents; struct clk_ops const* ops; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct clk* FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct clk*) ;
 int VAR_3 ;
 int FUNC_2 (struct device*,char*) ;
 struct clk* FUNC_3 (struct device*,TYPE_1__*) ;
 struct clk_sysctrl* FUNC_4 (struct device*,int,int ) ;

__attribute__((used)) static struct clk *FUNC_5(struct device *VAR_4,
    const char *VAR_5,
    const char **VAR_6,
    u8 VAR_7,
    u16 *VAR_8,
    u8 *VAR_9,
    u8 *VAR_10,
    unsigned long VAR_11,
    unsigned long VAR_12,
    unsigned long VAR_13,
    const struct clk_ops *VAR_14)
{
 struct clk_sysctrl *VAR_15;
 struct clk_init_data VAR_16;
 struct clk *VAR_17;
 int VAR_18;

 if (!VAR_4)
  return FUNC_0(-VAR_0);

 if (!VAR_5 || (VAR_7 > VAR_3)) {
  FUNC_2(VAR_4, "clk_sysctrl: invalid arguments passed\n");
  return FUNC_0(-VAR_0);
 }

 VAR_15 = FUNC_4(VAR_4, sizeof(*VAR_15), VAR_2);
 if (!VAR_15)
  return FUNC_0(-VAR_1);


 VAR_15->reg_sel[0] = VAR_8[0];
 VAR_15->reg_bits[0] = VAR_10[0];
 VAR_15->reg_mask[0] = VAR_9[0];


 for (VAR_18 = 1; VAR_18 < VAR_7; VAR_18++) {
  VAR_15->reg_sel[VAR_18] = VAR_8[VAR_18];
  VAR_15->reg_bits[VAR_18] = VAR_10[VAR_18];
  VAR_15->reg_mask[VAR_18] = VAR_9[VAR_18];
 }

 VAR_15->parent_index = 0;
 VAR_15->rate = VAR_11;
 VAR_15->enable_delay_us = VAR_12;
 VAR_15->dev = VAR_4;

 VAR_16.name = VAR_5;
 VAR_16.ops = VAR_14;
 VAR_16.flags = VAR_13;
 VAR_16.parent_names = VAR_6;
 VAR_16.num_parents = VAR_7;
 VAR_15->hw.init = &VAR_16;

 VAR_17 = FUNC_3(VAR_15->dev, &VAR_15->hw);
 if (FUNC_1(VAR_17))
  FUNC_2(VAR_4, "clk_sysctrl: clk_register failed\n");

 return VAR_17;
}
