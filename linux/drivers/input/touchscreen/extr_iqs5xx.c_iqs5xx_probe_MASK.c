
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iqs5xx_private {scalar_t__ input; int lock; int reset_gpio; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int name; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,char*,int ) ;
 struct iqs5xx_private* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,int ,int *,int ,int ,int ,struct iqs5xx_private*) ;
 int FUNC_7 (struct i2c_client*,struct iqs5xx_private*) ;
 int FUNC_8 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_9 (struct i2c_client*) ;
 int VAR_5 ;
 int FUNC_10 (struct i2c_client*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int,int) ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_6,
   const struct i2c_device_id *VAR_7)
{
 struct iqs5xx_private *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_5(&VAR_6->dev, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 FUNC_7(VAR_6, VAR_8);
 VAR_8->client = VAR_6;

 VAR_8->reset_gpio = FUNC_4(&VAR_6->dev,
         "reset", VAR_2);
 if (FUNC_0(VAR_8->reset_gpio)) {
  VAR_9 = FUNC_1(VAR_8->reset_gpio);
  FUNC_2(&VAR_6->dev, "Failed to request GPIO: %d\n", VAR_9);
  return VAR_9;
 }

 FUNC_11(&VAR_8->lock);

 FUNC_10(VAR_6);
 FUNC_12(10000, 10100);

 VAR_9 = FUNC_9(VAR_6);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_6(&VAR_6->dev, VAR_6->irq,
       ((void*)0), VAR_5, VAR_3,
       VAR_6->name, VAR_8);
 if (VAR_9) {
  FUNC_2(&VAR_6->dev, "Failed to request IRQ: %d\n", VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_3(&VAR_6->dev, &VAR_4);
 if (VAR_9) {
  FUNC_2(&VAR_6->dev, "Failed to add attributes: %d\n", VAR_9);
  return VAR_9;
 }

 if (VAR_8->input) {
  VAR_9 = FUNC_8(VAR_8->input);
  if (VAR_9)
   FUNC_2(&VAR_6->dev,
    "Failed to register device: %d\n",
    VAR_9);
 }

 return VAR_9;
}
