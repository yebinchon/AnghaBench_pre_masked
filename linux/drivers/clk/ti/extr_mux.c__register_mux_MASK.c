
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
struct device {int dummy; } ;
struct clk_omap_reg {int dummy; } ;
struct TYPE_2__ {struct clk_init_data* init; } ;
struct clk_omap_mux {TYPE_1__ hw; int * table; void* flags; int latch; int mask; void* shift; int reg; } ;
struct clk_init_data {char const* name; unsigned long flags; char const* const* parent_names; void* num_parents; int * ops; } ;
struct clk {int dummy; } ;
typedef int s8 ;


 int VAR_0 ;
 struct clk* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk_omap_mux*) ;
 struct clk_omap_mux* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,struct clk_omap_reg*,int) ;
 int VAR_2 ;
 struct clk* FUNC_5 (struct device*,TYPE_1__*,char const*) ;

__attribute__((used)) static struct clk *FUNC_6(struct device *VAR_3, const char *VAR_4,
     const char * const *VAR_5,
     u8 VAR_6, unsigned long VAR_7,
     struct clk_omap_reg *VAR_8, u8 VAR_9, u32 VAR_10,
     s8 VAR_11, u8 VAR_12, u32 *VAR_13)
{
 struct clk_omap_mux *VAR_14;
 struct clk *VAR_15;
 struct clk_init_data VAR_16;


 VAR_14 = FUNC_3(sizeof(*VAR_14), VAR_1);
 if (!VAR_14)
  return FUNC_0(-VAR_0);

 VAR_16.name = VAR_4;
 VAR_16.ops = &VAR_2;
 VAR_16.flags = VAR_7;
 VAR_16.parent_names = VAR_5;
 VAR_16.num_parents = VAR_6;


 FUNC_4(&VAR_14->reg, VAR_8, sizeof(*VAR_8));
 VAR_14->shift = VAR_9;
 VAR_14->mask = VAR_10;
 VAR_14->latch = VAR_11;
 VAR_14->flags = VAR_12;
 VAR_14->table = VAR_13;
 VAR_14->hw.init = &VAR_16;

 VAR_15 = FUNC_5(VAR_3, &VAR_14->hw, VAR_4);

 if (FUNC_1(VAR_15))
  FUNC_2(VAR_14);

 return VAR_15;
}
