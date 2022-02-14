
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct bmg160_data {int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*) ;
 struct device* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct bmg160_data *VAR_1, int VAR_2)
{
 struct device *VAR_3 = FUNC_2(VAR_1->regmap);
 int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_4 = FUNC_3(VAR_1->regmap, VAR_0, VAR_5);
 if (VAR_4 < 0) {
  FUNC_1(VAR_3, "Error writing reg_pmu_bw\n");
  return VAR_4;
 }

 return 0;
}
