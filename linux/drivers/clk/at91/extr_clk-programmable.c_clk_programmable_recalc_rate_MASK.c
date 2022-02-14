
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_programmable_layout {scalar_t__ is_pres_direct; } ;
struct clk_programmable {int id; int regmap; struct clk_programmable_layout* layout; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 unsigned long FUNC_1 (struct clk_programmable_layout const*,unsigned int) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 struct clk_programmable* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_4(struct clk_hw *VAR_0,
        unsigned long VAR_1)
{
 struct clk_programmable *VAR_2 = FUNC_3(VAR_0);
 const struct clk_programmable_layout *VAR_3 = VAR_2->layout;
 unsigned int VAR_4;
 unsigned long VAR_5;

 FUNC_2(VAR_2->regmap, FUNC_0(VAR_2->id), &VAR_4);

 if (VAR_3->is_pres_direct)
  VAR_5 = VAR_1 / (FUNC_1(VAR_3, VAR_4) + 1);
 else
  VAR_5 = VAR_1 >> FUNC_1(VAR_3, VAR_4);

 return VAR_5;
}
