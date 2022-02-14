
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83792d_data {int hwmon_dev; void** fan_min; int update_lock; } ;
struct i2c_device_id {int dummy; } ;
struct device {int kobj; } ;
struct i2c_client {struct device dev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct w83792d_data* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct i2c_client*,struct w83792d_data*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (struct i2c_client*) ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_10 (struct i2c_client*) ;
 void* FUNC_11 (struct i2c_client*,int ) ;

__attribute__((used)) static int
FUNC_12(struct i2c_client *VAR_7, const struct i2c_device_id *VAR_8)
{
 struct w83792d_data *VAR_9;
 struct device *VAR_10 = &VAR_7->dev;
 int VAR_11, VAR_12, VAR_13;

 VAR_9 = FUNC_3(VAR_10, sizeof(struct w83792d_data), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 FUNC_5(VAR_7, VAR_9);
 FUNC_6(&VAR_9->update_lock);

 VAR_13 = FUNC_9(VAR_7);
 if (VAR_13)
  return VAR_13;


 FUNC_10(VAR_7);


 for (VAR_11 = 0; VAR_11 < 7; VAR_11++) {
  VAR_9->fan_min[VAR_11] = FUNC_11(VAR_7,
     VAR_2[VAR_11]);
 }


 VAR_13 = FUNC_7(&VAR_10->kobj, &VAR_5);
 if (VAR_13)
  return VAR_13;





 VAR_12 = FUNC_11(VAR_7, VAR_3);

 if (!(VAR_12 & 0x40)) {
  VAR_13 = FUNC_7(&VAR_10->kobj, &VAR_6[0]);
  if (VAR_13)
   goto exit_remove_files;
 }

 if (!(VAR_12 & 0x20)) {
  VAR_13 = FUNC_7(&VAR_10->kobj, &VAR_6[1]);
  if (VAR_13)
   goto exit_remove_files;
 }

 VAR_12 = FUNC_11(VAR_7, VAR_4);
 if (VAR_12 & 0x40) {
  VAR_13 = FUNC_7(&VAR_10->kobj, &VAR_6[2]);
  if (VAR_13)
   goto exit_remove_files;
 }

 if (VAR_12 & 0x04) {
  VAR_13 = FUNC_7(&VAR_10->kobj, &VAR_6[3]);
  if (VAR_13)
   goto exit_remove_files;
 }

 VAR_9->hwmon_dev = FUNC_4(VAR_10);
 if (FUNC_1(VAR_9->hwmon_dev)) {
  VAR_13 = FUNC_2(VAR_9->hwmon_dev);
  goto exit_remove_files;
 }

 return 0;

exit_remove_files:
 FUNC_8(&VAR_10->kobj, &VAR_5);
 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_6); VAR_11++)
  FUNC_8(&VAR_10->kobj, &VAR_6[VAR_11]);
 return VAR_13;
}
