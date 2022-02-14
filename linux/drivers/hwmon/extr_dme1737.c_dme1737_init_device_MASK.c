
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int addr; } ;
struct dme1737_data {int type; int config; int config2; int has_features; int* pwm_config; int* pwm_acz; int vrm; int in_nominal; struct i2c_client* client; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (struct device*,char*) ;
 struct dme1737_data* FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*,char*,...) ;
 int FUNC_10 (struct device*,char*,...) ;

 scalar_t__ FUNC_11 (int,struct dme1737_data*) ;
 void* FUNC_12 (struct dme1737_data*,int ) ;
 int FUNC_13 (struct dme1737_data*,int ,int) ;
 int VAR_11 ;



 int FUNC_14 () ;

__attribute__((used)) static int FUNC_15(struct device *VAR_12)
{
 struct dme1737_data *VAR_13 = FUNC_8(VAR_12);
 struct i2c_client *VAR_14 = VAR_13->client;
 int VAR_15;
 u8 VAR_16;


 VAR_13->in_nominal = FUNC_4(VAR_13->type);

 VAR_13->config = FUNC_12(VAR_13, VAR_0);

 if (!(VAR_13->config & 0x01)) {
  if (!VAR_11) {
   FUNC_7(VAR_12,
    "Device is not monitoring. Use the force_start load parameter to override.\n");
   return -VAR_4;
  }


  VAR_13->config |= 0x01;
  FUNC_13(VAR_13, VAR_0, VAR_13->config);
 }

 if (!(VAR_13->config & 0x04)) {
  FUNC_7(VAR_12, "Device is not ready.\n");
  return -VAR_4;
 }





 if (VAR_14) {
  VAR_13->config2 = FUNC_12(VAR_13, VAR_1);

  if (VAR_13->config2 & 0x04)
   VAR_13->has_features |= FUNC_2(2);






  if (VAR_14->addr == 0x2e)
   VAR_13->has_features |= FUNC_2(3) | FUNC_3(2);







  if (FUNC_11(0x2e, VAR_13) &&
      FUNC_11(0x4e, VAR_13)) {
   FUNC_10(VAR_12,
     "Failed to query Super-IO for optional features.\n");
  }
 }


 VAR_13->has_features |= FUNC_2(0) | FUNC_2(1) | FUNC_3(0) | FUNC_3(1);


 switch (VAR_13->type) {
 case 131:
  VAR_13->has_features |= VAR_7 | VAR_8 | VAR_9 |
   VAR_10 | VAR_6;
  break;
 case 130:
  VAR_13->has_features |= VAR_7 | VAR_9 |
   VAR_10 | VAR_6 | FUNC_2(2) | FUNC_3(2);
  break;
 case 129:
  VAR_13->has_features |= VAR_9;
  break;
 case 128:
  VAR_13->has_features |= FUNC_2(2) | FUNC_3(2) | VAR_5;
  break;
 default:
  break;
 }

 FUNC_9(VAR_12,
   "Optional features: pwm3=%s, pwm5=%s, pwm6=%s, fan3=%s, fan4=%s, fan5=%s, fan6=%s.\n",
   (VAR_13->has_features & FUNC_3(2)) ? "yes" : "no",
   (VAR_13->has_features & FUNC_3(4)) ? "yes" : "no",
   (VAR_13->has_features & FUNC_3(5)) ? "yes" : "no",
   (VAR_13->has_features & FUNC_2(2)) ? "yes" : "no",
   (VAR_13->has_features & FUNC_2(3)) ? "yes" : "no",
   (VAR_13->has_features & FUNC_2(4)) ? "yes" : "no",
   (VAR_13->has_features & FUNC_2(5)) ? "yes" : "no");

 VAR_16 = FUNC_12(VAR_13, VAR_2);

 if (VAR_14 && VAR_16 != 0xa4) {
  FUNC_10(VAR_12,
    "Non-standard fan to pwm mapping: fan1->pwm%d, fan2->pwm%d, fan3->pwm%d, fan4->pwm%d. %s\n",
    (VAR_16 & 0x03) + 1, ((VAR_16 >> 2) & 0x03) + 1,
    ((VAR_16 >> 4) & 0x03) + 1, ((VAR_16 >> 6) & 0x03) + 1,
    VAR_3);
 } else if (!VAR_14 && VAR_16 != 0x24) {
  FUNC_10(VAR_12,
    "Non-standard fan to pwm mapping: fan1->pwm%d, fan2->pwm%d, fan3->pwm%d. %s\n",
    (VAR_16 & 0x03) + 1, ((VAR_16 >> 2) & 0x03) + 1,
    ((VAR_16 >> 4) & 0x03) + 1, VAR_3);
 }






 if (!(VAR_13->config & 0x02)) {
  for (VAR_15 = 0; VAR_15 < 3; VAR_15++) {
   VAR_13->pwm_config[VAR_15] = FUNC_12(VAR_13,
      FUNC_1(VAR_15));
   if ((VAR_13->has_features & FUNC_3(VAR_15)) &&
       (FUNC_5(VAR_13->pwm_config[VAR_15]) == -1)) {
    FUNC_9(VAR_12,
      "Switching pwm%d to manual mode.\n",
      VAR_15 + 1);
    VAR_13->pwm_config[VAR_15] = FUNC_6(1,
       VAR_13->pwm_config[VAR_15]);
    FUNC_13(VAR_13, FUNC_0(VAR_15), 0);
    FUNC_13(VAR_13,
           FUNC_1(VAR_15),
           VAR_13->pwm_config[VAR_15]);
   }
  }
 }


 VAR_13->pwm_acz[0] = 1;
 VAR_13->pwm_acz[1] = 2;
 VAR_13->pwm_acz[2] = 4;


 if (VAR_13->has_features & VAR_8)
  VAR_13->vrm = FUNC_14();

 return 0;
}
