
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adm1026_data {int* fan_div; int update_lock; struct i2c_client* client; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (long) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 struct adm1026_data* FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,int,int) ;
 int FUNC_5 (char const*,int,long*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct sensor_device_attribute* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_2,
        struct device_attribute *VAR_3, const char *VAR_4,
        size_t VAR_5)
{
 struct sensor_device_attribute *VAR_6 = FUNC_8(VAR_3);
 int VAR_7 = VAR_6->index;
 struct adm1026_data *VAR_8 = FUNC_3(VAR_2);
 struct i2c_client *VAR_9 = VAR_8->client;
 long VAR_10;
 int VAR_11, VAR_12;
 int VAR_13;

 VAR_13 = FUNC_5(VAR_4, 10, &VAR_10);
 if (VAR_13)
  return VAR_13;

 VAR_12 = FUNC_1(VAR_10);

 FUNC_6(&VAR_8->update_lock);
 VAR_11 = VAR_8->fan_div[VAR_7];
 VAR_8->fan_div[VAR_7] = FUNC_0(VAR_12);

 if (VAR_7 < 4) {
  FUNC_2(VAR_9, VAR_0,
        (FUNC_1(VAR_8->fan_div[0]) << 0) |
        (FUNC_1(VAR_8->fan_div[1]) << 2) |
        (FUNC_1(VAR_8->fan_div[2]) << 4) |
        (FUNC_1(VAR_8->fan_div[3]) << 6));
 } else {
  FUNC_2(VAR_9, VAR_1,
        (FUNC_1(VAR_8->fan_div[4]) << 0) |
        (FUNC_1(VAR_8->fan_div[5]) << 2) |
        (FUNC_1(VAR_8->fan_div[6]) << 4) |
        (FUNC_1(VAR_8->fan_div[7]) << 6));
 }

 if (VAR_8->fan_div[VAR_7] != VAR_11)
  FUNC_4(VAR_2, VAR_7, VAR_11);

 FUNC_7(&VAR_8->update_lock);
 return VAR_5;
}
