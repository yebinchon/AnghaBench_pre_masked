
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct clk_init_data* init; } ;
struct tegra_clk_pll {TYPE_2__ hw; TYPE_1__* params; } ;
struct clk_ops {int dummy; } ;
struct clk_init_data {char const* name; unsigned long flags; char const** parent_names; int num_parents; struct clk_ops const* ops; } ;
struct clk {int dummy; } ;
struct TYPE_3__ {int flags; int (* set_defaults ) (struct tegra_clk_pll*) ;scalar_t__ calc_rate; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct clk* FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (struct tegra_clk_pll*) ;

__attribute__((used)) static struct clk *FUNC_2(struct tegra_clk_pll *VAR_3,
  const char *VAR_4, const char *VAR_5, unsigned long VAR_6,
  const struct clk_ops *VAR_7)
{
 struct clk_init_data VAR_8;

 VAR_8.name = VAR_4;
 VAR_8.ops = VAR_7;
 VAR_8.flags = VAR_6;
 VAR_8.parent_names = (VAR_5 ? &VAR_5 : ((void*)0));
 VAR_8.num_parents = (VAR_5 ? 1 : 0);


 if (!VAR_3->params->calc_rate) {
  if (VAR_3->params->flags & VAR_0)
   VAR_3->params->calc_rate = VAR_1;
  else
   VAR_3->params->calc_rate = VAR_2;
 }

 if (VAR_3->params->set_defaults)
  VAR_3->params->set_defaults(VAR_3);


 VAR_3->hw.init = &VAR_8;

 return FUNC_0(((void*)0), &VAR_3->hw);
}
