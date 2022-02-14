
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ina2xx_platform_data {scalar_t__ shunt_uohms; } ;
struct ina209_data {int calibration_orig; int config_orig; int update_interval; } ;
struct TYPE_2__ {int of_node; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int,int) ;
 struct ina2xx_platform_data* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int*) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_6,
         struct ina209_data *VAR_7)
{
 struct ina2xx_platform_data *VAR_8 = FUNC_1(&VAR_6->dev);
 u32 VAR_9;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_6, VAR_1);
 if (VAR_10 < 0)
  return VAR_10;
 VAR_7->calibration_orig = VAR_10;

 VAR_10 = FUNC_2(VAR_6, VAR_2);
 if (VAR_10 < 0)
  return VAR_10;
 VAR_7->config_orig = VAR_10;

 if (VAR_8) {
  if (VAR_8->shunt_uohms <= 0)
   return -VAR_0;
  VAR_9 = VAR_8->shunt_uohms;
 } else if (!FUNC_5(VAR_6->dev.of_node, "shunt-resistor",
      &VAR_9)) {
  if (VAR_9 == 0)
   return -VAR_0;
 } else {
  VAR_9 = VAR_7->calibration_orig ?
    40960000 / VAR_7->calibration_orig : VAR_4;
 }

 FUNC_3(VAR_6, VAR_2,
         VAR_3);
 VAR_7->update_interval = FUNC_4(VAR_3);





 FUNC_3(VAR_6, VAR_1,
         FUNC_0(40960000 / VAR_9, 1, 65535));


 FUNC_2(VAR_6, VAR_5);

 return 0;
}
