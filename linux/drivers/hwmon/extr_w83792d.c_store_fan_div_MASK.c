
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct w83792d_data {int* fan_min; int* fan_div; int update_lock; } ;
struct sensor_device_attribute {int index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (int,int ) ;
 int FUNC_3 (unsigned long,int ) ;
 int * VAR_0 ;
 int * VAR_1 ;
 struct w83792d_data* FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (char const*,int,unsigned long*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct i2c_client* FUNC_8 (struct device*) ;
 struct sensor_device_attribute* FUNC_9 (struct device_attribute*) ;
 int FUNC_10 (struct i2c_client*,int ) ;
 int FUNC_11 (struct i2c_client*,int ,int) ;

__attribute__((used)) static ssize_t
FUNC_12(struct device *VAR_2, struct device_attribute *VAR_3,
  const char *VAR_4, size_t VAR_5)
{
 struct sensor_device_attribute *VAR_6 = FUNC_9(VAR_3);
 int VAR_7 = VAR_6->index - 1;
 struct i2c_client *VAR_8 = FUNC_8(VAR_2);
 struct w83792d_data *VAR_9 = FUNC_4(VAR_8);
 unsigned long VAR_10;

 u8 VAR_11 = 0;
 u8 VAR_12;
 unsigned long VAR_13;
 int VAR_14;

 VAR_14 = FUNC_5(VAR_4, 10, &VAR_13);
 if (VAR_14)
  return VAR_14;


 FUNC_6(&VAR_9->update_lock);
 VAR_10 = FUNC_2(VAR_9->fan_min[VAR_7],
      FUNC_0(VAR_9->fan_div[VAR_7]));

 VAR_9->fan_div[VAR_7] = FUNC_1(VAR_13);

 VAR_11 = FUNC_10(VAR_8, VAR_0[VAR_7 >> 1]);
 VAR_11 &= (VAR_7 & 0x01) ? 0x8f : 0xf8;
 VAR_12 = (VAR_7 & 0x01) ? (((VAR_9->fan_div[VAR_7]) << 4) & 0x70)
     : ((VAR_9->fan_div[VAR_7]) & 0x07);
 FUNC_11(VAR_8, VAR_0[VAR_7 >> 1],
     VAR_11 | VAR_12);


 VAR_9->fan_min[VAR_7] = FUNC_3(VAR_10, FUNC_0(VAR_9->fan_div[VAR_7]));
 FUNC_11(VAR_8, VAR_1[VAR_7], VAR_9->fan_min[VAR_7]);
 FUNC_7(&VAR_9->update_lock);

 return VAR_5;
}
