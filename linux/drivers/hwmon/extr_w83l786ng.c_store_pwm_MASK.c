
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct w83l786ng_data {unsigned long* pwm; int update_lock; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 unsigned long FUNC_0 (unsigned long,int) ;
 int * VAR_0 ;
 unsigned long FUNC_1 (unsigned long,int ,int) ;
 struct w83l786ng_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char const*,int,unsigned long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (struct device_attribute*) ;
 int FUNC_7 (struct i2c_client*,int ) ;
 int FUNC_8 (struct i2c_client*,int ,unsigned long) ;

__attribute__((used)) static ssize_t
FUNC_9(struct device *VAR_1, struct device_attribute *VAR_2,
   const char *VAR_3, size_t VAR_4)
{
 int VAR_5 = FUNC_6(VAR_2)->index;
 struct w83l786ng_data *VAR_6 = FUNC_2(VAR_1);
 struct i2c_client *VAR_7 = VAR_6->client;
 unsigned long VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_3, 10, &VAR_8);
 if (VAR_9)
  return VAR_9;
 VAR_8 = FUNC_1(VAR_8, 0, 255);
 VAR_8 = FUNC_0(VAR_8, 0x11);

 FUNC_4(&VAR_6->update_lock);
 VAR_6->pwm[VAR_5] = VAR_8 * 0x11;
 VAR_8 |= FUNC_7(VAR_7, VAR_0[VAR_5]) & 0xf0;
 FUNC_8(VAR_7, VAR_0[VAR_5], VAR_8);
 FUNC_5(&VAR_6->update_lock);
 return VAR_4;
}
