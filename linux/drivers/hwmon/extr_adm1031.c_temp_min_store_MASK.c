
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adm1031_data {int update_lock; int * temp_min; struct i2c_client* client; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (long) ;
 int FUNC_2 (struct i2c_client*,int ,int ) ;
 long FUNC_3 (long,int,int) ;
 struct adm1031_data* FUNC_4 (struct device*) ;
 int FUNC_5 (char const*,int,long*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_0,
         struct device_attribute *VAR_1, const char *VAR_2,
         size_t VAR_3)
{
 struct adm1031_data *VAR_4 = FUNC_4(VAR_0);
 struct i2c_client *VAR_5 = VAR_4->client;
 int VAR_6 = FUNC_8(VAR_1)->index;
 long VAR_7;
 int VAR_8;

 VAR_8 = FUNC_5(VAR_2, 10, &VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_7 = FUNC_3(VAR_7, -55000, 127000);
 FUNC_6(&VAR_4->update_lock);
 VAR_4->temp_min[VAR_6] = FUNC_1(VAR_7);
 FUNC_2(VAR_5, FUNC_0(VAR_6),
       VAR_4->temp_min[VAR_6]);
 FUNC_7(&VAR_4->update_lock);
 return VAR_3;
}
