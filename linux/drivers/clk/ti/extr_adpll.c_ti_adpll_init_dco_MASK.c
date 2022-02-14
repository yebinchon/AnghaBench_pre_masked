
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {struct clk_init_data* init; } ;
struct TYPE_6__ {TYPE_4__ hw; } ;
struct TYPE_5__ {int clks; } ;
struct ti_adpll_data {TYPE_3__* c; TYPE_2__ dco; int dev; scalar_t__ regs; int * parent_clocks; int parent_names; TYPE_1__ outputs; } ;
struct clk_init_data {int name; int flags; int * ops; int num_parents; int parent_names; } ;
struct clk {int dummy; } ;
struct TYPE_7__ {scalar_t__ output_index; scalar_t__ is_type_s; int nr_max_inputs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int VAR_7 ;
 int FUNC_1 (struct clk*) ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct clk* FUNC_2 (int ,TYPE_4__*) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (struct ti_adpll_data*,scalar_t__,char const*) ;
 int FUNC_5 (struct ti_adpll_data*,int ,int ,char*,int ,scalar_t__,int ,int,int ) ;
 int VAR_11 ;
 int FUNC_6 (struct ti_adpll_data*,struct clk*,int ,scalar_t__,int ,int *) ;

__attribute__((used)) static int FUNC_7(struct ti_adpll_data *VAR_12)
{
 struct clk_init_data VAR_13;
 struct clk *VAR_14;
 const char *VAR_15;
 int VAR_16, VAR_17;

 VAR_12->outputs.clks = FUNC_3(VAR_12->dev,
           VAR_7,
           sizeof(struct clk *),
           VAR_6);
 if (!VAR_12->outputs.clks)
  return -VAR_5;

 if (VAR_12->c->output_index < 0)
  VAR_15 = "dco";
 else
  VAR_15 = ((void*)0);

 VAR_13.name = FUNC_4(VAR_12, VAR_12->c->output_index, VAR_15);
 if (!VAR_13.name)
  return -VAR_3;

 VAR_13.parent_names = VAR_12->parent_names;
 VAR_13.num_parents = VAR_12->c->nr_max_inputs;
 VAR_13.ops = &VAR_11;
 VAR_13.flags = VAR_2;
 VAR_12->dco.hw.init = &VAR_13;

 if (VAR_12->c->is_type_s)
  VAR_16 = 5;
 else
  VAR_16 = 4;


 VAR_17 = FUNC_5(VAR_12, VAR_10, -VAR_4, "n2",
        VAR_12->parent_clocks[VAR_8],
        VAR_12->regs + VAR_1,
        VAR_0, VAR_16, 0);
 if (VAR_17)
  return VAR_17;

 VAR_14 = FUNC_2(VAR_12->dev, &VAR_12->dco.hw);
 if (FUNC_0(VAR_14))
  return FUNC_1(VAR_14);

 return FUNC_6(VAR_12, VAR_14, VAR_9, VAR_12->c->output_index,
        VAR_13.name, ((void*)0));
}
