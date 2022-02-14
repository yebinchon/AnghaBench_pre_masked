
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sensor_device_attribute {int index; } ;
struct lm63_data {int* temp11; int update_lock; scalar_t__ temp2_offset; scalar_t__ remote_unsigned; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 struct lm63_data* FUNC_2 (struct device*) ;
 int FUNC_3 (struct i2c_client*,int const,int) ;
 int FUNC_4 (char const*,int,long*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct sensor_device_attribute* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_0, struct device_attribute *VAR_1,
     const char *VAR_2, size_t VAR_3)
{
 static const u8 VAR_4[6] = {
  130,
  131,
  132,
  133,
  128,
  129,
 };

 struct sensor_device_attribute *VAR_5 = FUNC_7(VAR_1);
 struct lm63_data *VAR_6 = FUNC_2(VAR_0);
 struct i2c_client *VAR_7 = VAR_6->client;
 long VAR_8;
 int VAR_9;
 int VAR_10 = VAR_5->index;

 VAR_9 = FUNC_4(VAR_2, 10, &VAR_8);
 if (VAR_9)
  return VAR_9;

 FUNC_5(&VAR_6->update_lock);
 if (VAR_6->remote_unsigned && VAR_10 == 2)
  VAR_6->temp11[VAR_10] = FUNC_0(VAR_8 - VAR_6->temp2_offset);
 else
  VAR_6->temp11[VAR_10] = FUNC_1(VAR_8 - VAR_6->temp2_offset);

 FUNC_3(VAR_7, VAR_4[(VAR_10 - 1) * 2],
      VAR_6->temp11[VAR_10] >> 8);
 FUNC_3(VAR_7, VAR_4[(VAR_10 - 1) * 2 + 1],
      VAR_6->temp11[VAR_10] & 0xff);
 FUNC_6(&VAR_6->update_lock);
 return VAR_3;
}
