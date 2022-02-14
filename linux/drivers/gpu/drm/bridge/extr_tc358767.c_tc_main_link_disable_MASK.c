
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_data {int regmap; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct tc_data *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_2->dev, "link disable\n");

 VAR_3 = FUNC_1(VAR_2->regmap, VAR_1, 0);
 if (VAR_3)
  return VAR_3;

 return FUNC_1(VAR_2->regmap, VAR_0, 0);
}
