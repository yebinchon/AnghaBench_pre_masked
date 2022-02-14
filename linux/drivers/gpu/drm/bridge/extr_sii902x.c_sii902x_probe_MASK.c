
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int * timings; int of_node; int * funcs; } ;
struct sii902x {TYPE_1__* i2cmux; TYPE_3__ bridge; int regmap; int mutex; int reset_gpio; struct i2c_client* i2c; } ;
struct i2c_device_id {int dummy; } ;
struct device {int of_node; } ;
struct i2c_client {int adapter; int irq; struct device dev; } ;
struct TYPE_4__ {struct sii902x* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,char*,int ) ;
 struct sii902x* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct i2c_client*,int *) ;
 int FUNC_8 (struct device*,int ,int *,int ,int ,int ,struct sii902x*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (TYPE_1__*,int ,int ,int ) ;
 TYPE_1__* FUNC_12 (int ,struct device*,int,int ,int ,int ,int ) ;
 int FUNC_13 (struct i2c_client*,struct sii902x*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,int ,int**,int) ;
 int FUNC_16 (int ,int ,unsigned int*) ;
 int FUNC_17 (int ,int ,unsigned int) ;
 int FUNC_18 (struct sii902x*,struct device*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_19 (struct sii902x*) ;

__attribute__((used)) static int FUNC_20(struct i2c_client *VAR_18,
    const struct i2c_device_id *VAR_19)
{
 struct device *VAR_20 = &VAR_18->dev;
 unsigned int VAR_21 = 0;
 struct sii902x *VAR_22;
 u8 VAR_23[4];
 int VAR_24;

 VAR_24 = FUNC_10(VAR_18->adapter,
          VAR_5);
 if (!VAR_24) {
  FUNC_3(VAR_20, "I2C adapter not suitable\n");
  return -VAR_1;
 }

 VAR_22 = FUNC_6(VAR_20, sizeof(*VAR_22), VAR_3);
 if (!VAR_22)
  return -VAR_2;

 VAR_22->i2c = VAR_18;
 VAR_22->regmap = FUNC_7(VAR_18, &VAR_17);
 if (FUNC_0(VAR_22->regmap))
  return FUNC_1(VAR_22->regmap);

 VAR_22->reset_gpio = FUNC_5(VAR_20, "reset",
            VAR_4);
 if (FUNC_0(VAR_22->reset_gpio)) {
  FUNC_3(VAR_20, "Failed to retrieve/request reset gpio: %ld\n",
   FUNC_1(VAR_22->reset_gpio));
  return FUNC_1(VAR_22->reset_gpio);
 }

 FUNC_14(&VAR_22->mutex);

 FUNC_19(VAR_22);

 VAR_24 = FUNC_17(VAR_22->regmap, VAR_11, 0x0);
 if (VAR_24)
  return VAR_24;

 VAR_24 = FUNC_15(VAR_22->regmap, FUNC_2(0),
          &VAR_23, 4);
 if (VAR_24) {
  FUNC_3(VAR_20, "regmap_read failed %d\n", VAR_24);
  return VAR_24;
 }

 if (VAR_23[0] != 0xb0) {
  FUNC_3(VAR_20, "Invalid chipid: %02x (expecting 0xb0)\n",
   VAR_23[0]);
  return -VAR_0;
 }


 FUNC_16(VAR_22->regmap, VAR_10, &VAR_21);
 FUNC_17(VAR_22->regmap, VAR_10, VAR_21);

 if (VAR_18->irq > 0) {
  FUNC_17(VAR_22->regmap, VAR_9,
        VAR_8);

  VAR_24 = FUNC_8(VAR_20, VAR_18->irq, ((void*)0),
      VAR_16,
      VAR_7, FUNC_4(VAR_20),
      VAR_22);
  if (VAR_24)
   return VAR_24;
 }

 VAR_22->bridge.funcs = &VAR_13;
 VAR_22->bridge.of_node = VAR_20->of_node;
 VAR_22->bridge.timings = &VAR_12;
 FUNC_9(&VAR_22->bridge);

 FUNC_18(VAR_22, VAR_20);

 FUNC_13(VAR_18, VAR_22);

 VAR_22->i2cmux = FUNC_12(VAR_18->adapter, VAR_20,
     1, 0, VAR_6,
     VAR_15,
     VAR_14);
 if (!VAR_22->i2cmux)
  return -VAR_2;

 VAR_22->i2cmux->priv = VAR_22;
 return FUNC_11(VAR_22->i2cmux, 0, 0, 0);
}
