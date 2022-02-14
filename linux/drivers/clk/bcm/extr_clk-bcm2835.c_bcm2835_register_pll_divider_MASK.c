
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_init_data {int num_parents; char const* name; int flags; int * ops; int * parent_names; } ;
struct clk_hw {struct clk_init_data* init; } ;
struct bcm2835_pll_divider_data {int fixed_divider; char* name; int flags; scalar_t__ a2w_reg; int source_pll; } ;
struct TYPE_2__ {struct clk_hw hw; int * table; int * lock; int flags; int width; int shift; scalar_t__ reg; } ;
struct bcm2835_pll_divider {TYPE_1__ div; struct bcm2835_pll_divider_data const* data; struct bcm2835_cprman* cprman; } ;
struct bcm2835_cprman {int dev; int regs_lock; scalar_t__ regs; } ;
typedef int init ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct clk_hw* FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 struct clk_hw* FUNC_1 (int ,char*,char const*,int ,int,int) ;
 int FUNC_2 (int ,struct clk_hw*) ;
 char* FUNC_3 (int ,int ,char*,char*) ;
 struct bcm2835_pll_divider* FUNC_4 (int ,int,int ) ;
 int FUNC_5 (struct clk_init_data*,int ,int) ;

__attribute__((used)) static struct clk_hw *
FUNC_6(struct bcm2835_cprman *VAR_7,
        const struct bcm2835_pll_divider_data *VAR_8)
{
 struct bcm2835_pll_divider *VAR_9;
 struct clk_init_data VAR_10;
 const char *VAR_11;
 int VAR_12;

 if (VAR_8->fixed_divider != 1) {
  VAR_11 = FUNC_3(VAR_7->dev, VAR_5,
           "%s_prediv", VAR_8->name);
  if (!VAR_11)
   return ((void*)0);
 } else {
  VAR_11 = VAR_8->name;
 }

 FUNC_5(&VAR_10, 0, sizeof(VAR_10));

 VAR_10.parent_names = &VAR_8->source_pll;
 VAR_10.num_parents = 1;
 VAR_10.name = VAR_11;
 VAR_10.ops = &VAR_6;
 VAR_10.flags = VAR_8->flags | VAR_3;

 VAR_9 = FUNC_4(VAR_7->dev, sizeof(*VAR_9), VAR_5);
 if (!VAR_9)
  return ((void*)0);

 VAR_9->div.reg = VAR_7->regs + VAR_8->a2w_reg;
 VAR_9->div.shift = VAR_1;
 VAR_9->div.width = VAR_0;
 VAR_9->div.flags = VAR_2;
 VAR_9->div.lock = &VAR_7->regs_lock;
 VAR_9->div.hw.init = &VAR_10;
 VAR_9->div.table = ((void*)0);

 VAR_9->cprman = VAR_7;
 VAR_9->data = VAR_8;

 VAR_12 = FUNC_2(VAR_7->dev, &VAR_9->div.hw);
 if (VAR_12)
  return FUNC_0(VAR_12);





 if (VAR_8->fixed_divider != 1) {
  return FUNC_1(VAR_7->dev, VAR_8->name,
          VAR_11,
          VAR_4,
          1,
          VAR_8->fixed_divider);
 }

 return &VAR_9->div.hw;
}
