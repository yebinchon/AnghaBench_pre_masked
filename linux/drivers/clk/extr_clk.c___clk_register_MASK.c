
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_node {int dummy; } ;
struct device {TYPE_1__* driver; } ;
struct clk_init_data {int num_parents; int flags; scalar_t__ ops; int name; } ;
struct clk_hw {struct clk* clk; struct clk_core* core; struct clk_init_data* init; } ;
struct clk_core {int rpm_enabled; int name; int clks; int max_rate; scalar_t__ min_rate; int num_parents; int flags; struct clk_hw* hw; int owner; struct device_node* of_node; struct device* dev; scalar_t__ ops; } ;
struct clk {int dummy; } ;
struct TYPE_2__ {int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct clk* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct clk*) ;
 int FUNC_3 (struct clk*) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct clk_core*) ;
 struct clk* FUNC_6 (struct clk_core*,int *,int *) ;
 int FUNC_7 (struct clk_core*) ;
 int FUNC_8 (struct clk_core*,struct clk*) ;
 int FUNC_9 (struct clk_core*,struct clk_init_data const*) ;
 int FUNC_10 (struct clk*) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (struct clk*) ;
 int FUNC_14 (struct clk_core*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int ) ;
 struct clk_core* FUNC_17 (int,int ) ;
 scalar_t__ FUNC_18 (struct device*) ;

__attribute__((used)) static struct clk *
FUNC_19(struct device *VAR_4, struct device_node *VAR_5, struct clk_hw *VAR_6)
{
 int VAR_7;
 struct clk_core *VAR_8;
 const struct clk_init_data *VAR_9 = VAR_6->init;






 VAR_6->init = ((void*)0);

 VAR_8 = FUNC_17(sizeof(*VAR_8), VAR_2);
 if (!VAR_8) {
  VAR_7 = -VAR_1;
  goto fail_out;
 }

 VAR_8->name = FUNC_16(VAR_9->name, VAR_2);
 if (!VAR_8->name) {
  VAR_7 = -VAR_1;
  goto fail_name;
 }

 if (FUNC_4(!VAR_9->ops)) {
  VAR_7 = -VAR_0;
  goto fail_ops;
 }
 VAR_8->ops = VAR_9->ops;

 if (VAR_4 && FUNC_18(VAR_4))
  VAR_8->rpm_enabled = 1;
 VAR_8->dev = VAR_4;
 VAR_8->of_node = VAR_5;
 if (VAR_4 && VAR_4->driver)
  VAR_8->owner = VAR_4->driver->owner;
 VAR_8->hw = VAR_6;
 VAR_8->flags = VAR_9->flags;
 VAR_8->num_parents = VAR_9->num_parents;
 VAR_8->min_rate = 0;
 VAR_8->max_rate = VAR_3;
 VAR_6->core = VAR_8;

 VAR_7 = FUNC_9(VAR_8, VAR_9);
 if (VAR_7)
  goto fail_parents;

 FUNC_1(&VAR_8->clks);





 VAR_6->clk = FUNC_6(VAR_8, ((void*)0), ((void*)0));
 if (FUNC_2(VAR_6->clk)) {
  VAR_7 = FUNC_3(VAR_6->clk);
  goto fail_create_clk;
 }

 FUNC_8(VAR_6->core, VAR_6->clk);

 VAR_7 = FUNC_5(VAR_8);
 if (!VAR_7)
  return VAR_6->clk;

 FUNC_11();
 FUNC_10(VAR_6->clk);
 FUNC_12();

 FUNC_13(VAR_6->clk);
 VAR_6->clk = ((void*)0);

fail_create_clk:
 FUNC_7(VAR_8);
fail_parents:
fail_ops:
 FUNC_15(VAR_8->name);
fail_name:
 FUNC_14(VAR_8);
fail_out:
 return FUNC_0(VAR_7);
}
