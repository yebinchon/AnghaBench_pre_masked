
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct clk_programmable_layout {unsigned int css_mask; scalar_t__ have_slck_mck; } ;
struct clk_programmable {int id; int regmap; struct clk_programmable_layout* layout; } ;
struct clk_hw {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 struct clk_programmable* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_3(struct clk_hw *VAR_2)
{
 struct clk_programmable *VAR_3 = FUNC_2(VAR_2);
 const struct clk_programmable_layout *VAR_4 = VAR_3->layout;
 unsigned int VAR_5;
 u8 VAR_6;

 FUNC_1(VAR_3->regmap, FUNC_0(VAR_3->id), &VAR_5);

 VAR_6 = VAR_5 & VAR_4->css_mask;

 if (VAR_4->have_slck_mck && (VAR_5 & VAR_0) && !VAR_6)
  VAR_6 = VAR_1 + 1;

 return VAR_6;
}
