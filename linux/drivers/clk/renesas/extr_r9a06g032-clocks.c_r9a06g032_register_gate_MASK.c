
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct r9a06g032_priv {int dummy; } ;
struct r9a06g032_clkdesc {int name; int gate; int index; } ;
struct TYPE_3__ {struct clk_init_data* init; } ;
struct r9a06g032_clk_gate {TYPE_1__ hw; int gate; int index; struct r9a06g032_priv* clocks; } ;
struct clk_init_data {char const** parent_names; int num_parents; int flags; int * ops; int name; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 struct clk* FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (struct r9a06g032_clk_gate*) ;
 struct r9a06g032_clk_gate* FUNC_3 (int,int ) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int VAR_3 ;

__attribute__((used)) static struct clk *
FUNC_6(struct r9a06g032_priv *VAR_4,
   const char *VAR_5,
   const struct r9a06g032_clkdesc *VAR_6)
{
 struct clk *VAR_7;
 struct r9a06g032_clk_gate *VAR_8;
 struct clk_init_data VAR_9;

 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return ((void*)0);

 VAR_9.name = VAR_6->name;
 VAR_9.ops = &VAR_3;
 VAR_9.flags = VAR_1;
 VAR_9.parent_names = VAR_5 ? &VAR_5 : ((void*)0);
 VAR_9.num_parents = VAR_5 ? 1 : 0;

 VAR_8->clocks = VAR_4;
 VAR_8->index = VAR_6->index;
 VAR_8->gate = VAR_6->gate;
 VAR_8->hw.init = &VAR_9;






 if (FUNC_5(&VAR_8->hw)) {
  VAR_9.flags |= VAR_0;
  FUNC_4("%s was enabled, making read-only\n", VAR_6->name);
 }

 VAR_7 = FUNC_1(((void*)0), &VAR_8->hw);
 if (FUNC_0(VAR_7)) {
  FUNC_2(VAR_8);
  return ((void*)0);
 }
 return VAR_7;
}
