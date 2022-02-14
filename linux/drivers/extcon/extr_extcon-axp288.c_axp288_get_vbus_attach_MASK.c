
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct axp288_extcon_info {int dev; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static bool FUNC_2(struct axp288_extcon_info *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_3 = FUNC_1(VAR_2->regmap, VAR_0, &VAR_4);
 if (VAR_3 < 0) {
  FUNC_0(VAR_2->dev, "failed to read vbus status\n");
  return 0;
 }

 return !!(VAR_4 & VAR_1);
}
