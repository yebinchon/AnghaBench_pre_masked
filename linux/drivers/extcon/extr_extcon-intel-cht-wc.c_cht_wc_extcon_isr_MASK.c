
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cht_wc_extcon_data {int dev; int regmap; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cht_wc_extcon_data*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct cht_wc_extcon_data *VAR_5 = VAR_4;
 int VAR_6, VAR_7;

 VAR_6 = FUNC_2(VAR_5->regmap, VAR_0, &VAR_7);
 if (VAR_6) {
  FUNC_1(VAR_5->dev, "Error reading irqs: %d\n", VAR_6);
  return VAR_2;
 }

 FUNC_0(VAR_5);

 VAR_6 = FUNC_3(VAR_5->regmap, VAR_0, VAR_7);
 if (VAR_6) {
  FUNC_1(VAR_5->dev, "Error writing irqs: %d\n", VAR_6);
  return VAR_2;
 }

 return VAR_1;
}
