
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm63_data {int config_fan; int update_lock; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct lm63_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 int FUNC_3 (char const*,int,unsigned long*) ;
 scalar_t__ FUNC_4 (struct device*,struct lm63_data*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_3,
     struct device_attribute *VAR_4,
     const char *VAR_5, size_t VAR_6)
{
 struct lm63_data *VAR_7 = FUNC_0(VAR_3);
 struct i2c_client *VAR_8 = VAR_7->client;
 unsigned long VAR_9;
 int VAR_10;

 VAR_10 = FUNC_3(VAR_5, 10, &VAR_9);
 if (VAR_10)
  return VAR_10;
 if (VAR_9 < 1 || VAR_9 > 2)
  return -VAR_0;





 if (VAR_9 == 2 && FUNC_4(VAR_3, VAR_7))
  return -VAR_1;

 FUNC_5(&VAR_7->update_lock);
 VAR_7->config_fan = FUNC_1(VAR_8,
          VAR_2);
 if (VAR_9 == 1)
  VAR_7->config_fan |= 0x20;
 else
  VAR_7->config_fan &= ~0x20;
 FUNC_2(VAR_8, VAR_2,
      VAR_7->config_fan);
 FUNC_6(&VAR_7->update_lock);
 return VAR_6;
}
