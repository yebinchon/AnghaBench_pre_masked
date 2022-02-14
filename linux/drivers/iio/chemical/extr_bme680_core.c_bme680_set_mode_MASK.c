
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct bme680_data {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 struct device* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct bme680_data *VAR_4, bool VAR_5)
{
 struct device *VAR_6 = FUNC_1(VAR_4->regmap);
 int VAR_7;

 if (VAR_5) {
  VAR_7 = FUNC_2(VAR_4->regmap, VAR_3,
     VAR_1, VAR_0);
  if (VAR_7 < 0)
   FUNC_0(VAR_6, "failed to set forced mode\n");

 } else {
  VAR_7 = FUNC_2(VAR_4->regmap, VAR_3,
     VAR_1, VAR_2);
  if (VAR_7 < 0)
   FUNC_0(VAR_6, "failed to set sleep mode\n");

 }

 return VAR_7;
}
