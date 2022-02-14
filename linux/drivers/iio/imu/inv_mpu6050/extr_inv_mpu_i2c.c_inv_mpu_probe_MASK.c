
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct inv_mpu6050_state {int chip_type; TYPE_3__* muxc; } ;
struct i2c_device_id {char* name; scalar_t__ driver_data; } ;
struct TYPE_10__ {scalar_t__ of_node; } ;
struct i2c_client {char* name; TYPE_1__ dev; int adapter; int irq; } ;
typedef enum inv_devices { ____Placeholder_inv_devices } inv_devices ;
struct TYPE_11__ {int priv; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 scalar_t__ FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct regmap*) ;
 int FUNC_3 (TYPE_1__*,char*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 struct regmap* FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_3__*,int ,int ,int ) ;
 TYPE_3__* FUNC_8 (int ,TYPE_1__*,int,int ,int,int ,int ) ;
 int FUNC_9 (TYPE_3__*) ;
 struct inv_mpu6050_state* FUNC_10 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (struct i2c_client*) ;
 int FUNC_12 (struct regmap*,int ,char const*,int *,int) ;
 char* FUNC_13 (TYPE_1__*,int*) ;
 int VAR_9 ;
 scalar_t__ FUNC_14 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_15(struct i2c_client *VAR_10,
    const struct i2c_device_id *VAR_11)
{
 struct inv_mpu6050_state *VAR_12;
 int VAR_13;
 enum inv_devices VAR_14;
 struct regmap *VAR_15;
 const char *VAR_16;

 if (!FUNC_6(VAR_10->adapter,
         VAR_4))
  return -VAR_3;

 if (VAR_10->dev.of_node) {
  VAR_14 = (enum inv_devices)
   FUNC_14(&VAR_10->dev);
  VAR_16 = VAR_10->name;
 } else if (VAR_11) {
  VAR_14 = (enum inv_devices)
   VAR_11->driver_data;
  VAR_16 = VAR_11->name;
 } else if (FUNC_0(&VAR_10->dev)) {
  VAR_16 = FUNC_13(&VAR_10->dev, &VAR_14);
  if (!VAR_16)
   return -VAR_0;
 } else {
  return -VAR_2;
 }

 VAR_15 = FUNC_5(VAR_10, &VAR_9);
 if (FUNC_1(VAR_15)) {
  FUNC_3(&VAR_10->dev, "Failed to register i2c regmap %d\n",
   (int)FUNC_2(VAR_15));
  return FUNC_2(VAR_15);
 }

 VAR_13 = FUNC_12(VAR_15, VAR_10->irq, VAR_16,
        ((void*)0), VAR_14);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_12 = FUNC_10(FUNC_4(&VAR_10->dev));
 switch (VAR_12->chip_type) {
 case 128:
 case 129:

  break;
 default:

  VAR_12->muxc = FUNC_8(VAR_10->adapter, &VAR_10->dev,
      1, 0, VAR_6 | VAR_5,
      VAR_8,
      VAR_7);
  if (!VAR_12->muxc)
   return -VAR_1;
  VAR_12->muxc->priv = FUNC_4(&VAR_10->dev);
  VAR_13 = FUNC_7(VAR_12->muxc, 0, 0, 0);
  if (VAR_13)
   return VAR_13;
  VAR_13 = FUNC_11(VAR_10);
  if (VAR_13)
   goto out_del_mux;
  break;
 }

 return 0;

out_del_mux:
 FUNC_9(VAR_12->muxc);
 return VAR_13;
}
