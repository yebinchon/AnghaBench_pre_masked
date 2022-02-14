
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tda9950_priv {int notify; int adap; struct device* hdmi; struct tda9950_glue* glue; struct i2c_client* client; } ;
struct tda9950_glue {unsigned long irq_flags; struct device* parent; } ;
struct i2c_device_id {int dummy; } ;
struct device {struct tda9950_glue* platform_data; } ;
struct i2c_client {struct device dev; int irq; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_9 ;
 int FUNC_2 (int *,struct tda9950_priv*,char*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,struct device*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct device*,char*) ;
 int FUNC_9 (struct device*,char*,int,int) ;
 int FUNC_10 (struct device*) ;
 int FUNC_11 (struct device*,int ,struct tda9950_priv*) ;
 struct tda9950_priv* FUNC_12 (struct device*,int,int ) ;
 int FUNC_13 (struct device*,int ,struct tda9950_priv*) ;
 int FUNC_14 (struct device*,int ,int *,int ,unsigned long,int ,struct tda9950_priv*) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (struct i2c_client*,struct tda9950_priv*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_17 (struct device*,struct tda9950_glue*) ;
 int FUNC_18 (struct tda9950_priv*) ;
 int FUNC_19 (struct tda9950_priv*) ;
 int VAR_12 ;
 int FUNC_20 (struct i2c_client*,int ) ;

__attribute__((used)) static int FUNC_21(struct i2c_client *VAR_13,
    const struct i2c_device_id *VAR_14)
{
 struct tda9950_glue *VAR_15 = VAR_13->dev.platform_data;
 struct device *VAR_16 = &VAR_13->dev;
 struct tda9950_priv *VAR_17;
 unsigned long VAR_18;
 int VAR_19;
 u8 VAR_20;





 if (!FUNC_15(VAR_13->adapter, VAR_5)) {
  FUNC_8(&VAR_13->dev,
   "adapter does not support I2C functionality\n");
  return -VAR_3;
 }


 if (VAR_13->irq <= 0) {
  FUNC_8(&VAR_13->dev, "driver requires an interrupt\n");
  return -VAR_3;
 }

 VAR_17 = FUNC_12(VAR_16, sizeof(*VAR_17), VAR_4);
 if (!VAR_17)
  return -VAR_2;

 VAR_17->client = VAR_13;
 VAR_17->glue = VAR_15;

 FUNC_16(VAR_13, VAR_17);






 VAR_17->hdmi = VAR_16;
 if (VAR_15 && VAR_15->parent)
  VAR_17->hdmi = VAR_15->parent;

 VAR_17->adap = FUNC_2(&VAR_11, VAR_17, "tda9950",
       VAR_0,
       VAR_1);
 if (FUNC_0(VAR_17->adap))
  return FUNC_1(VAR_17->adap);

 VAR_19 = FUNC_11(VAR_16, VAR_10, VAR_17);
 if (VAR_19) {
  FUNC_3(VAR_17->adap);
  return VAR_19;
 }

 VAR_19 = FUNC_17(VAR_16, VAR_15);
 if (VAR_19)
  return VAR_19;

 VAR_19 = FUNC_18(VAR_17);
 if (VAR_19)
  return VAR_19;

 VAR_20 = FUNC_20(VAR_13, VAR_9);

 FUNC_9(&VAR_13->dev,
   "TDA9950 CEC interface, hardware version %u.%u\n",
   VAR_20 >> 4, VAR_20 & 15);

 FUNC_19(VAR_17);

 VAR_18 = VAR_8;
 if (VAR_15)
  VAR_18 = VAR_15->irq_flags;

 VAR_19 = FUNC_14(VAR_16, VAR_13->irq, ((void*)0), VAR_12,
     VAR_18 | VAR_7 | VAR_6,
     FUNC_10(&VAR_13->dev), VAR_17);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_17->notify = FUNC_4(VAR_17->hdmi);
 if (!VAR_17->notify)
  return -VAR_2;

 VAR_19 = FUNC_6(VAR_17->adap, VAR_17->hdmi);
 if (VAR_19 < 0) {
  FUNC_5(VAR_17->notify);
  return VAR_19;
 }





 FUNC_13(VAR_16, VAR_10, VAR_17);

 FUNC_7(VAR_17->adap, VAR_17->notify);

 return 0;
}
