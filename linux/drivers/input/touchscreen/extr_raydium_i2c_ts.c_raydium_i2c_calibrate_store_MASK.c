
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct raydium_data {int sysfs_mutex; } ;
struct i2c_client {int dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int cal_cmd ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 struct raydium_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct i2c_client*,int const*,int,int ) ;
 struct i2c_client* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
        struct device_attribute *VAR_2,
        const char *VAR_3, size_t VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_5(VAR_1);
 struct raydium_data *VAR_6 = FUNC_1(VAR_5);
 static const u8 VAR_7[] = { 0x00, 0x01, 0x9E };
 int VAR_8;

 VAR_8 = FUNC_2(&VAR_6->sysfs_mutex);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_4(VAR_5, VAR_7, sizeof(VAR_7),
      VAR_0);
 if (VAR_8)
  FUNC_0(&VAR_5->dev, "calibrate command failed: %d\n", VAR_8);

 FUNC_3(&VAR_6->sysfs_mutex);
 return VAR_8 ?: VAR_4;
}
