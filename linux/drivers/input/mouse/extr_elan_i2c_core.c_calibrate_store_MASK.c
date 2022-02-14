
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i2c_client {int irq; } ;
struct elan_tp_data {int sysfs_mutex; int mode; struct i2c_client* client; TYPE_1__* ops; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* set_mode ) (struct i2c_client*,int ) ;int (* calibrate ) (struct i2c_client*) ;int (* calibrate_result ) (struct i2c_client*,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct elan_tp_data* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct i2c_client*,int ) ;
 int FUNC_8 (struct i2c_client*) ;
 int FUNC_9 (struct i2c_client*,int*) ;
 int FUNC_10 (struct i2c_client*,int ) ;
 struct i2c_client* FUNC_11 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_12(struct device *VAR_3,
          struct device_attribute *VAR_4,
          const char *VAR_5, size_t VAR_6)
{
 struct i2c_client *VAR_7 = FUNC_11(VAR_3);
 struct elan_tp_data *VAR_8 = FUNC_3(VAR_7);
 int VAR_9 = 20;
 int VAR_10;
 int VAR_11;
 u8 VAR_12[VAR_1];

 VAR_10 = FUNC_5(&VAR_8->sysfs_mutex);
 if (VAR_10)
  return VAR_10;

 FUNC_1(VAR_7->irq);

 VAR_8->mode |= VAR_2;
 VAR_10 = VAR_8->ops->set_mode(VAR_7, VAR_8->mode);
 if (VAR_10) {
  FUNC_0(VAR_3, "failed to enable calibration mode: %d\n",
   VAR_10);
  goto out;
 }

 VAR_10 = VAR_8->ops->calibrate(VAR_7);
 if (VAR_10) {
  FUNC_0(VAR_3, "failed to start calibration: %d\n",
   VAR_10);
  goto out_disable_calibrate;
 }

 VAR_12[0] = 0xff;
 do {

  FUNC_4(250);

  VAR_10 = VAR_8->ops->calibrate_result(VAR_7, VAR_12);
  if (VAR_10)
   FUNC_0(VAR_3, "failed to check calibration result: %d\n",
    VAR_10);
  else if (VAR_12[0] == 0)
   break;

 } while (--VAR_9);

 if (VAR_9 == 0) {
  FUNC_0(VAR_3, "failed to calibrate. Timeout.\n");
  VAR_10 = -VAR_0;
 }

out_disable_calibrate:
 VAR_8->mode &= ~VAR_2;
 VAR_11 = VAR_8->ops->set_mode(VAR_8->client, VAR_8->mode);
 if (VAR_11) {
  FUNC_0(VAR_3, "failed to disable calibration mode: %d\n",
   VAR_11);
  if (!VAR_10)
   VAR_10 = VAR_11;
 }
out:
 FUNC_2(VAR_7->irq);
 FUNC_6(&VAR_8->sysfs_mutex);
 return VAR_10 ?: VAR_6;
}
