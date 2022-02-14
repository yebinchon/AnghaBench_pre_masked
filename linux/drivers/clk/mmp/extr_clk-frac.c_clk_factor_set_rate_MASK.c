
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmp_clk_factor_masks {unsigned long factor; unsigned long num_mask; unsigned long num_shift; unsigned long den_mask; unsigned long den_shift; } ;
struct mmp_clk_factor {int ftbl_cnt; scalar_t__ lock; int base; TYPE_1__* ftbl; struct mmp_clk_factor_masks* masks; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {unsigned long den; unsigned long num; } ;


 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,unsigned long) ;
 int FUNC_2 (scalar_t__,unsigned long) ;
 struct mmp_clk_factor* FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (unsigned long,int ) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_0, unsigned long VAR_1,
    unsigned long VAR_2)
{
 struct mmp_clk_factor *VAR_3 = FUNC_3(VAR_0);
 struct mmp_clk_factor_masks *VAR_4 = VAR_3->masks;
 int VAR_5;
 unsigned long VAR_6;
 unsigned long VAR_7 = 0;
 unsigned long VAR_8 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_3->ftbl_cnt; VAR_5++) {
  VAR_7 = (((VAR_2 / 10000) * VAR_3->ftbl[VAR_5].den) /
   (VAR_3->ftbl[VAR_5].num * VAR_3->masks->factor)) * 10000;
  if (VAR_7 > VAR_1)
   break;
 }
 if (VAR_5 > 0)
  VAR_5--;

 if (VAR_3->lock)
  FUNC_1(VAR_3->lock, VAR_8);

 VAR_6 = FUNC_0(VAR_3->base);

 VAR_6 &= ~(VAR_4->num_mask << VAR_4->num_shift);
 VAR_6 |= (VAR_3->ftbl[VAR_5].num & VAR_4->num_mask) << VAR_4->num_shift;

 VAR_6 &= ~(VAR_4->den_mask << VAR_4->den_shift);
 VAR_6 |= (VAR_3->ftbl[VAR_5].den & VAR_4->den_mask) << VAR_4->den_shift;

 FUNC_4(VAR_6, VAR_3->base);

 if (VAR_3->lock)
  FUNC_2(VAR_3->lock, VAR_8);

 return 0;
}
