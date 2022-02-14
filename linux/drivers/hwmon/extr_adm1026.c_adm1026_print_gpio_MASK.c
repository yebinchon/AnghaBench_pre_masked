
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct adm1026_data {int config2; int* gpio_config; int config3; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 struct adm1026_data* FUNC_1 (struct i2c_client*) ;

__attribute__((used)) static void FUNC_2(struct i2c_client *VAR_1)
{
 struct adm1026_data *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 FUNC_0(&VAR_1->dev, "GPIO config is:\n");
 for (VAR_3 = 0; VAR_3 <= 7; ++VAR_3) {
  if (VAR_2->config2 & (1 << VAR_3)) {
   FUNC_0(&VAR_1->dev, "\t%sGP%s%d\n",
    VAR_2->gpio_config[VAR_3] & 0x02 ? "" : "!",
    VAR_2->gpio_config[VAR_3] & 0x01 ? "OUT" : "IN",
    VAR_3);
  } else {
   FUNC_0(&VAR_1->dev, "\tFAN%d\n", VAR_3);
  }
 }
 for (VAR_3 = 8; VAR_3 <= 15; ++VAR_3) {
  FUNC_0(&VAR_1->dev, "\t%sGP%s%d\n",
   VAR_2->gpio_config[VAR_3] & 0x02 ? "" : "!",
   VAR_2->gpio_config[VAR_3] & 0x01 ? "OUT" : "IN",
   VAR_3);
 }
 if (VAR_2->config3 & VAR_0) {
  FUNC_0(&VAR_1->dev, "\t%sGP%s16\n",
   VAR_2->gpio_config[16] & 0x02 ? "" : "!",
   VAR_2->gpio_config[16] & 0x01 ? "OUT" : "IN");
 } else {

  FUNC_0(&VAR_1->dev, "\tTHERM\n");
 }
}
