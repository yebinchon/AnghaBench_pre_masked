
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; int * funcs; } ;
struct sii9234 {TYPE_1__ bridge; int lock; struct device* dev; } ;
struct i2c_device_id {int dummy; } ;
struct device {int of_node; } ;
struct i2c_client {int irq; struct device dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct device*,char*) ;
 struct sii9234* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (struct device*,int ,int *,int ,int,char*,struct sii9234*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct i2c_adapter*,int ) ;
 int FUNC_5 (struct i2c_client*,struct sii9234*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 int VAR_8 ;
 int FUNC_8 (struct sii9234*) ;
 int FUNC_9 (struct sii9234*,struct i2c_client*) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_10,
    const struct i2c_device_id *VAR_11)
{
 struct i2c_adapter *VAR_12 = VAR_10->adapter;
 struct sii9234 *VAR_13;
 struct device *VAR_14 = &VAR_10->dev;
 int VAR_15;

 VAR_13 = FUNC_1(VAR_14, sizeof(*VAR_13), VAR_3);
 if (!VAR_13)
  return -VAR_2;

 VAR_13->dev = VAR_14;
 FUNC_7(&VAR_13->lock);

 if (!FUNC_4(VAR_12, VAR_4)) {
  FUNC_0(VAR_14, "I2C adapter lacks SMBUS feature\n");
  return -VAR_1;
 }

 if (!VAR_10->irq) {
  FUNC_0(VAR_14, "no irq provided\n");
  return -VAR_0;
 }

 FUNC_6(VAR_10->irq, VAR_7);
 VAR_15 = FUNC_2(VAR_14, VAR_10->irq, ((void*)0),
     VAR_9,
     VAR_6 | VAR_5,
     "sii9234", VAR_13);
 if (VAR_15 < 0) {
  FUNC_0(VAR_14, "failed to install IRQ handler\n");
  return VAR_15;
 }

 VAR_15 = FUNC_9(VAR_13, VAR_10);
 if (VAR_15 < 0)
  return VAR_15;

 FUNC_5(VAR_10, VAR_13);

 VAR_13->bridge.funcs = &VAR_8;
 VAR_13->bridge.of_node = VAR_14->of_node;
 FUNC_3(&VAR_13->bridge);

 FUNC_8(VAR_13);

 return 0;
}
