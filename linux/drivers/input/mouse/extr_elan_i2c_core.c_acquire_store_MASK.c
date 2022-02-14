
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int irq; } ;
struct elan_tp_data {int baseline_ready; int sysfs_mutex; int mode; int client; TYPE_1__* ops; int min_baseline; int max_baseline; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* set_mode ) (int ,int ) ;int (* get_baseline_data ) (int ,int,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct elan_tp_data* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int,int *) ;
 int FUNC_9 (int ,int,int *) ;
 int FUNC_10 (int ,int ) ;
 struct i2c_client* FUNC_11 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_12(struct device *VAR_1, struct device_attribute *VAR_2,
        const char *VAR_3, size_t VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_11(VAR_1);
 struct elan_tp_data *VAR_6 = FUNC_3(VAR_5);
 int VAR_7;
 int VAR_8;

 VAR_8 = FUNC_5(&VAR_6->sysfs_mutex);
 if (VAR_8)
  return VAR_8;

 FUNC_1(VAR_5->irq);

 VAR_6->baseline_ready = 0;

 VAR_6->mode |= VAR_0;
 VAR_8 = VAR_6->ops->set_mode(VAR_6->client, VAR_6->mode);
 if (VAR_8) {
  FUNC_0(VAR_1, "Failed to enable calibration mode to get baseline: %d\n",
   VAR_8);
  goto out;
 }

 FUNC_4(250);

 VAR_8 = VAR_6->ops->get_baseline_data(VAR_6->client, 1,
           &VAR_6->max_baseline);
 if (VAR_8) {
  FUNC_0(VAR_1, "Failed to read max baseline form device: %d\n",
   VAR_8);
  goto out_disable_calibrate;
 }

 VAR_8 = VAR_6->ops->get_baseline_data(VAR_6->client, 0,
           &VAR_6->min_baseline);
 if (VAR_8) {
  FUNC_0(VAR_1, "Failed to read min baseline form device: %d\n",
   VAR_8);
  goto out_disable_calibrate;
 }

 VAR_6->baseline_ready = 1;

out_disable_calibrate:
 VAR_6->mode &= ~VAR_0;
 VAR_7 = VAR_6->ops->set_mode(VAR_6->client, VAR_6->mode);
 if (VAR_7) {
  FUNC_0(VAR_1, "Failed to disable calibration mode after acquiring baseline: %d\n",
   VAR_7);
  if (!VAR_8)
   VAR_8 = VAR_7;
 }
out:
 FUNC_2(VAR_5->irq);
 FUNC_6(&VAR_6->sysfs_mutex);
 return VAR_8 ?: VAR_4;
}
