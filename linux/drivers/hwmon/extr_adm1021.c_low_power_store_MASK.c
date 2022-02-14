
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adm1021_data {char low_power; int update_lock; struct i2c_client* client; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct adm1021_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 int FUNC_3 (char const*,int,unsigned long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
          struct device_attribute *VAR_3,
          const char *VAR_4, size_t VAR_5)
{
 struct adm1021_data *VAR_6 = FUNC_0(VAR_2);
 struct i2c_client *VAR_7 = VAR_6->client;
 char VAR_8;
 unsigned long VAR_9;
 int VAR_10;

 VAR_10 = FUNC_3(VAR_4, 10, &VAR_9);
 if (VAR_10)
  return VAR_10;
 VAR_8 = VAR_9 != 0;

 FUNC_4(&VAR_6->update_lock);
 if (VAR_8 != VAR_6->low_power) {
  int VAR_11 = FUNC_1(
   VAR_7, VAR_0);
  VAR_6->low_power = VAR_8;
  FUNC_2(VAR_7, VAR_1,
   (VAR_11 & 0xBF) | (VAR_8 << 6));
 }
 FUNC_5(&VAR_6->update_lock);

 return VAR_5;
}
