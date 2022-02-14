
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm93_data {int config; int update_lock; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct lm93_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int,unsigned long*) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
     struct device_attribute *VAR_2,
     const char *VAR_3, size_t VAR_4)
{
 struct lm93_data *VAR_5 = FUNC_0(VAR_1);
 struct i2c_client *VAR_6 = VAR_5->client;
 unsigned long VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_3, 10, &VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_3(&VAR_5->update_lock);
 if (VAR_7)
  VAR_5->config |= 0x10;
 else
  VAR_5->config &= ~0x10;
 FUNC_2(VAR_6, VAR_0, VAR_5->config);
 FUNC_4(&VAR_5->update_lock);
 return VAR_4;
}
