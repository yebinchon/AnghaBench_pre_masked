
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device {int dummy; } ;
struct bmg160_data {int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 struct device* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct bmg160_data *VAR_1, u8 VAR_2)
{
 struct device *VAR_3 = FUNC_1(VAR_1->regmap);
 int VAR_4;

 VAR_4 = FUNC_2(VAR_1->regmap, VAR_0, VAR_2);
 if (VAR_4 < 0) {
  FUNC_0(VAR_3, "Error writing reg_pmu_lpw\n");
  return VAR_4;
 }

 return 0;
}
