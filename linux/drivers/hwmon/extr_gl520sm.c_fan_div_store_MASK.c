
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i2c_client {int dev; } ;
struct gl520_data {int* fan_div; int update_lock; struct i2c_client* client; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,unsigned long) ;
 struct gl520_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 int FUNC_4 (char const*,int,unsigned long*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_2,
        struct device_attribute *VAR_3, const char *VAR_4,
        size_t VAR_5)
{
 struct gl520_data *VAR_6 = FUNC_1(VAR_2);
 struct i2c_client *VAR_7 = VAR_6->client;
 int VAR_8 = FUNC_7(VAR_3)->index;
 u8 VAR_9;
 unsigned long VAR_10;
 int VAR_11;

 VAR_11 = FUNC_4(VAR_4, 10, &VAR_10);
 if (VAR_11)
  return VAR_11;

 switch (VAR_10) {
 case 1:
  VAR_9 = 0;
  break;
 case 2:
  VAR_9 = 1;
  break;
 case 4:
  VAR_9 = 2;
  break;
 case 8:
  VAR_9 = 3;
  break;
 default:
  FUNC_0(&VAR_7->dev,
 "fan_div value %ld not supported. Choose one of 1, 2, 4 or 8!\n", VAR_10);
  return -VAR_0;
 }

 FUNC_5(&VAR_6->update_lock);
 VAR_6->fan_div[VAR_8] = VAR_9;

 if (VAR_8 == 0)
  FUNC_3(VAR_7, VAR_1,
      (FUNC_2(VAR_7, VAR_1)
       & ~0xc0) | (VAR_9 << 6));
 else
  FUNC_3(VAR_7, VAR_1,
      (FUNC_2(VAR_7, VAR_1)
       & ~0x30) | (VAR_9 << 4));

 FUNC_6(&VAR_6->update_lock);
 return VAR_5;
}
