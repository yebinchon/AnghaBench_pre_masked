
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct mpu3050 {TYPE_1__* i2cmux; } ;
struct i2c_device_id {char* name; } ;
struct i2c_client {int dev; int adapter; int irq; } ;
struct TYPE_3__ {struct mpu3050* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *) ;
 struct regmap* FUNC_4 (struct i2c_client*,int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_1__*,int ,int ,int ) ;
 TYPE_1__* FUNC_7 (int ,int *,int,int ,int,int ,int ) ;
 struct mpu3050* FUNC_8 (int ) ;
 int FUNC_9 (int *,struct regmap*,int ,char const*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_8,
        const struct i2c_device_id *VAR_9)
{
 struct regmap *VAR_10;
 const char *VAR_11;
 struct mpu3050 *VAR_12;
 int VAR_13;

 if (!FUNC_5(VAR_8->adapter,
         VAR_2))
  return -VAR_1;

 if (VAR_9)
  VAR_11 = VAR_9->name;
 else
  return -VAR_0;

 VAR_10 = FUNC_4(VAR_8, &VAR_7);
 if (FUNC_0(VAR_10)) {
  FUNC_2(&VAR_8->dev, "Failed to register i2c regmap %d\n",
   (int)FUNC_1(VAR_10));
  return FUNC_1(VAR_10);
 }

 VAR_13 = FUNC_9(&VAR_8->dev, VAR_10, VAR_8->irq, VAR_11);
 if (VAR_13)
  return VAR_13;


 VAR_12 = FUNC_8(FUNC_3(&VAR_8->dev));
 VAR_12->i2cmux = FUNC_7(VAR_8->adapter, &VAR_8->dev,
     1, 0, VAR_4 | VAR_3,
     VAR_6,
     VAR_5);

 if (!VAR_12->i2cmux)
  FUNC_2(&VAR_8->dev, "failed to allocate I2C mux\n");
 else {
  VAR_12->i2cmux->priv = VAR_12;

  FUNC_6(VAR_12->i2cmux, 0, 0, 0);
 }

 return 0;
}
