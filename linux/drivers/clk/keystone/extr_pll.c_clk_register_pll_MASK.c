
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct clk_pll_data {int dummy; } ;
struct TYPE_2__ {struct clk_init_data* init; } ;
struct clk_pll {TYPE_1__ hw; struct clk_pll_data* pll_data; } ;
struct clk_init_data {char const* name; char const** parent_names; int num_parents; scalar_t__ flags; int * ops; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 struct clk* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct clk*) ;
 int VAR_2 ;
 struct clk* FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (struct clk_pll*) ;
 struct clk_pll* FUNC_4 (int,int ) ;

__attribute__((used)) static struct clk *FUNC_5(struct device *VAR_3,
   const char *VAR_4,
   const char *VAR_5,
   struct clk_pll_data *VAR_6)
{
 struct clk_init_data VAR_7;
 struct clk_pll *VAR_8;
 struct clk *VAR_9;

 VAR_8 = FUNC_4(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return FUNC_0(-VAR_0);

 VAR_7.name = VAR_4;
 VAR_7.ops = &VAR_2;
 VAR_7.flags = 0;
 VAR_7.parent_names = (VAR_5 ? &VAR_5 : ((void*)0));
 VAR_7.num_parents = (VAR_5 ? 1 : 0);

 VAR_8->pll_data = VAR_6;
 VAR_8->hw.init = &VAR_7;

 VAR_9 = FUNC_2(((void*)0), &VAR_8->hw);
 if (FUNC_1(VAR_9))
  goto out;

 return VAR_9;
out:
 FUNC_3(VAR_8);
 return ((void*)0);
}
