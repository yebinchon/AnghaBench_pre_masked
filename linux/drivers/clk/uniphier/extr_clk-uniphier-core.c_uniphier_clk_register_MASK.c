
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mux; int gate; int rate; int factor; int cpugear; } ;
struct uniphier_clk_data {int type; TYPE_1__ data; int name; } ;
struct regmap {int dummy; } ;
struct device {int dummy; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 struct clk_hw* FUNC_0 (int ) ;





 int FUNC_1 (struct device*,char*) ;
 struct clk_hw* FUNC_2 (struct device*,struct regmap*,int ,int *) ;
 struct clk_hw* FUNC_3 (struct device*,int ,int *) ;
 struct clk_hw* FUNC_4 (struct device*,int ,int *) ;
 struct clk_hw* FUNC_5 (struct device*,struct regmap*,int ,int *) ;
 struct clk_hw* FUNC_6 (struct device*,struct regmap*,int ,int *) ;

__attribute__((used)) static struct clk_hw *FUNC_7(struct device *VAR_1,
         struct regmap *VAR_2,
     const struct uniphier_clk_data *VAR_3)
{
 switch (VAR_3->type) {
 case 132:
  return FUNC_2(VAR_1, VAR_2, VAR_3->name,
           &VAR_3->data.cpugear);
 case 131:
  return FUNC_3(VAR_1, VAR_3->name,
         &VAR_3->data.factor);
 case 130:
  return FUNC_4(VAR_1, VAR_3->name,
       &VAR_3->data.rate);
 case 129:
  return FUNC_5(VAR_1, VAR_2, VAR_3->name,
        &VAR_3->data.gate);
 case 128:
  return FUNC_6(VAR_1, VAR_2, VAR_3->name,
       &VAR_3->data.mux);
 default:
  FUNC_1(VAR_1, "unsupported clock type\n");
  return FUNC_0(-VAR_0);
 }
}
