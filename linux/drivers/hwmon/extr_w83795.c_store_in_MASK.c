
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct w83795_data {int has_gain; int** in_lsb; int** in; int update_lock; } ;
struct sensor_device_attribute_2 {int nr; int index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int,int) ;
 size_t VAR_2 ;
 int** VAR_3 ;
 int ** VAR_4 ;
 unsigned long FUNC_1 (unsigned long,int ,int) ;
 struct w83795_data* FUNC_2 (struct i2c_client*) ;
 unsigned long FUNC_3 (int,unsigned long) ;
 scalar_t__ FUNC_4 (char const*,int,unsigned long*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct i2c_client* FUNC_7 (struct device*) ;
 struct sensor_device_attribute_2* FUNC_8 (struct device_attribute*) ;
 int FUNC_9 (struct i2c_client*,int ) ;
 int FUNC_10 (struct i2c_client*,int ,int) ;

__attribute__((used)) static ssize_t
FUNC_11(struct device *VAR_5, struct device_attribute *VAR_6,
  const char *VAR_7, size_t VAR_8)
{
 struct sensor_device_attribute_2 *VAR_9 =
     FUNC_8(VAR_6);
 int VAR_10 = VAR_9->nr;
 int VAR_11 = VAR_9->index;
 struct i2c_client *VAR_12 = FUNC_7(VAR_5);
 struct w83795_data *VAR_13 = FUNC_2(VAR_12);
 unsigned long VAR_14;
 u8 VAR_15;
 u8 VAR_16;

 if (FUNC_4(VAR_7, 10, &VAR_14) < 0)
  return -VAR_0;
 VAR_14 = FUNC_3(VAR_11, VAR_14);

 if ((VAR_11 >= 17) &&
     !((VAR_13->has_gain >> (VAR_11 - 17)) & 1))
  VAR_14 /= 8;
 VAR_14 = FUNC_1(VAR_14, 0, 0x3FF);
 FUNC_5(&VAR_13->update_lock);

 VAR_16 = VAR_3[VAR_11][VAR_1];
 VAR_15 = FUNC_9(VAR_12, FUNC_0(VAR_16, VAR_10));
 VAR_15 &= ~(0x03 << VAR_3[VAR_11][VAR_2]);
 VAR_15 |= (VAR_14 & 0x03) << VAR_3[VAR_11][VAR_2];
 FUNC_10(VAR_12, FUNC_0(VAR_16, VAR_10), VAR_15);
 VAR_13->in_lsb[VAR_16][VAR_10] = VAR_15;

 VAR_15 = (VAR_14 >> 2) & 0xff;
 FUNC_10(VAR_12, VAR_4[VAR_11][VAR_10], VAR_15);
 VAR_13->in[VAR_11][VAR_10] = VAR_15;

 FUNC_6(&VAR_13->update_lock);
 return VAR_8;
}
