
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct regulator {int dummy; } ;
struct pca953x_platform_data {int irq_base; int gpio_base; int (* setup ) (struct i2c_client*,int ,int ,int ) ;int context; int names; int invert; } ;
struct TYPE_2__ {int ngpio; int base; } ;
struct pca953x_chip {int gpio_start; uintptr_t driver_data; struct regulator* regulator; TYPE_1__ gpio_chip; int * regs; int i2c_lock; struct regulator* regmap; struct i2c_client* client; int names; } ;
struct i2c_device_id {uintptr_t driver_data; } ;
struct i2c_client {int dev; int adapter; } ;
typedef struct regulator gpio_desc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct regulator*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_6 ;
 int FUNC_2 (struct regulator*) ;
 int FUNC_3 (int *,char*,int) ;
 struct pca953x_platform_data* FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int) ;
 void* FUNC_6 (int *) ;
 int FUNC_7 (struct pca953x_chip*,int ) ;
 int FUNC_8 (struct pca953x_chip*,int ) ;
 int FUNC_9 (int *,TYPE_1__*,struct pca953x_chip*) ;
 struct regulator* FUNC_10 (int *,char*,int ) ;
 struct pca953x_chip* FUNC_11 (int *,int,int ) ;
 struct regulator* FUNC_12 (struct i2c_client*,int *) ;
 struct regulator* FUNC_13 (int *,char*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct i2c_client*,struct pca953x_chip*) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *) ;
 int VAR_7 ;
 int FUNC_18 (struct pca953x_chip*,int) ;
 int VAR_8 ;
 int FUNC_19 (struct pca953x_chip*,int) ;
 int VAR_9 ;
 int FUNC_20 (struct regulator*) ;
 int FUNC_21 (struct regulator*) ;
 int FUNC_22 (struct regulator*) ;
 int FUNC_23 (struct i2c_client*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_24(struct i2c_client *VAR_10,
       const struct i2c_device_id *VAR_11)
{
 struct pca953x_platform_data *VAR_12;
 struct pca953x_chip *VAR_13;
 int VAR_14 = 0;
 int VAR_15;
 u32 VAR_16 = 0;
 struct regulator *VAR_17;

 VAR_13 = FUNC_11(&VAR_10->dev,
   sizeof(struct pca953x_chip), VAR_3);
 if (VAR_13 == ((void*)0))
  return -VAR_1;

 VAR_12 = FUNC_4(&VAR_10->dev);
 if (VAR_12) {
  VAR_14 = VAR_12->irq_base;
  VAR_13->gpio_start = VAR_12->gpio_base;
  VAR_16 = VAR_12->invert;
  VAR_13->names = VAR_12->names;
 } else {
  struct gpio_desc *VAR_18;

  VAR_13->gpio_start = -1;
  VAR_14 = 0;
  VAR_18 = FUNC_10(&VAR_10->dev, "reset",
           VAR_4);
  if (FUNC_0(VAR_18))
   return FUNC_2(VAR_18);
 }

 VAR_13->client = VAR_10;

 VAR_17 = FUNC_13(&VAR_10->dev, "vcc");
 if (FUNC_0(VAR_17)) {
  VAR_15 = FUNC_2(VAR_17);
  if (VAR_15 != -VAR_2)
   FUNC_3(&VAR_10->dev, "reg get err: %d\n", VAR_15);
  return VAR_15;
 }
 VAR_15 = FUNC_22(VAR_17);
 if (VAR_15) {
  FUNC_3(&VAR_10->dev, "reg en err: %d\n", VAR_15);
  return VAR_15;
 }
 VAR_13->regulator = VAR_17;

 if (VAR_11) {
  VAR_13->driver_data = VAR_11->driver_data;
 } else {
  const void *VAR_19;

  VAR_19 = FUNC_6(&VAR_10->dev);
  if (!VAR_19) {
   VAR_15 = -VAR_0;
   goto err_exit;
  }

  VAR_13->driver_data = (uintptr_t)VAR_19;
 }

 FUNC_15(VAR_10, VAR_13);

 VAR_13->regmap = FUNC_12(VAR_10, &VAR_7);
 if (FUNC_0(VAR_13->regmap)) {
  VAR_15 = FUNC_2(VAR_13->regmap);
  goto err_exit;
 }

 FUNC_20(VAR_13->regmap);

 FUNC_17(&VAR_13->i2c_lock);
 FUNC_16(&VAR_13->i2c_lock,
        FUNC_14(VAR_10->adapter));




 FUNC_19(VAR_13, VAR_13->driver_data & VAR_6);

 if (FUNC_1(VAR_13->driver_data) == VAR_5) {
  VAR_13->regs = &VAR_8;
  VAR_15 = FUNC_8(VAR_13, VAR_16);
 } else {
  VAR_13->regs = &VAR_9;
  VAR_15 = FUNC_7(VAR_13, VAR_16);
 }
 if (VAR_15)
  goto err_exit;

 VAR_15 = FUNC_9(&VAR_10->dev, &VAR_13->gpio_chip, VAR_13);
 if (VAR_15)
  goto err_exit;

 VAR_15 = FUNC_18(VAR_13, VAR_14);
 if (VAR_15)
  goto err_exit;

 if (VAR_12 && VAR_12->setup) {
  VAR_15 = VAR_12->setup(VAR_10, VAR_13->gpio_chip.base,
    VAR_13->gpio_chip.ngpio, VAR_12->context);
  if (VAR_15 < 0)
   FUNC_5(&VAR_10->dev, "setup failed, %d\n", VAR_15);
 }

 return 0;

err_exit:
 FUNC_21(VAR_13->regulator);
 return VAR_15;
}
