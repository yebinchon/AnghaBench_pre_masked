
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct w83l786ng_data {int update_lock; int * fan_min; int * fan_div; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (int) ;
 struct w83l786ng_data* FUNC_3 (struct device*) ;
 int FUNC_4 (char const*,int,unsigned long*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (struct device_attribute*) ;
 int FUNC_8 (struct i2c_client*,int ,int ) ;

__attribute__((used)) static ssize_t
FUNC_9(struct device *VAR_0, struct device_attribute *VAR_1,
       const char *VAR_2, size_t VAR_3)
{
 int VAR_4 = FUNC_7(VAR_1)->index;
 struct w83l786ng_data *VAR_5 = FUNC_3(VAR_0);
 struct i2c_client *VAR_6 = VAR_5->client;
 unsigned long VAR_7;
 int VAR_8;

 VAR_8 = FUNC_4(VAR_2, 10, &VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_5(&VAR_5->update_lock);
 VAR_5->fan_min[VAR_4] = FUNC_1(VAR_7, FUNC_0(VAR_5->fan_div[VAR_4]));
 FUNC_8(VAR_6, FUNC_2(VAR_4),
         VAR_5->fan_min[VAR_4]);
 FUNC_6(&VAR_5->update_lock);

 return VAR_3;
}
