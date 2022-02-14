
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ti_adpll_data {int dev; scalar_t__ regs; int lock; int np; } ;
struct TYPE_4__ {struct clk_init_data* init; } ;
struct TYPE_3__ {int bit_idx; scalar_t__ reg; int * lock; } ;
struct ti_adpll_clkout_data {TYPE_2__ hw; TYPE_1__ gate; struct ti_adpll_data* adpll; } ;
struct clk_ops {int is_enabled; int disable; int enable; int determine_rate; int get_parent; } ;
struct clk_init_data {char const* name; char const** parent_names; int num_parents; scalar_t__ flags; struct clk_ops* ops; } ;
struct clk {int dummy; } ;
typedef enum ti_adpll_clocks { ____Placeholder_ti_adpll_clocks } ti_adpll_clocks ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 char* FUNC_2 (struct clk*) ;
 int VAR_3 ;
 int FUNC_3 (int ,char*,char*,int) ;
 struct clk* FUNC_4 (int ,TYPE_2__*) ;
 void* FUNC_5 (int ,int,int ) ;
 int FUNC_6 (int ,char*,int,char const**) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (struct ti_adpll_data*,struct clk*,int,int,char const*,int *) ;

__attribute__((used)) static int FUNC_8(struct ti_adpll_data *VAR_8,
    enum ti_adpll_clocks VAR_9,
    int VAR_10, int VAR_11,
    char *VAR_12, struct clk *VAR_13,
    struct clk *VAR_14)
{
 struct ti_adpll_clkout_data *VAR_15;
 struct clk_init_data VAR_16;
 struct clk_ops *VAR_17;
 const char *VAR_18[2];
 const char *VAR_19;
 struct clk *VAR_20;
 int VAR_21;

 VAR_15 = FUNC_5(VAR_8->dev, sizeof(*VAR_15), VAR_2);
 if (!VAR_15)
  return -VAR_1;
 VAR_15->adpll = VAR_8;

 VAR_21 = FUNC_6(VAR_8->np,
         "clock-output-names",
         VAR_10,
         &VAR_19);
 if (VAR_21)
  return VAR_21;

 VAR_17 = FUNC_5(VAR_8->dev, sizeof(*VAR_17), VAR_2);
 if (!VAR_17)
  return -VAR_1;

 VAR_16.name = VAR_19;
 VAR_16.ops = VAR_17;
 VAR_16.flags = 0;
 VAR_15->hw.init = &VAR_16;
 VAR_18[0] = FUNC_2(VAR_13);
 VAR_18[1] = FUNC_2(VAR_14);
 VAR_16.parent_names = VAR_18;
 VAR_16.num_parents = 2;

 VAR_17->get_parent = VAR_6;
 VAR_17->determine_rate = VAR_3;
 if (VAR_11) {
  VAR_15->gate.lock = &VAR_8->lock;
  VAR_15->gate.reg = VAR_8->regs + VAR_0;
  VAR_15->gate.bit_idx = VAR_11;
  VAR_17->enable = VAR_5;
  VAR_17->disable = VAR_4;
  VAR_17->is_enabled = VAR_7;
 }

 VAR_20 = FUNC_4(VAR_8->dev, &VAR_15->hw);
 if (FUNC_0(VAR_20)) {
  FUNC_3(VAR_8->dev, "failed to register output %s: %li\n",
   VAR_12, FUNC_1(VAR_20));
  return FUNC_1(VAR_20);
 }

 return FUNC_7(VAR_8, VAR_20, VAR_9, VAR_10, VAR_19,
        ((void*)0));
}
