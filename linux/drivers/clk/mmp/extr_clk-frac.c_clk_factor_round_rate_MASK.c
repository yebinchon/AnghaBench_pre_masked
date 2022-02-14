
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mmp_clk_factor {int ftbl_cnt; TYPE_2__* masks; TYPE_1__* ftbl; } ;
struct clk_hw {int dummy; } ;
struct TYPE_4__ {unsigned long factor; } ;
struct TYPE_3__ {unsigned long den; unsigned long num; } ;


 struct mmp_clk_factor* FUNC_0 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_1(struct clk_hw *VAR_0, unsigned long VAR_1,
  unsigned long *VAR_2)
{
 struct mmp_clk_factor *VAR_3 = FUNC_0(VAR_0);
 unsigned long VAR_4 = 0, VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3->ftbl_cnt; VAR_6++) {
  VAR_5 = VAR_4;
  VAR_4 = (((*VAR_2 / 10000) * VAR_3->ftbl[VAR_6].den) /
   (VAR_3->ftbl[VAR_6].num * VAR_3->masks->factor)) * 10000;
  if (VAR_4 > VAR_1)
   break;
 }
 if ((VAR_6 == 0) || (VAR_6 == VAR_3->ftbl_cnt)) {
  return VAR_4;
 } else {
  if ((VAR_1 - VAR_5) > (VAR_4 - VAR_1))
   return VAR_4;
  else
   return VAR_5;
 }
}
