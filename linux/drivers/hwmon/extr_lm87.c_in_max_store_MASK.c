
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lm87_data {int update_lock; int * in_max; int * in_scale; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (long,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 struct i2c_client* FUNC_3 (struct device*) ;
 struct lm87_data* FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (char const*,int,long*) ;
 int FUNC_6 (struct i2c_client*,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 TYPE_1__* FUNC_9 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_0, struct device_attribute *VAR_1,
       const char *VAR_2, size_t VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_3(VAR_0);
 struct lm87_data *VAR_5 = FUNC_4(VAR_4);
 int VAR_6 = FUNC_9(VAR_1)->index;
 long VAR_7;
 int VAR_8;

 VAR_8 = FUNC_5(VAR_2, 10, &VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_7(&VAR_5->update_lock);
 VAR_5->in_max[VAR_6] = FUNC_0(VAR_7, VAR_5->in_scale[VAR_6]);
 FUNC_6(VAR_4, VAR_6 < 6 ? FUNC_2(VAR_6) :
    FUNC_1(VAR_6 - 6), VAR_5->in_max[VAR_6]);
 FUNC_8(&VAR_5->update_lock);
 return VAR_3;
}
