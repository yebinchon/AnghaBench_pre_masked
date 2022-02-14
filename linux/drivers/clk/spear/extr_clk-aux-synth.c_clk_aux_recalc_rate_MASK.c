
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_hw {int dummy; } ;
struct clk_aux {TYPE_1__* masks; scalar_t__ lock; int reg; } ;
struct TYPE_2__ {unsigned int eq_sel_shift; unsigned int eq_sel_mask; unsigned int eq1_mask; unsigned int xscale_sel_shift; unsigned int xscale_sel_mask; unsigned int yscale_sel_shift; unsigned int yscale_sel_mask; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,unsigned long) ;
 int FUNC_2 (scalar_t__,unsigned long) ;
 struct clk_aux* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_4(struct clk_hw *VAR_0,
  unsigned long VAR_1)
{
 struct clk_aux *VAR_2 = FUNC_3(VAR_0);
 unsigned int VAR_3 = 1, VAR_4 = 1, VAR_5, VAR_6;
 unsigned long VAR_7 = 0;

 if (VAR_2->lock)
  FUNC_1(VAR_2->lock, VAR_7);

 VAR_5 = FUNC_0(VAR_2->reg);

 if (VAR_2->lock)
  FUNC_2(VAR_2->lock, VAR_7);

 VAR_6 = (VAR_5 >> VAR_2->masks->eq_sel_shift) & VAR_2->masks->eq_sel_mask;
 if (VAR_6 == VAR_2->masks->eq1_mask)
  VAR_4 = 2;


 VAR_3 = (VAR_5 >> VAR_2->masks->xscale_sel_shift) &
  VAR_2->masks->xscale_sel_mask;


 VAR_4 *= (VAR_5 >> VAR_2->masks->yscale_sel_shift) &
  VAR_2->masks->yscale_sel_mask;

 if (!VAR_4)
  return 0;

 return (((VAR_1 / 10000) * VAR_3) / VAR_4) * 10000;
}
