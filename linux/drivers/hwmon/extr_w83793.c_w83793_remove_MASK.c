
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ minor; } ;
struct w83793_data {int kref; int hwmon_dev; int watchdog_lock; int * client; int list; scalar_t__ watchdog_is_open; TYPE_7__ watchdog_miscdev; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;
struct TYPE_9__ {int dev_attr; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,int *) ;
 int FUNC_3 (int ) ;
 struct w83793_data* FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_7__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 TYPE_1__* VAR_2 ;
 int FUNC_10 (int *) ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_11 (struct i2c_client*,int ) ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 TYPE_1__* VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_12 (struct i2c_client*,int ,int) ;
 int VAR_9 ;
 int FUNC_13 (struct w83793_data*) ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_11)
{
 struct w83793_data *VAR_12 = FUNC_4(VAR_11);
 struct device *VAR_13 = &VAR_11->dev;
 int VAR_14, VAR_15;


 if (VAR_12->watchdog_miscdev.minor) {
  FUNC_7(&VAR_12->watchdog_miscdev);

  if (VAR_12->watchdog_is_open) {
   FUNC_1(&VAR_11->dev,
    "i2c client detached with watchdog open! "
    "Stopping watchdog.\n");
   FUNC_13(VAR_12);
  }

  FUNC_8(&VAR_9);
  FUNC_6(&VAR_12->list);
  FUNC_9(&VAR_9);


  FUNC_8(&VAR_12->watchdog_lock);
  VAR_12->client = ((void*)0);
  FUNC_9(&VAR_12->watchdog_lock);
 }


 VAR_15 = FUNC_11(VAR_11, VAR_0);
 FUNC_12(VAR_11, VAR_0, VAR_15 & ~0x04);

 FUNC_10(&VAR_10);

 FUNC_3(VAR_12->hwmon_dev);

 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_6); VAR_14++)
  FUNC_2(VAR_13,
       &VAR_6[VAR_14].dev_attr);

 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_2); VAR_14++)
  FUNC_2(VAR_13, &VAR_2[VAR_14].dev_attr);

 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_8); VAR_14++)
  FUNC_2(VAR_13, &VAR_8[VAR_14].dev_attr);
 FUNC_2(VAR_13, &VAR_1);

 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_3); VAR_14++)
  FUNC_2(VAR_13, &VAR_3[VAR_14].dev_attr);

 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_4); VAR_14++)
  FUNC_2(VAR_13, &VAR_4[VAR_14].dev_attr);

 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_7); VAR_14++)
  FUNC_2(VAR_13, &VAR_7[VAR_14].dev_attr);


 FUNC_8(&VAR_9);
 FUNC_5(&VAR_12->kref, VAR_5);
 FUNC_9(&VAR_9);

 return 0;
}
