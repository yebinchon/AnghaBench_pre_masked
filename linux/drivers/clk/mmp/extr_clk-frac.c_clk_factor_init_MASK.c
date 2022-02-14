
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mmp_clk_factor_masks {int num_shift; int num_mask; int den_shift; int den_mask; } ;
struct mmp_clk_factor {int ftbl_cnt; scalar_t__ lock; int base; TYPE_1__* ftbl; struct mmp_clk_factor_masks* masks; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int den; int num; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,unsigned long) ;
 int FUNC_2 (scalar_t__,unsigned long) ;
 struct mmp_clk_factor* FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static void FUNC_5(struct clk_hw *VAR_0)
{
 struct mmp_clk_factor *VAR_1 = FUNC_3(VAR_0);
 struct mmp_clk_factor_masks *VAR_2 = VAR_1->masks;
 u32 VAR_3, VAR_4, VAR_5;
 int VAR_6;
 unsigned long VAR_7 = 0;

 if (VAR_1->lock)
  FUNC_1(VAR_1->lock, VAR_7);

 VAR_3 = FUNC_0(VAR_1->base);


 VAR_4 = (VAR_3 >> VAR_2->num_shift) & VAR_2->num_mask;


 VAR_5 = (VAR_3 >> VAR_2->den_shift) & VAR_2->den_mask;

 for (VAR_6 = 0; VAR_6 < VAR_1->ftbl_cnt; VAR_6++)
  if (VAR_5 == VAR_1->ftbl[VAR_6].den && VAR_4 == VAR_1->ftbl[VAR_6].num)
   break;

 if (VAR_6 >= VAR_1->ftbl_cnt) {
  VAR_3 &= ~(VAR_2->num_mask << VAR_2->num_shift);
  VAR_3 |= (VAR_1->ftbl[0].num & VAR_2->num_mask) <<
   VAR_2->num_shift;

  VAR_3 &= ~(VAR_2->den_mask << VAR_2->den_shift);
  VAR_3 |= (VAR_1->ftbl[0].den & VAR_2->den_mask) <<
   VAR_2->den_shift;

  FUNC_4(VAR_3, VAR_1->base);
 }

 if (VAR_1->lock)
  FUNC_2(VAR_1->lock, VAR_7);
}
