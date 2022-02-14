
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_hw {int dummy; } ;
struct clk_aux {scalar_t__ lock; int reg; TYPE_1__* masks; int rtbl_cnt; struct aux_rate_tbl* rtbl; } ;
struct aux_rate_tbl {unsigned long eq; unsigned long xscale; unsigned long yscale; } ;
struct TYPE_2__ {unsigned long eq_sel_mask; unsigned long eq_sel_shift; unsigned long xscale_sel_mask; unsigned long xscale_sel_shift; unsigned long yscale_sel_mask; unsigned long yscale_sel_shift; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk_hw*,unsigned long,unsigned long,int ,int ,int*) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,unsigned long) ;
 int FUNC_3 (scalar_t__,unsigned long) ;
 struct clk_aux* FUNC_4 (struct clk_hw*) ;
 int FUNC_5 (unsigned long,int ) ;

__attribute__((used)) static int FUNC_6(struct clk_hw *VAR_1, unsigned long VAR_2,
    unsigned long VAR_3)
{
 struct clk_aux *VAR_4 = FUNC_4(VAR_1);
 struct aux_rate_tbl *VAR_5 = VAR_4->rtbl;
 unsigned long VAR_6, VAR_7 = 0;
 int VAR_8;

 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_0, VAR_4->rtbl_cnt,
   &VAR_8);

 if (VAR_4->lock)
  FUNC_2(VAR_4->lock, VAR_7);

 VAR_6 = FUNC_1(VAR_4->reg) &
  ~(VAR_4->masks->eq_sel_mask << VAR_4->masks->eq_sel_shift);
 VAR_6 |= (VAR_5[VAR_8].eq & VAR_4->masks->eq_sel_mask) <<
  VAR_4->masks->eq_sel_shift;
 VAR_6 &= ~(VAR_4->masks->xscale_sel_mask << VAR_4->masks->xscale_sel_shift);
 VAR_6 |= (VAR_5[VAR_8].xscale & VAR_4->masks->xscale_sel_mask) <<
  VAR_4->masks->xscale_sel_shift;
 VAR_6 &= ~(VAR_4->masks->yscale_sel_mask << VAR_4->masks->yscale_sel_shift);
 VAR_6 |= (VAR_5[VAR_8].yscale & VAR_4->masks->yscale_sel_mask) <<
  VAR_4->masks->yscale_sel_shift;
 FUNC_5(VAR_6, VAR_4->reg);

 if (VAR_4->lock)
  FUNC_3(VAR_4->lock, VAR_7);

 return 0;
}
