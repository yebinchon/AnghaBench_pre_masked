
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmp401_data {int update_interval; int update_lock; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (unsigned long,int,int) ;
 struct tmp401_data* FUNC_2 (struct device*) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 int FUNC_4 (char const*,int,unsigned long*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1,
         struct device_attribute *VAR_2,
         const char *VAR_3, size_t VAR_4)
{
 struct tmp401_data *VAR_5 = FUNC_2(VAR_1);
 struct i2c_client *VAR_6 = VAR_5->client;
 unsigned long VAR_7;
 int VAR_8, VAR_9;

 VAR_8 = FUNC_4(VAR_3, 10, &VAR_7);
 if (VAR_8)
  return VAR_8;
 VAR_7 = FUNC_1(VAR_7, 125, 16000);
 VAR_9 = 7 - FUNC_0(VAR_7 * 4 / (125 * 3));
 FUNC_5(&VAR_5->update_lock);
 FUNC_3(VAR_6, VAR_0, VAR_9);
 VAR_5->update_interval = (1 << (7 - VAR_9)) * 125;
 FUNC_6(&VAR_5->update_lock);

 return VAR_4;
}
