
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptn5150_info {scalar_t__ irq; struct device* dev; void* edev; void* int_gpiod; void* regmap; int irq_work; int mutex; void* vbus_gpiod; struct i2c_client* i2c; } ;
struct i2c_device_id {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct i2c_client {int name; struct device dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct device*,char*,...) ;
 void* FUNC_4 (struct device*,int ) ;
 int FUNC_5 (struct device*,void*) ;
 void* FUNC_6 (struct device*,char*,int ) ;
 struct ptn5150_info* FUNC_7 (struct device*,int,int ) ;
 void* FUNC_8 (struct i2c_client*,int *) ;
 int FUNC_9 (struct device*,int,int *,int ,int,int ,struct ptn5150_info*) ;
 int FUNC_10 (void*,int ) ;
 scalar_t__ FUNC_11 (void*) ;
 int FUNC_12 (struct i2c_client*,struct ptn5150_info*) ;
 int FUNC_13 (int *) ;
 int VAR_6 ;
 int FUNC_14 (struct ptn5150_info*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_15(struct i2c_client *VAR_10,
     const struct i2c_device_id *VAR_11)
{
 struct device *VAR_12 = &VAR_10->dev;
 struct device_node *VAR_13 = VAR_10->dev.of_node;
 struct ptn5150_info *VAR_14;
 int VAR_15;

 if (!VAR_13)
  return -VAR_0;

 VAR_14 = FUNC_7(&VAR_10->dev, sizeof(*VAR_14), VAR_2);
 if (!VAR_14)
  return -VAR_1;
 FUNC_12(VAR_10, VAR_14);

 VAR_14->dev = &VAR_10->dev;
 VAR_14->i2c = VAR_10;
 VAR_14->int_gpiod = FUNC_6(&VAR_10->dev, "int", VAR_3);
 if (FUNC_1(VAR_14->int_gpiod)) {
  FUNC_3(VAR_12, "failed to get INT GPIO\n");
  return FUNC_2(VAR_14->int_gpiod);
 }
 VAR_14->vbus_gpiod = FUNC_6(&VAR_10->dev, "vbus", VAR_3);
 if (FUNC_1(VAR_14->vbus_gpiod)) {
  FUNC_3(VAR_12, "failed to get VBUS GPIO\n");
  return FUNC_2(VAR_14->vbus_gpiod);
 }
 VAR_15 = FUNC_10(VAR_14->vbus_gpiod, 0);
 if (VAR_15) {
  FUNC_3(VAR_12, "failed to set VBUS GPIO direction\n");
  return -VAR_0;
 }

 FUNC_13(&VAR_14->mutex);

 FUNC_0(&VAR_14->irq_work, VAR_8);

 VAR_14->regmap = FUNC_8(VAR_10, &VAR_9);
 if (FUNC_1(VAR_14->regmap)) {
  VAR_15 = FUNC_2(VAR_14->regmap);
  FUNC_3(VAR_14->dev, "failed to allocate register map: %d\n",
       VAR_15);
  return VAR_15;
 }

 if (VAR_14->int_gpiod) {
  VAR_14->irq = FUNC_11(VAR_14->int_gpiod);
  if (VAR_14->irq < 0) {
   FUNC_3(VAR_12, "failed to get INTB IRQ\n");
   return VAR_14->irq;
  }

  VAR_15 = FUNC_9(VAR_12, VAR_14->irq, ((void*)0),
      VAR_7,
      VAR_5 |
      VAR_4,
      VAR_10->name, VAR_14);
  if (VAR_15 < 0) {
   FUNC_3(VAR_12, "failed to request handler for INTB IRQ\n");
   return VAR_15;
  }
 }


 VAR_14->edev = FUNC_4(VAR_14->dev, VAR_6);
 if (FUNC_1(VAR_14->edev)) {
  FUNC_3(VAR_14->dev, "failed to allocate memory for extcon\n");
  return -VAR_1;
 }


 VAR_15 = FUNC_5(VAR_14->dev, VAR_14->edev);
 if (VAR_15) {
  FUNC_3(VAR_14->dev, "failed to register extcon device\n");
  return VAR_15;
 }


 VAR_15 = FUNC_14(VAR_14);
 if (VAR_15)
  return -VAR_0;

 return 0;
}
