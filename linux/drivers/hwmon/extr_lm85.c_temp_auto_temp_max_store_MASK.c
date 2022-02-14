
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lm85_data {int* pwm_freq; int update_lock; TYPE_1__* zone; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int index; } ;
struct TYPE_3__ {int range; int max_desired; int limit; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (long) ;
 struct lm85_data* FUNC_4 (struct device*) ;
 int FUNC_5 (char const*,int,long*) ;
 int FUNC_6 (struct i2c_client*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 TYPE_2__* FUNC_9 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_0,
     struct device_attribute *VAR_1,
     const char *VAR_2, size_t VAR_3)
{
 int VAR_4 = FUNC_9(VAR_1)->index;
 struct lm85_data *VAR_5 = FUNC_4(VAR_0);
 struct i2c_client *VAR_6 = VAR_5->client;
 int VAR_7;
 long VAR_8;
 int VAR_9;

 VAR_9 = FUNC_5(VAR_2, 10, &VAR_8);
 if (VAR_9)
  return VAR_9;

 FUNC_7(&VAR_5->update_lock);
 VAR_7 = FUNC_2(VAR_5->zone[VAR_4].limit);
 VAR_5->zone[VAR_4].max_desired = FUNC_3(VAR_8);
 VAR_5->zone[VAR_4].range = FUNC_1(
  VAR_8 - VAR_7);
 FUNC_6(VAR_6, FUNC_0(VAR_4),
  ((VAR_5->zone[VAR_4].range & 0x0f) << 4)
  | VAR_5->pwm_freq[VAR_4]);
 FUNC_8(&VAR_5->update_lock);
 return VAR_3;
}
