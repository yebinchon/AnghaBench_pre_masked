
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct emc2103_data {int fan_target; unsigned long fan_multiplier; int update_lock; struct i2c_client* client; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 unsigned long VAR_0 ;
 void* FUNC_0 (unsigned long,int ,int) ;
 struct emc2103_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct i2c_client*,int) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
     struct device_attribute *VAR_2, const char *VAR_3,
     size_t VAR_4)
{
 struct emc2103_data *VAR_5 = FUNC_1(VAR_1);
 struct i2c_client *VAR_6 = VAR_5->client;
 unsigned long VAR_7;

 int VAR_8 = FUNC_2(VAR_3, 10, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;


 VAR_7 = FUNC_0(VAR_7, 0, 16384);

 FUNC_3(&VAR_5->update_lock);

 if (VAR_7 == 0)
  VAR_5->fan_target = 0x1fff;
 else
  VAR_5->fan_target = FUNC_0(
   (VAR_0 * VAR_5->fan_multiplier) / VAR_7,
   0, 0x1fff);

 FUNC_5(VAR_6, VAR_5->fan_target);

 FUNC_4(&VAR_5->update_lock);
 return VAR_4;
}
