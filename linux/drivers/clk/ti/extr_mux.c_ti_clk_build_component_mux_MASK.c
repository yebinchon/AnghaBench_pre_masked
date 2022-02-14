
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ti_clk_mux {int flags; int num_parents; int reg; int module; int bit_shift; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int offset; int index; } ;
struct clk_omap_mux {int mask; struct clk_hw hw; int flags; TYPE_1__ reg; int latch; int shift; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct clk_hw* FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 struct clk_omap_mux* FUNC_2 (int,int ) ;

struct clk_hw *FUNC_3(struct ti_clk_mux *VAR_5)
{
 struct clk_omap_mux *VAR_6;
 int VAR_7;

 if (!VAR_5)
  return ((void*)0);

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_4);
 if (!VAR_6)
  return FUNC_0(-VAR_3);

 VAR_6->shift = VAR_5->bit_shift;
 VAR_6->latch = -VAR_2;

 VAR_6->reg.index = VAR_5->module;
 VAR_6->reg.offset = VAR_5->reg;

 if (VAR_5->flags & VAR_0)
  VAR_6->flags |= VAR_1;

 VAR_7 = VAR_5->num_parents;

 VAR_6->mask = VAR_7 - 1;
 VAR_6->mask = (1 << FUNC_1(VAR_6->mask)) - 1;

 return &VAR_6->hw;
}
