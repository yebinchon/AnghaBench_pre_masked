
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sensor_device_attribute {int index; } ;
struct i2c_client {int dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adm9240_data {int* fan_min; int* fan_div; int update_lock; struct i2c_client* client; } ;
typedef int ssize_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int,int) ;
 int FUNC_2 (struct i2c_client*,int,int) ;
 int FUNC_3 (int *,char*,int,...) ;
 struct adm9240_data* FUNC_4 (struct device*) ;
 int FUNC_5 (struct i2c_client*,int ,unsigned int) ;
 int FUNC_6 (char const*,int,unsigned long*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct sensor_device_attribute* FUNC_9 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_0,
        struct device_attribute *VAR_1,
        const char *VAR_2, size_t VAR_3)
{
 struct sensor_device_attribute *VAR_4 = FUNC_9(VAR_1);
 struct adm9240_data *VAR_5 = FUNC_4(VAR_0);
 struct i2c_client *VAR_6 = VAR_5->client;
 int VAR_7 = VAR_4->index;
 u8 VAR_8;
 unsigned long VAR_9;
 int VAR_10;

 VAR_10 = FUNC_6(VAR_2, 10, &VAR_9);
 if (VAR_10)
  return VAR_10;

 FUNC_7(&VAR_5->update_lock);

 if (!VAR_9) {
  VAR_5->fan_min[VAR_7] = 255;
  VAR_8 = VAR_5->fan_div[VAR_7];

  FUNC_3(&VAR_6->dev, "fan%u low limit set disabled\n",
    VAR_7 + 1);

 } else if (VAR_9 < 1350000 / (8 * 254)) {
  VAR_8 = 3;
  VAR_5->fan_min[VAR_7] = 254;

  FUNC_3(&VAR_6->dev, "fan%u low limit set minimum %u\n",
    VAR_7 + 1, FUNC_1(254, 1 << VAR_8));

 } else {
  unsigned int VAR_11 = 1350000 / VAR_9;

  VAR_8 = 0;
  while (VAR_11 > 192 && VAR_8 < 3) {
   VAR_8++;
   VAR_11 /= 2;
  }
  if (!VAR_11)
   VAR_11++;

  VAR_5->fan_min[VAR_7] = VAR_11;

  FUNC_3(&VAR_6->dev, "fan%u low limit set fan speed %u\n",
    VAR_7 + 1, FUNC_1(VAR_11, 1 << VAR_8));
 }

 if (VAR_8 != VAR_5->fan_div[VAR_7]) {
  VAR_5->fan_div[VAR_7] = VAR_8;
  FUNC_2(VAR_6, VAR_7, VAR_8);
 }
 FUNC_5(VAR_6, FUNC_0(VAR_7),
   VAR_5->fan_min[VAR_7]);

 FUNC_8(&VAR_5->update_lock);
 return VAR_3;
}
