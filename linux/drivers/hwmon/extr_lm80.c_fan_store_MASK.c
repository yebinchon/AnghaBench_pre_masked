
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lm80_data {int update_lock; int ** fan; int * fan_div; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; int nr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (int) ;
 struct lm80_data* FUNC_3 (struct device*) ;
 int FUNC_4 (char const*,int,unsigned long*) ;
 int FUNC_5 (struct i2c_client*,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_0, struct device_attribute *VAR_1,
    const char *VAR_2, size_t VAR_3)
{
 int VAR_4 = FUNC_8(VAR_1)->index;
 int VAR_5 = FUNC_8(VAR_1)->nr;
 struct lm80_data *VAR_6 = FUNC_3(VAR_0);
 struct i2c_client *VAR_7 = VAR_6->client;
 unsigned long VAR_8;
 int VAR_9 = FUNC_4(VAR_2, 10, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 FUNC_6(&VAR_6->update_lock);
 VAR_6->fan[VAR_5][VAR_4] = FUNC_1(VAR_8,
       FUNC_0(VAR_6->fan_div[VAR_4]));
 FUNC_5(VAR_7, FUNC_2(VAR_4 + 1),
    VAR_6->fan[VAR_5][VAR_4]);
 FUNC_7(&VAR_6->update_lock);
 return VAR_3;
}
