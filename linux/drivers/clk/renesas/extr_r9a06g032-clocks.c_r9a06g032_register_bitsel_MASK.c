
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r9a06g032_priv {int dummy; } ;
struct TYPE_3__ {int sel; } ;
struct r9a06g032_clkdesc {TYPE_1__ dual; int index; int name; } ;
struct TYPE_4__ {struct clk_init_data* init; } ;
struct r9a06g032_clk_bitsel {TYPE_2__ hw; int selector; int index; struct r9a06g032_priv* clocks; } ;
struct clk_init_data {char const** parent_names; int num_parents; int flags; int * ops; int name; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int VAR_2 ;
 struct clk* FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (struct r9a06g032_clk_bitsel*) ;
 struct r9a06g032_clk_bitsel* FUNC_3 (int,int ) ;

__attribute__((used)) static struct clk *
FUNC_4(struct r9a06g032_priv *VAR_3,
     const char *VAR_4,
     const struct r9a06g032_clkdesc *VAR_5)
{
 struct clk *VAR_6;
 struct r9a06g032_clk_bitsel *VAR_7;
 struct clk_init_data VAR_8;
 const char *VAR_9[2];


 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return ((void*)0);

 VAR_9[0] = VAR_4;
 VAR_9[1] = "clk_pll_usb";

 VAR_8.name = VAR_5->name;
 VAR_8.ops = &VAR_2;
 VAR_8.flags = VAR_0;
 VAR_8.parent_names = VAR_9;
 VAR_8.num_parents = 2;

 VAR_7->clocks = VAR_3;
 VAR_7->index = VAR_5->index;
 VAR_7->selector = VAR_5->dual.sel;
 VAR_7->hw.init = &VAR_8;

 VAR_6 = FUNC_1(((void*)0), &VAR_7->hw);
 if (FUNC_0(VAR_6)) {
  FUNC_2(VAR_7);
  return ((void*)0);
 }
 return VAR_6;
}
