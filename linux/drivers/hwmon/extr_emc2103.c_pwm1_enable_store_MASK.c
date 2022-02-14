
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;
struct emc2103_data {int fan_rpm_control; int update_lock; struct i2c_client* client; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 struct emc2103_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;
 int FUNC_2 (char const*,int,long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct i2c_client*,int ,int*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
     struct device_attribute *VAR_3, const char *VAR_4,
     size_t VAR_5)
{
 struct emc2103_data *VAR_6 = FUNC_0(VAR_2);
 struct i2c_client *VAR_7 = VAR_6->client;
 long VAR_8;
 u8 VAR_9;

 int VAR_10 = FUNC_2(VAR_4, 10, &VAR_8);
 if (VAR_10 < 0)
  return VAR_10;

 FUNC_3(&VAR_6->update_lock);
 switch (VAR_8) {
 case 0:
  VAR_6->fan_rpm_control = 0;
  break;
 case 3:
  VAR_6->fan_rpm_control = 1;
  break;
 default:
  VAR_5 = -VAR_0;
  goto err;
 }

 VAR_10 = FUNC_5(VAR_7, VAR_1, &VAR_9);
 if (VAR_10) {
  VAR_5 = VAR_10;
  goto err;
 }

 if (VAR_6->fan_rpm_control)
  VAR_9 |= 0x80;
 else
  VAR_9 &= ~0x80;

 FUNC_1(VAR_7, VAR_1, VAR_9);
err:
 FUNC_4(&VAR_6->update_lock);
 return VAR_5;
}
