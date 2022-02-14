
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct clk_programmable_layout {unsigned int css_mask; scalar_t__ have_slck_mck; } ;
struct clk_programmable {int id; int regmap; struct clk_programmable_layout* layout; } ;
struct clk_hw {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (int ,int ,unsigned int,unsigned int) ;
 struct clk_programmable* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_3, u8 VAR_4)
{
 struct clk_programmable *VAR_5 = FUNC_2(VAR_3);
 const struct clk_programmable_layout *VAR_6 = VAR_5->layout;
 unsigned int VAR_7 = VAR_6->css_mask;
 unsigned int VAR_8 = VAR_4;

 if (VAR_6->have_slck_mck)
  VAR_7 |= VAR_0;

 if (VAR_4 > VAR_6->css_mask) {
  if (VAR_4 > VAR_2 && !VAR_6->have_slck_mck)
   return -VAR_1;

  VAR_8 |= VAR_0;
 }

 FUNC_1(VAR_5->regmap, FUNC_0(VAR_5->id), VAR_7, VAR_8);

 return 0;
}
