
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_smbus_alert_setup {int irq; } ;
struct i2c_smbus_alert {struct i2c_client* ara; int alert; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; struct i2c_adapter* adapter; } ;
struct TYPE_2__ {int of_node; } ;
struct i2c_adapter {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct i2c_smbus_alert_setup* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 struct i2c_smbus_alert* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,int,int *,int ,int,char*,struct i2c_smbus_alert*) ;
 int FUNC_5 (struct i2c_client*,struct i2c_smbus_alert*) ;
 int FUNC_6 (int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_6,
     const struct i2c_device_id *VAR_7)
{
 struct i2c_smbus_alert_setup *VAR_8 = FUNC_1(&VAR_6->dev);
 struct i2c_smbus_alert *VAR_9;
 struct i2c_adapter *VAR_10 = VAR_6->adapter;
 int VAR_11, VAR_12;

 VAR_9 = FUNC_3(&VAR_6->dev, sizeof(struct i2c_smbus_alert),
        VAR_1);
 if (!VAR_9)
  return -VAR_0;

 if (VAR_8) {
  VAR_12 = VAR_8->irq;
 } else {
  VAR_12 = FUNC_6(VAR_10->dev.of_node, "smbus_alert");
  if (VAR_12 <= 0)
   return VAR_12;
 }

 FUNC_0(&VAR_9->alert, VAR_4);
 VAR_9->ara = VAR_6;

 if (VAR_12 > 0) {
  VAR_11 = FUNC_4(&VAR_6->dev, VAR_12,
      ((void*)0), VAR_5,
      VAR_3 | VAR_2,
      "smbus_alert", VAR_9);
  if (VAR_11)
   return VAR_11;
 }

 FUNC_5(VAR_6, VAR_9);
 FUNC_2(&VAR_10->dev, "supports SMBALERT#\n");

 return 0;
}
