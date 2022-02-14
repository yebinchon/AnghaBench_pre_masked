
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc654_data {int update_lock; int duty_cycle; int config; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct tc654_data* FUNC_1 (struct device*) ;
 int FUNC_2 (unsigned long,int ,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int ) ;
 scalar_t__ FUNC_4 (char const*,int,unsigned long*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_5, struct device_attribute *VAR_6,
    const char *VAR_7, size_t VAR_8)
{
 struct tc654_data *VAR_9 = FUNC_1(VAR_5);
 struct i2c_client *VAR_10 = VAR_9->client;
 unsigned long VAR_11;
 int VAR_12;

 if (FUNC_4(VAR_7, 10, &VAR_11))
  return -VAR_0;
 if (VAR_11 > 255)
  return -VAR_0;

 FUNC_5(&VAR_9->update_lock);

 if (VAR_11 == 0)
  VAR_9->config |= VAR_2;
 else
  VAR_9->config &= ~VAR_2;

 VAR_9->duty_cycle = FUNC_2(VAR_11, VAR_4,
     FUNC_0(VAR_4));

 VAR_12 = FUNC_3(VAR_10, VAR_1, VAR_9->config);
 if (VAR_12 < 0)
  goto out;

 VAR_12 = FUNC_3(VAR_10, VAR_3,
     VAR_9->duty_cycle);

out:
 FUNC_6(&VAR_9->update_lock);
 return VAR_12 < 0 ? VAR_12 : VAR_8;
}
