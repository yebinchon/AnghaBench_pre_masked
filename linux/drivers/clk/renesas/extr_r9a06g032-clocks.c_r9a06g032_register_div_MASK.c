
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r9a06g032_priv {int dummy; } ;
struct r9a06g032_clkdesc {scalar_t__* div_table; int div_max; int div_min; int reg; int index; int name; } ;
struct TYPE_2__ {struct clk_init_data* init; } ;
struct r9a06g032_clk_div {TYPE_1__ hw; int table_size; scalar_t__* table; int max; int min; int reg; int index; struct r9a06g032_priv* clocks; } ;
struct clk_init_data {char const** parent_names; int num_parents; int flags; int * ops; int name; } ;
struct clk {int dummy; } ;


 unsigned int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct clk*) ;
 struct clk* FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (struct r9a06g032_clk_div*) ;
 struct r9a06g032_clk_div* FUNC_4 (int,int ) ;
 int VAR_2 ;

__attribute__((used)) static struct clk *
FUNC_5(struct r9a06g032_priv *VAR_3,
         const char *VAR_4,
         const struct r9a06g032_clkdesc *VAR_5)
{
 struct r9a06g032_clk_div *VAR_6;
 struct clk *VAR_7;
 struct clk_init_data VAR_8;
 unsigned int VAR_9;

 VAR_6 = FUNC_4(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return ((void*)0);

 VAR_8.name = VAR_5->name;
 VAR_8.ops = &VAR_2;
 VAR_8.flags = VAR_0;
 VAR_8.parent_names = VAR_4 ? &VAR_4 : ((void*)0);
 VAR_8.num_parents = VAR_4 ? 1 : 0;

 VAR_6->clocks = VAR_3;
 VAR_6->index = VAR_5->index;
 VAR_6->reg = VAR_5->reg;
 VAR_6->hw.init = &VAR_8;
 VAR_6->min = VAR_5->div_min;
 VAR_6->max = VAR_5->div_max;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_6->table) &&
      VAR_9 < FUNC_0(VAR_5->div_table) && VAR_5->div_table[VAR_9]; VAR_9++) {
  VAR_6->table[VAR_6->table_size++] = VAR_5->div_table[VAR_9];
 }

 VAR_7 = FUNC_2(((void*)0), &VAR_6->hw);
 if (FUNC_1(VAR_7)) {
  FUNC_3(VAR_6);
  return ((void*)0);
 }
 return VAR_7;
}
