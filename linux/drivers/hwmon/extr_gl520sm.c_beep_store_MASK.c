
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct gl520_data {int beep_mask; int update_lock; struct i2c_client* client; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gl520_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 int FUNC_3 (char const*,int,unsigned long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2, struct device_attribute *VAR_3,
     const char *VAR_4, size_t VAR_5)
{
 struct gl520_data *VAR_6 = FUNC_0(VAR_2);
 struct i2c_client *VAR_7 = VAR_6->client;
 int VAR_8 = FUNC_6(VAR_3)->index;
 unsigned long VAR_9;

 int VAR_10;

 VAR_10 = FUNC_3(VAR_4, 10, &VAR_9);
 if (VAR_10)
  return VAR_10;
 if (VAR_9 & ~1)
  return -VAR_0;

 FUNC_4(&VAR_6->update_lock);
 VAR_6->beep_mask = FUNC_1(VAR_7, VAR_1);
 if (VAR_9)
  VAR_6->beep_mask |= (1 << VAR_8);
 else
  VAR_6->beep_mask &= ~(1 << VAR_8);
 FUNC_2(VAR_7, VAR_1, VAR_6->beep_mask);
 FUNC_5(&VAR_6->update_lock);
 return VAR_5;
}
