
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct emc2103_data {long* temp_max; int update_lock; struct i2c_client* client; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 long FUNC_0 (int ,int) ;
 int * VAR_0 ;
 int FUNC_1 (long,int,int) ;
 struct emc2103_data* FUNC_2 (struct device*) ;
 int FUNC_3 (struct i2c_client*,int ,long) ;
 int FUNC_4 (char const*,int,long*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_1, struct device_attribute *VAR_2,
         const char *VAR_3, size_t VAR_4)
{
 int VAR_5 = FUNC_7(VAR_2)->index;
 struct emc2103_data *VAR_6 = FUNC_2(VAR_1);
 struct i2c_client *VAR_7 = VAR_6->client;
 long VAR_8;

 int VAR_9 = FUNC_4(VAR_3, 10, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_8 = FUNC_0(FUNC_1(VAR_8, -63000, 127000), 1000);

 FUNC_5(&VAR_6->update_lock);
 VAR_6->temp_max[VAR_5] = VAR_8;
 FUNC_3(VAR_7, VAR_0[VAR_5], VAR_8);
 FUNC_6(&VAR_6->update_lock);

 return VAR_4;
}
