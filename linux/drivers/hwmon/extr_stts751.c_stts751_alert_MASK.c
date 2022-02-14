
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stts751_priv {int max_alert; int min_alert; int notify_max; int notify_min; int access_lock; TYPE_1__* dev; } ;
struct i2c_client {int dev; } ;
typedef enum i2c_alert_protocol { ____Placeholder_i2c_alert_protocol } i2c_alert_protocol ;
struct TYPE_3__ {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 struct stts751_priv* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct stts751_priv*) ;
 int FUNC_8 (int *,int *,char*) ;

__attribute__((used)) static void FUNC_9(struct i2c_client *VAR_2,
     enum i2c_alert_protocol VAR_3, unsigned int VAR_4)
{
 int VAR_5;
 struct stts751_priv *VAR_6 = FUNC_3(VAR_2);

 if (VAR_3 != VAR_0)
  return;

 FUNC_0(&VAR_2->dev, "alert!");

 FUNC_5(&VAR_6->access_lock);
 VAR_5 = FUNC_7(VAR_6);
 if (VAR_5 < 0) {

  VAR_6->max_alert = 1;
  VAR_6->min_alert = 1;

  FUNC_2(VAR_6->dev,
    "Alert received, but can't communicate to the device. Triggering all alarms!");
 }

 if (VAR_6->max_alert) {
  if (VAR_6->notify_max)
   FUNC_1(VAR_6->dev, "got alert for HIGH temperature");
  VAR_6->notify_max = 0;


  FUNC_8(&VAR_6->dev->kobj, ((void*)0), "temp1_max_alarm");
 }

 if (VAR_6->min_alert) {
  if (VAR_6->notify_min)
   FUNC_1(VAR_6->dev, "got alert for LOW temperature");
  VAR_6->notify_min = 0;


  FUNC_8(&VAR_6->dev->kobj, ((void*)0), "temp1_min_alarm");
 }

 if (VAR_6->min_alert || VAR_6->max_alert)
  FUNC_4(&VAR_6->dev->kobj, VAR_1);

 FUNC_6(&VAR_6->access_lock);
}
