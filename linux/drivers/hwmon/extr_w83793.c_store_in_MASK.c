
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83793_data {int* in_low_bits; unsigned long** in; int update_lock; } ;
struct sensor_device_attribute_2 {int nr; int index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int ** VAR_0 ;
 int * VAR_1 ;
 unsigned long FUNC_0 (unsigned long,int ,int) ;
 struct w83793_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int* VAR_2 ;
 int* VAR_3 ;
 struct i2c_client* FUNC_5 (struct device*) ;
 struct sensor_device_attribute_2* FUNC_6 (struct device_attribute*) ;
 int FUNC_7 (struct i2c_client*,int ) ;
 int FUNC_8 (struct i2c_client*,int ,unsigned long) ;

__attribute__((used)) static ssize_t
FUNC_9(struct device *VAR_4, struct device_attribute *VAR_5,
  const char *VAR_6, size_t VAR_7)
{
 struct sensor_device_attribute_2 *VAR_8 =
     FUNC_6(VAR_5);
 int VAR_9 = VAR_8->nr;
 int VAR_10 = VAR_8->index;
 struct i2c_client *VAR_11 = FUNC_5(VAR_4);
 struct w83793_data *VAR_12 = FUNC_1(VAR_11);
 unsigned long VAR_13;
 int VAR_14;

 VAR_14 = FUNC_2(VAR_6, 10, &VAR_13);
 if (VAR_14)
  return VAR_14;
 VAR_13 = (VAR_13 + VAR_2[VAR_10] / 2) / VAR_2[VAR_10];

 FUNC_3(&VAR_12->update_lock);
 if (VAR_10 > 2) {

  if (VAR_9 == 1 || VAR_9 == 2)
   VAR_13 -= VAR_3[VAR_10] / VAR_2[VAR_10];
  VAR_13 = FUNC_0(VAR_13, 0, 255);
 } else {
  VAR_13 = FUNC_0(VAR_13, 0, 0x3FF);
  VAR_12->in_low_bits[VAR_9] =
      FUNC_7(VAR_11, VAR_1[VAR_9]);
  VAR_12->in_low_bits[VAR_9] &= ~(0x03 << (2 * VAR_10));
  VAR_12->in_low_bits[VAR_9] |= (VAR_13 & 0x03) << (2 * VAR_10);
  FUNC_8(VAR_11, VAR_1[VAR_9],
           VAR_12->in_low_bits[VAR_9]);
  VAR_13 >>= 2;
 }
 VAR_12->in[VAR_10][VAR_9] = VAR_13;
 FUNC_8(VAR_11, VAR_0[VAR_10][VAR_9],
       VAR_12->in[VAR_10][VAR_9]);
 FUNC_4(&VAR_12->update_lock);
 return VAR_7;
}
