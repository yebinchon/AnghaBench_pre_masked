
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc654_data {int update_lock; int config; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tc654_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct i2c_client*,int ,int ) ;
 scalar_t__ FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3, struct device_attribute *VAR_4,
         const char *VAR_5, size_t VAR_6)
{
 struct tc654_data *VAR_7 = FUNC_0(VAR_3);
 struct i2c_client *VAR_8 = VAR_7->client;
 unsigned long VAR_9;
 int VAR_10;

 if (FUNC_2(VAR_5, 10, &VAR_9))
  return -VAR_0;

 if (VAR_9 != 0 && VAR_9 != 1)
  return -VAR_0;

 FUNC_3(&VAR_7->update_lock);

 if (VAR_9)
  VAR_7->config |= VAR_2;
 else
  VAR_7->config &= ~VAR_2;

 VAR_10 = FUNC_1(VAR_8, VAR_1, VAR_7->config);

 FUNC_4(&VAR_7->update_lock);
 return VAR_10 < 0 ? VAR_10 : VAR_6;
}
