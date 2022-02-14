
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rohm_ts_data {TYPE_1__* input; int setup2; int client; scalar_t__ initialized; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rohm_ts_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (char const*,int ,unsigned int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct i2c_client* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2, struct device_attribute *VAR_3,
        const char *VAR_4, size_t VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_5(VAR_2);
 struct rohm_ts_data *VAR_7 = FUNC_0(VAR_6);
 unsigned int VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_4, 0, &VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_3(&VAR_7->input->mutex);
 if (VAR_9)
  return VAR_9;

 if (VAR_8)
  VAR_7->setup2 |= VAR_1;
 else
  VAR_7->setup2 &= ~VAR_1;

 if (VAR_7->initialized)
  VAR_9 = FUNC_1(VAR_7->client, VAR_0,
        VAR_7->setup2);

 FUNC_4(&VAR_7->input->mutex);

 return VAR_9 ? VAR_9 : VAR_5;
}
