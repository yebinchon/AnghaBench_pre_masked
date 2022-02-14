
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp3952_led_array {int regmap; int enable_gpio; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,int ) ;
 struct lp3952_led_array* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (struct i2c_client*,struct lp3952_led_array*) ;
 int FUNC_7 (struct lp3952_led_array*) ;
 int FUNC_8 (struct lp3952_led_array*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_4,
   const struct i2c_device_id *VAR_5)
{
 int VAR_6;
 struct lp3952_led_array *VAR_7;

 VAR_7 = FUNC_4(&VAR_4->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->client = VAR_4;

 VAR_7->enable_gpio = FUNC_3(&VAR_4->dev, "nrst",
        VAR_2);
 if (FUNC_0(VAR_7->enable_gpio)) {
  VAR_6 = FUNC_1(VAR_7->enable_gpio);
  FUNC_2(&VAR_4->dev, "Failed to enable gpio: %d\n", VAR_6);
  return VAR_6;
 }

 VAR_7->regmap = FUNC_5(VAR_4, &VAR_3);
 if (FUNC_0(VAR_7->regmap)) {
  int VAR_8 = FUNC_1(VAR_7->regmap);

  FUNC_2(&VAR_4->dev, "Failed to allocate register map: %d\n",
   VAR_8);
  return VAR_8;
 }

 FUNC_6(VAR_4, VAR_7);

 VAR_6 = FUNC_7(VAR_7);
 if (VAR_6) {
  FUNC_2(&VAR_4->dev, "Probe failed. Device not found (%d)\n",
   VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_8(VAR_7);
 if (VAR_6) {
  FUNC_2(&VAR_4->dev, "Unable to register led_classdev: %d\n",
   VAR_6);
  return VAR_6;
 }

 return 0;
}
