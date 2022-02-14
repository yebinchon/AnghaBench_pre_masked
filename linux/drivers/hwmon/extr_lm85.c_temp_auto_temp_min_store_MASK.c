
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
struct TYPE_3__ {int limit; int range; int max_desired; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (long) ;
 struct lm85_data* FUNC_5 (struct device*) ;
 int FUNC_6 (char const*,int,long*) ;
 int FUNC_7 (struct i2c_client*,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 TYPE_2__* FUNC_10 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_11(struct device *VAR_0,
     struct device_attribute *VAR_1,
     const char *VAR_2, size_t VAR_3)
{
 int VAR_4 = FUNC_10(VAR_1)->index;
 struct lm85_data *VAR_5 = FUNC_5(VAR_0);
 struct i2c_client *VAR_6 = VAR_5->client;
 long VAR_7;
 int VAR_8;

 VAR_8 = FUNC_6(VAR_2, 10, &VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_8(&VAR_5->update_lock);
 VAR_5->zone[VAR_4].limit = FUNC_4(VAR_7);
 FUNC_7(VAR_6, FUNC_0(VAR_4),
  VAR_5->zone[VAR_4].limit);


 VAR_5->zone[VAR_4].range = FUNC_2(
  FUNC_3(VAR_5->zone[VAR_4].max_desired) -
  FUNC_3(VAR_5->zone[VAR_4].limit));
 FUNC_7(VAR_6, FUNC_1(VAR_4),
  ((VAR_5->zone[VAR_4].range & 0x0f) << 4)
  | VAR_5->pwm_freq[VAR_4]);

 FUNC_9(&VAR_5->update_lock);
 return VAR_3;
}
