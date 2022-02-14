
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct w83l786ng_data {int* fan_min; int* fan_div; int update_lock; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (int,int ) ;
 int FUNC_3 (unsigned long,int ) ;
 int VAR_0 ;
 int FUNC_4 (int) ;
 struct w83l786ng_data* FUNC_5 (struct device*) ;
 int FUNC_6 (char const*,int,unsigned long*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 TYPE_1__* FUNC_9 (struct device_attribute*) ;
 int FUNC_10 (struct i2c_client*,int ) ;
 int FUNC_11 (struct i2c_client*,int ,int) ;

__attribute__((used)) static ssize_t
FUNC_12(struct device *VAR_1, struct device_attribute *VAR_2,
       const char *VAR_3, size_t VAR_4)
{
 int VAR_5 = FUNC_9(VAR_2)->index;
 struct w83l786ng_data *VAR_6 = FUNC_5(VAR_1);
 struct i2c_client *VAR_7 = VAR_6->client;

 unsigned long VAR_8;
 u8 VAR_9;
 u8 VAR_10;
 u8 VAR_11 = 0;
 u8 VAR_12 = 0;

 unsigned long VAR_13;
 int VAR_14;

 VAR_14 = FUNC_6(VAR_3, 10, &VAR_13);
 if (VAR_14)
  return VAR_14;


 FUNC_7(&VAR_6->update_lock);
 VAR_8 = FUNC_2(VAR_6->fan_min[VAR_5], FUNC_0(VAR_6->fan_div[VAR_5]));

 VAR_6->fan_div[VAR_5] = FUNC_1(VAR_13);

 switch (VAR_5) {
 case 0:
  VAR_11 = 0xf8;
  VAR_12 = 0;
  break;
 case 1:
  VAR_11 = 0x8f;
  VAR_12 = 4;
  break;
 }

 VAR_10 = FUNC_10(VAR_7, VAR_0)
        & VAR_11;

 VAR_9 = (VAR_6->fan_div[VAR_5] << VAR_12) & ~VAR_11;

 FUNC_11(VAR_7, VAR_0,
         VAR_10 | VAR_9);


 VAR_6->fan_min[VAR_5] = FUNC_3(VAR_8, FUNC_0(VAR_6->fan_div[VAR_5]));
 FUNC_11(VAR_7, FUNC_4(VAR_5),
         VAR_6->fan_min[VAR_5]);
 FUNC_8(&VAR_6->update_lock);

 return VAR_4;
}
