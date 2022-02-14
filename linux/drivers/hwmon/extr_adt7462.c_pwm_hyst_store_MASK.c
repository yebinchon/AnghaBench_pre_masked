
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {size_t index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7462_data {long* pwm_trange; int lock; struct i2c_client* client; } ;
typedef size_t ssize_t ;


 long VAR_0 ;
 long VAR_1 ;
 int FUNC_0 (size_t) ;
 long FUNC_1 (long,int) ;
 size_t VAR_2 ;
 long FUNC_2 (long,int ,int) ;
 struct adt7462_data* FUNC_3 (struct device*) ;
 int FUNC_4 (struct i2c_client*,int ,long) ;
 scalar_t__ FUNC_5 (char const*,int,long*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct sensor_device_attribute* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_3,
         struct device_attribute *VAR_4,
         const char *VAR_5, size_t VAR_6)
{
 struct sensor_device_attribute *VAR_7 = FUNC_8(VAR_4);
 struct adt7462_data *VAR_8 = FUNC_3(VAR_3);
 struct i2c_client *VAR_9 = VAR_8->client;
 long VAR_10;

 if (FUNC_5(VAR_5, 10, &VAR_10))
  return -VAR_2;

 VAR_10 = FUNC_2(VAR_10, 0, 15000);
 VAR_10 = FUNC_1(VAR_10, 1000);


 VAR_10 &= VAR_0;
 VAR_10 |= VAR_8->pwm_trange[VAR_7->index] & VAR_1;

 FUNC_6(&VAR_8->lock);
 VAR_8->pwm_trange[VAR_7->index] = VAR_10;
 FUNC_4(VAR_9, FUNC_0(VAR_7->index),
      VAR_10);
 FUNC_7(&VAR_8->lock);

 return VAR_6;
}
