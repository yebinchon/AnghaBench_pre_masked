
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct w83l786ng_data {int* fan_div; void** fan_min; int update_lock; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int name; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 struct device* FUNC_2 (struct device*,int ,struct w83l786ng_data*,int ) ;
 struct w83l786ng_data* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int FUNC_5 (struct i2c_client*) ;
 void* FUNC_6 (struct i2c_client*,int ) ;

__attribute__((used)) static int
FUNC_7(struct i2c_client *VAR_4, const struct i2c_device_id *VAR_5)
{
 struct device *VAR_6 = &VAR_4->dev;
 struct w83l786ng_data *VAR_7;
 struct device *VAR_8;
 int VAR_9;
 u8 VAR_10;

 VAR_7 = FUNC_3(VAR_6, sizeof(struct w83l786ng_data), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->client = VAR_4;
 FUNC_4(&VAR_7->update_lock);


 FUNC_5(VAR_4);


 for (VAR_9 = 0; VAR_9 < 2; VAR_9++) {
  VAR_7->fan_min[VAR_9] = FUNC_6(VAR_4,
      FUNC_1(VAR_9));
 }


 VAR_10 = FUNC_6(VAR_4, VAR_2);
 VAR_7->fan_div[0] = VAR_10 & 0x07;
 VAR_7->fan_div[1] = (VAR_10 >> 4) & 0x07;

 VAR_8 = FUNC_2(VAR_6, VAR_4->name,
          VAR_7,
          VAR_3);
 return FUNC_0(VAR_8);
}
