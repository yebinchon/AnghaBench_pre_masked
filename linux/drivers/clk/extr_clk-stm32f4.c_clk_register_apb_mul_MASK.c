
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct device {int dummy; } ;
struct clk_init_data {char const* name; unsigned long flags; char const** parent_names; int num_parents; int * ops; } ;
struct TYPE_2__ {struct clk_init_data* init; } ;
struct clk_apb_mul {TYPE_1__ hw; int bit_idx; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 struct clk* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct clk*) ;
 int VAR_2 ;
 struct clk* FUNC_2 (struct device*,TYPE_1__*) ;
 int FUNC_3 (struct clk_apb_mul*) ;
 struct clk_apb_mul* FUNC_4 (int,int ) ;

__attribute__((used)) static struct clk *FUNC_5(struct device *VAR_3, const char *VAR_4,
     const char *VAR_5,
     unsigned long VAR_6, u8 VAR_7)
{
 struct clk_apb_mul *VAR_8;
 struct clk_init_data VAR_9;
 struct clk *VAR_10;

 VAR_8 = FUNC_4(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return FUNC_0(-VAR_0);

 VAR_8->bit_idx = VAR_7;
 VAR_8->hw.init = &VAR_9;

 VAR_9.name = VAR_4;
 VAR_9.ops = &VAR_2;
 VAR_9.flags = VAR_6;
 VAR_9.parent_names = &VAR_5;
 VAR_9.num_parents = 1;

 VAR_10 = FUNC_2(VAR_3, &VAR_8->hw);

 if (FUNC_1(VAR_10))
  FUNC_3(VAR_8);

 return VAR_10;
}
