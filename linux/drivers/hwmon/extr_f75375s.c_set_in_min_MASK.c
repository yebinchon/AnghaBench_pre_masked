
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct f75375_data {unsigned long* in_min; int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct i2c_client*,int ,unsigned long) ;
 struct f75375_data* FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (char const*,int,unsigned long*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct i2c_client* FUNC_8 (struct device*) ;
 TYPE_1__* FUNC_9 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_0, struct device_attribute *VAR_1,
  const char *VAR_2, size_t VAR_3)
{
 int VAR_4 = FUNC_9(VAR_1)->index;
 struct i2c_client *VAR_5 = FUNC_8(VAR_0);
 struct f75375_data *VAR_6 = FUNC_4(VAR_5);
 unsigned long VAR_7;
 int VAR_8;

 VAR_8 = FUNC_5(VAR_2, 10, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7 = FUNC_2(FUNC_1(VAR_7), 0, 0xff);
 FUNC_6(&VAR_6->update_lock);
 VAR_6->in_min[VAR_4] = VAR_7;
 FUNC_3(VAR_5, FUNC_0(VAR_4), VAR_6->in_min[VAR_4]);
 FUNC_7(&VAR_6->update_lock);
 return VAR_3;
}
