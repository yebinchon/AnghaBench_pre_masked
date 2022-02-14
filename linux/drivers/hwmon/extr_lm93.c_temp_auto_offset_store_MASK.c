
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sensor_device_attribute_2 {int index; int nr; } ;
struct TYPE_2__ {int* offset; } ;
struct lm93_data {int sfc2; int update_lock; TYPE_1__ block10; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,unsigned long,int,int) ;
 struct lm93_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char const*,int,unsigned long*) ;
 int FUNC_4 (struct i2c_client*,int ) ;
 int FUNC_5 (struct i2c_client*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct sensor_device_attribute_2* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_1,
          struct device_attribute *VAR_2,
          const char *VAR_3, size_t VAR_4)
{
 struct sensor_device_attribute_2 *VAR_5 = FUNC_8(VAR_2);
 int VAR_6 = VAR_5->index;
 int VAR_7 = VAR_5->nr;
 struct lm93_data *VAR_8 = FUNC_2(VAR_1);
 struct i2c_client *VAR_9 = VAR_8->client;
 unsigned long VAR_10;
 int VAR_11;

 VAR_11 = FUNC_3(VAR_3, 10, &VAR_10);
 if (VAR_11)
  return VAR_11;

 FUNC_6(&VAR_8->update_lock);

 VAR_8->sfc2 = FUNC_4(VAR_9, VAR_0);
 VAR_8->sfc2 |= ((VAR_6 < 2) ? 0x10 : 0x20);
 FUNC_5(VAR_9, VAR_0, VAR_8->sfc2);
 VAR_8->block10.offset[VAR_7] = FUNC_1(
   VAR_8->block10.offset[VAR_7], VAR_10, VAR_6, 1);
 FUNC_5(VAR_9, FUNC_0(VAR_7),
   VAR_8->block10.offset[VAR_7]);
 FUNC_7(&VAR_8->update_lock);
 return VAR_4;
}
