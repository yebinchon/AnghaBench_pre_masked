
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct r9a06g032_priv {int dummy; } ;
struct TYPE_6__ {int r2; int g2; int r1; int g1; } ;
struct r9a06g032_clkdesc {int name; TYPE_2__ dual; int index; } ;
struct TYPE_7__ {struct clk_init_data* init; } ;
struct r9a06g032_clk_dualgate {TYPE_3__ hw; TYPE_1__* gate; int selector; int index; struct r9a06g032_priv* clocks; } ;
struct clk_init_data {char const** parent_names; int num_parents; int flags; int * ops; int name; } ;
struct clk {int dummy; } ;
struct TYPE_5__ {int reset; int gate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 struct clk* FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (struct r9a06g032_clk_dualgate*) ;
 struct r9a06g032_clk_dualgate* FUNC_3 (int,int ) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int VAR_3 ;

__attribute__((used)) static struct clk *
FUNC_6(struct r9a06g032_priv *VAR_4,
       const char *VAR_5,
       const struct r9a06g032_clkdesc *VAR_6,
       uint16_t VAR_7)
{
 struct r9a06g032_clk_dualgate *VAR_8;
 struct clk *VAR_9;
 struct clk_init_data VAR_10;


 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return ((void*)0);
 VAR_8->clocks = VAR_4;
 VAR_8->index = VAR_6->index;
 VAR_8->selector = VAR_7;
 VAR_8->gate[0].gate = VAR_6->dual.g1;
 VAR_8->gate[0].reset = VAR_6->dual.r1;
 VAR_8->gate[1].gate = VAR_6->dual.g2;
 VAR_8->gate[1].reset = VAR_6->dual.r2;

 VAR_10.name = VAR_6->name;
 VAR_10.ops = &VAR_3;
 VAR_10.flags = VAR_1;
 VAR_10.parent_names = &VAR_5;
 VAR_10.num_parents = 1;
 VAR_8->hw.init = &VAR_10;





 if (FUNC_5(&VAR_8->hw)) {
  VAR_10.flags |= VAR_0;
  FUNC_4("%s was enabled, making read-only\n", VAR_6->name);
 }

 VAR_9 = FUNC_1(((void*)0), &VAR_8->hw);
 if (FUNC_0(VAR_9)) {
  FUNC_2(VAR_8);
  return ((void*)0);
 }
 return VAR_9;
}
