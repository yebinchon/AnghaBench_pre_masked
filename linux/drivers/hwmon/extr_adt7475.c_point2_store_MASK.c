
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {size_t index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7475_data {int config5; int** temp; int* range; int lock; struct i2c_client* client; } ;
typedef size_t ssize_t ;


 int FUNC_0 (scalar_t__*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (int ) ;
 scalar_t__* VAR_3 ;
 long FUNC_4 (long,scalar_t__,scalar_t__) ;
 struct adt7475_data* FUNC_5 (struct device*) ;
 long FUNC_6 (long,scalar_t__*,int) ;
 int FUNC_7 (struct i2c_client*,int ,long) ;
 scalar_t__ FUNC_8 (char const*,int,long*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct adt7475_data*,int) ;
 struct sensor_device_attribute_2* FUNC_12 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_13(struct device *VAR_4, struct device_attribute *VAR_5,
       const char *VAR_6, size_t VAR_7)
{
 struct adt7475_data *VAR_8 = FUNC_5(VAR_4);
 struct i2c_client *VAR_9 = VAR_8->client;
 struct sensor_device_attribute_2 *VAR_10 = FUNC_12(VAR_5);
 int VAR_11;
 long VAR_12;

 if (FUNC_8(VAR_6, 10, &VAR_12))
  return -VAR_1;

 FUNC_9(&VAR_8->lock);


 VAR_8->config5 = FUNC_3(VAR_2);
 VAR_8->temp[VAR_0][VAR_10->index] =
  FUNC_3(FUNC_1(VAR_10->index)) << 2;
 VAR_8->range[VAR_10->index] =
  FUNC_3(FUNC_2(VAR_10->index));





 VAR_11 = FUNC_11(VAR_8, VAR_8->temp[VAR_0][VAR_10->index]);
 VAR_12 = FUNC_4(VAR_12, VAR_11 + VAR_3[0],
  VAR_11 + VAR_3[FUNC_0(VAR_3) - 1]);
 VAR_12 -= VAR_11;


 VAR_12 = FUNC_6(VAR_12, VAR_3, FUNC_0(VAR_3));

 VAR_8->range[VAR_10->index] &= ~0xF0;
 VAR_8->range[VAR_10->index] |= VAR_12 << 4;

 FUNC_7(VAR_9, FUNC_2(VAR_10->index),
      VAR_8->range[VAR_10->index]);

 FUNC_10(&VAR_8->lock);
 return VAR_7;
}
