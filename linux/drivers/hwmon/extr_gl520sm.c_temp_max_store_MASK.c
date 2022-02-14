
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct gl520_data {int update_lock; int * temp_max; struct i2c_client* client; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int * VAR_0 ;
 int FUNC_0 (long) ;
 struct gl520_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct i2c_client*,int ,int ) ;
 int FUNC_3 (char const*,int,long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1,
         struct device_attribute *VAR_2, const char *VAR_3,
         size_t VAR_4)
{
 struct gl520_data *VAR_5 = FUNC_1(VAR_1);
 struct i2c_client *VAR_6 = VAR_5->client;
 int VAR_7 = FUNC_6(VAR_2)->index;
 long VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_3, 10, &VAR_8);
 if (VAR_9)
  return VAR_9;

 FUNC_4(&VAR_5->update_lock);
 VAR_5->temp_max[VAR_7] = FUNC_0(VAR_8);
 FUNC_2(VAR_6, VAR_0[VAR_7], VAR_5->temp_max[VAR_7]);
 FUNC_5(&VAR_5->update_lock);
 return VAR_4;
}
