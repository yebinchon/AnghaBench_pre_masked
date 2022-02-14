
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_programmable_layout {int pres_mask; int pres_shift; scalar_t__ is_pres_direct; } ;
struct clk_programmable {int id; int regmap; struct clk_programmable_layout* layout; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ,int ,int,int) ;
 struct clk_programmable* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_1, unsigned long VAR_2,
         unsigned long VAR_3)
{
 struct clk_programmable *VAR_4 = FUNC_3(VAR_1);
 const struct clk_programmable_layout *VAR_5 = VAR_4->layout;
 unsigned long VAR_6 = VAR_3 / VAR_2;
 int VAR_7 = 0;

 if (!VAR_6)
  return -VAR_0;

 if (VAR_5->is_pres_direct) {
  VAR_7 = VAR_6 - 1;

  if (VAR_7 > VAR_5->pres_mask)
   return -VAR_0;
 } else {
  VAR_7 = FUNC_1(VAR_6) - 1;

  if (VAR_6 != (1 << VAR_7))
   return -VAR_0;

  if (VAR_7 >= VAR_5->pres_mask)
   return -VAR_0;
 }

 FUNC_2(VAR_4->regmap, FUNC_0(VAR_4->id),
      VAR_5->pres_mask << VAR_5->pres_shift,
      VAR_7 << VAR_5->pres_shift);

 return 0;
}
