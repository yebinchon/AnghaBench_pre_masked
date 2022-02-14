
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adm1026_data {unsigned long config1; int update_lock; struct i2c_client* client; } ;
typedef int ssize_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_client*,int ,unsigned long) ;
 struct adm1026_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3,
  struct device_attribute *VAR_4, const char *VAR_5, size_t VAR_6)
{
 struct adm1026_data *VAR_7 = FUNC_1(VAR_3);
 struct i2c_client *VAR_8 = VAR_7->client;
 unsigned long VAR_9;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_5, 10, &VAR_9);
 if (VAR_10)
  return VAR_10;

 if (VAR_9 > 1)
  return -VAR_2;

 FUNC_3(&VAR_7->update_lock);
 VAR_7->config1 = (VAR_7->config1 & ~VAR_1) | (VAR_9 << 4);
 FUNC_0(VAR_8, VAR_0, VAR_7->config1);
 FUNC_4(&VAR_7->update_lock);

 return VAR_6;
}
