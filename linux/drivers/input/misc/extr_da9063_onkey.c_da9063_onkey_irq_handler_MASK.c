
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da906x_chip_config {unsigned int onkey_nonkey_mask; int onkey_status; } ;
struct da9063_onkey {int dev; int input; int work; scalar_t__ key_power; int regmap; struct da906x_chip_config* config; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,unsigned int*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_2, void *VAR_3)
{
 struct da9063_onkey *VAR_4 = VAR_3;
 const struct da906x_chip_config *VAR_5 = VAR_4->config;
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_3(VAR_4->regmap,
       VAR_5->onkey_status,
       &VAR_6);
 if (VAR_4->key_power && !VAR_7 && (VAR_6 & VAR_5->onkey_nonkey_mask)) {
  FUNC_1(VAR_4->input, VAR_1, 1);
  FUNC_2(VAR_4->input);
  FUNC_4(&VAR_4->work, 0);
  FUNC_0(VAR_4->dev, "KEY_POWER long press.\n");
 } else {
  FUNC_1(VAR_4->input, VAR_1, 1);
  FUNC_2(VAR_4->input);
  FUNC_1(VAR_4->input, VAR_1, 0);
  FUNC_2(VAR_4->input);
  FUNC_0(VAR_4->dev, "KEY_POWER short press.\n");
 }

 return VAR_0;
}
