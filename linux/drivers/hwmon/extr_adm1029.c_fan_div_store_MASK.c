
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sensor_device_attribute {size_t index; } ;
struct i2c_client {int dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adm1029_data {int* fan_div; int update_lock; struct i2c_client* client; } ;
typedef int ssize_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,long) ;
 struct adm1029_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 int FUNC_4 (char const*,int,long*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct sensor_device_attribute* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_2,
        struct device_attribute *VAR_3,
        const char *VAR_4, size_t VAR_5)
{
 struct adm1029_data *VAR_6 = FUNC_1(VAR_2);
 struct i2c_client *VAR_7 = VAR_6->client;
 struct sensor_device_attribute *VAR_8 = FUNC_7(VAR_3);
 u8 VAR_9;
 long VAR_10;
 int VAR_11 = FUNC_4(VAR_4, 10, &VAR_10);

 if (VAR_11 < 0)
  return VAR_11;

 FUNC_5(&VAR_6->update_lock);


 VAR_9 = FUNC_2(VAR_7,
           VAR_0[VAR_8->index]);

 switch (VAR_10) {
 case 1:
  VAR_10 = 1;
  break;
 case 2:
  VAR_10 = 2;
  break;
 case 4:
  VAR_10 = 3;
  break;
 default:
  FUNC_6(&VAR_6->update_lock);
  FUNC_0(&VAR_7->dev,
   "fan_div value %ld not supported. Choose one of 1, 2 or 4!\n",
   VAR_10);
  return -VAR_1;
 }

 VAR_9 = (VAR_9 & 0x3F) | (VAR_10 << 6);


 VAR_6->fan_div[VAR_8->index] = VAR_9;


 FUNC_3(VAR_7,
      VAR_0[VAR_8->index], VAR_9);
 FUNC_6(&VAR_6->update_lock);

 return VAR_5;
}
