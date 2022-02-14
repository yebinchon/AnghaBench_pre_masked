
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_regmap_div {int width; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 long FUNC_0 (struct clk_hw*,unsigned long,unsigned long*,int *,int ,int ) ;
 struct clk_regmap_div* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_2(struct clk_hw *VAR_1, unsigned long VAR_2,
      unsigned long *VAR_3)
{
 struct clk_regmap_div *VAR_4 = FUNC_1(VAR_1);

 return FUNC_0(VAR_1, VAR_2, VAR_3, ((void*)0), VAR_4->width,
      VAR_0);
}
