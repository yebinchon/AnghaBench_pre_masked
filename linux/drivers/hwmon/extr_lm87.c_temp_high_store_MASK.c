
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lm87_data {int update_lock; int * temp_high; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int * VAR_0 ;
 int FUNC_0 (long) ;
 struct i2c_client* FUNC_1 (struct device*) ;
 struct lm87_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (char const*,int,long*) ;
 int FUNC_4 (struct i2c_client*,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_1,
          struct device_attribute *VAR_2, const char *VAR_3,
          size_t VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_1(VAR_1);
 struct lm87_data *VAR_6 = FUNC_2(VAR_5);
 int VAR_7 = FUNC_7(VAR_2)->index;
 long VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_3, 10, &VAR_8);
 if (VAR_9)
  return VAR_9;

 FUNC_5(&VAR_6->update_lock);
 VAR_6->temp_high[VAR_7] = FUNC_0(VAR_8);
 FUNC_4(VAR_5, VAR_0[VAR_7], VAR_6->temp_high[VAR_7]);
 FUNC_6(&VAR_6->update_lock);
 return VAR_4;
}
