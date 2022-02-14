
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct device {int dummy; } ;
struct clk_omap_reg {int dummy; } ;
struct TYPE_2__ {struct clk_init_data* init; } ;
struct clk_omap_divider {int shift; int width; int flags; TYPE_1__ hw; struct clk_div_table const* table; int latch; int reg; } ;
struct clk_init_data {char const* name; unsigned long flags; char const** parent_names; int num_parents; int * ops; } ;
struct clk_div_table {int dummy; } ;
struct clk {int dummy; } ;
typedef int s8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct clk* FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk_omap_divider*) ;
 struct clk_omap_divider* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,struct clk_omap_reg*,int) ;
 int FUNC_5 (char*) ;
 int VAR_4 ;
 struct clk* FUNC_6 (struct device*,TYPE_1__*,char const*) ;

__attribute__((used)) static struct clk *FUNC_7(struct device *VAR_5, const char *VAR_6,
         const char *VAR_7,
         unsigned long VAR_8,
         struct clk_omap_reg *VAR_9,
         u8 VAR_10, u8 VAR_11, s8 VAR_12,
         u8 VAR_13,
         const struct clk_div_table *VAR_14)
{
 struct clk_omap_divider *VAR_15;
 struct clk *VAR_16;
 struct clk_init_data VAR_17;

 if (VAR_13 & VAR_0) {
  if (VAR_11 + VAR_10 > 16) {
   FUNC_5("divider value exceeds LOWORD field\n");
   return FUNC_0(-VAR_1);
  }
 }


 VAR_15 = FUNC_3(sizeof(*VAR_15), VAR_3);
 if (!VAR_15)
  return FUNC_0(-VAR_2);

 VAR_17.name = VAR_6;
 VAR_17.ops = &VAR_4;
 VAR_17.flags = VAR_8;
 VAR_17.parent_names = (VAR_7 ? &VAR_7 : ((void*)0));
 VAR_17.num_parents = (VAR_7 ? 1 : 0);


 FUNC_4(&VAR_15->reg, VAR_9, sizeof(*VAR_9));
 VAR_15->shift = VAR_10;
 VAR_15->width = VAR_11;
 VAR_15->latch = VAR_12;
 VAR_15->flags = VAR_13;
 VAR_15->hw.init = &VAR_17;
 VAR_15->table = VAR_14;


 VAR_16 = FUNC_6(VAR_5, &VAR_15->hw, VAR_6);

 if (FUNC_1(VAR_16))
  FUNC_2(VAR_15);

 return VAR_16;
}
