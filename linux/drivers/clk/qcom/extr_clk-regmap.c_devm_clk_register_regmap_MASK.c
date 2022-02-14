
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {struct device* parent; } ;
struct clk_regmap {int hw; void* regmap; } ;


 void* FUNC_0 (struct device*,int *) ;
 int FUNC_1 (struct device*,int *) ;

int FUNC_2(struct device *VAR_0, struct clk_regmap *VAR_1)
{
 if (VAR_0 && FUNC_0(VAR_0, ((void*)0)))
  VAR_1->regmap = FUNC_0(VAR_0, ((void*)0));
 else if (VAR_0 && VAR_0->parent)
  VAR_1->regmap = FUNC_0(VAR_0->parent, ((void*)0));

 return FUNC_1(VAR_0, &VAR_1->hw);
}
