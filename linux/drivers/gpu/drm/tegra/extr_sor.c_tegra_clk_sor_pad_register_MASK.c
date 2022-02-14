
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_sor {int dev; } ;
struct TYPE_2__ {struct clk_init_data* init; } ;
struct tegra_clk_sor_pad {TYPE_1__ hw; struct tegra_sor* sor; } ;
struct clk_init_data {char const* name; int * ops; int num_parents; int parent_names; scalar_t__ flags; } ;
struct clk {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct clk* FUNC_1 (int ) ;
 int VAR_1 ;
 struct clk* FUNC_2 (int ,TYPE_1__*) ;
 struct tegra_clk_sor_pad* FUNC_3 (int ,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct clk *FUNC_4(struct tegra_sor *VAR_4,
           const char *VAR_5)
{
 struct tegra_clk_sor_pad *VAR_6;
 struct clk_init_data VAR_7;
 struct clk *VAR_8;

 VAR_6 = FUNC_3(VAR_4->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_1(-VAR_0);

 VAR_6->sor = VAR_4;

 VAR_7.name = VAR_5;
 VAR_7.flags = 0;
 VAR_7.parent_names = VAR_3;
 VAR_7.num_parents = FUNC_0(VAR_3);
 VAR_7.ops = &VAR_2;

 VAR_6->hw.init = &VAR_7;

 VAR_8 = FUNC_2(VAR_4->dev, &VAR_6->hw);

 return VAR_8;
}
