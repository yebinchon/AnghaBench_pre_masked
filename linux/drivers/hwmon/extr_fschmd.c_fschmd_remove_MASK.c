
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct i2c_client {int dev; } ;
struct TYPE_5__ {scalar_t__ minor; } ;
struct fschmd_data {size_t kind; int kref; scalar_t__ hwmon_dev; int watchdog_lock; int * client; int list; scalar_t__ watchdog_is_open; TYPE_1__ watchdog_miscdev; } ;
struct TYPE_8__ {int dev_attr; } ;
struct TYPE_7__ {int dev_attr; } ;
struct TYPE_6__ {int dev_attr; } ;


 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int *) ;
 TYPE_4__* VAR_4 ;
 TYPE_3__* VAR_5 ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;
 int FUNC_2 (scalar_t__) ;
 struct fschmd_data* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_8 ;
 int FUNC_9 (struct fschmd_data*) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_9)
{
 struct fschmd_data *VAR_10 = FUNC_3(VAR_9);
 int VAR_11;


 if (VAR_10->watchdog_miscdev.minor) {
  FUNC_6(&VAR_10->watchdog_miscdev);
  if (VAR_10->watchdog_is_open) {
   FUNC_0(&VAR_9->dev,
    "i2c client detached with watchdog open! "
    "Stopping watchdog.\n");
   FUNC_9(VAR_10);
  }
  FUNC_7(&VAR_8);
  FUNC_5(&VAR_10->list);
  FUNC_8(&VAR_8);

  FUNC_7(&VAR_10->watchdog_lock);
  VAR_10->client = ((void*)0);
  FUNC_8(&VAR_10->watchdog_lock);
 }





 if (VAR_10->hwmon_dev)
  FUNC_2(VAR_10->hwmon_dev);

 FUNC_1(&VAR_9->dev, &VAR_3);
 for (VAR_11 = 0; VAR_11 < (VAR_2[VAR_10->kind]); VAR_11++)
  FUNC_1(&VAR_9->dev, &VAR_4[VAR_11].dev_attr);
 for (VAR_11 = 0; VAR_11 < (VAR_1[VAR_10->kind] * 4); VAR_11++)
  FUNC_1(&VAR_9->dev,
     &VAR_7[VAR_11].dev_attr);
 for (VAR_11 = 0; VAR_11 < (VAR_0[VAR_10->kind] * 5); VAR_11++)
  FUNC_1(&VAR_9->dev,
     &VAR_5[VAR_11].dev_attr);

 FUNC_7(&VAR_8);
 FUNC_4(&VAR_10->kref, VAR_6);
 FUNC_8(&VAR_8);

 return 0;
}
