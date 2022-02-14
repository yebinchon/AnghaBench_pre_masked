
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc654_data {int update_lock; int * fan_fault; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int) ;
 unsigned long FUNC_2 (unsigned long,int ,int) ;
 struct tc654_data* FUNC_3 (struct device*) ;
 int FUNC_4 (struct i2c_client*,int ,int ) ;
 scalar_t__ FUNC_5 (char const*,int,unsigned long*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_1, struct device_attribute *VAR_2,
        const char *VAR_3, size_t VAR_4)
{
 int VAR_5 = FUNC_8(VAR_2)->index;
 struct tc654_data *VAR_6 = FUNC_3(VAR_1);
 struct i2c_client *VAR_7 = VAR_6->client;
 unsigned long VAR_8;
 int VAR_9;

 if (FUNC_5(VAR_3, 10, &VAR_8))
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_8, 0, 12750);

 FUNC_6(&VAR_6->update_lock);

 VAR_6->fan_fault[VAR_5] = FUNC_0(VAR_8);
 VAR_9 = FUNC_4(VAR_7, FUNC_1(VAR_5),
     VAR_6->fan_fault[VAR_5]);

 FUNC_7(&VAR_6->update_lock);
 return VAR_9 < 0 ? VAR_9 : VAR_4;
}
