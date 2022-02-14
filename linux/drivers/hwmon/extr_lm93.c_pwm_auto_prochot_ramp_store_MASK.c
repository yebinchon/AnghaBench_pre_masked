
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lm93_data {int update_lock; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (unsigned long) ;
 int VAR_0 ;
 struct lm93_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (struct i2c_client*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1,
      struct device_attribute *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 struct lm93_data *VAR_5 = FUNC_1(VAR_1);
 struct i2c_client *VAR_6 = VAR_5->client;
 u8 VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_3, 10, &VAR_8);
 if (VAR_9)
  return VAR_9;

 FUNC_5(&VAR_5->update_lock);
 VAR_7 = FUNC_3(VAR_6, VAR_0);
 VAR_7 = (VAR_7 & 0x0f) | (FUNC_0(VAR_8) << 4 & 0xf0);
 FUNC_4(VAR_6, VAR_0, VAR_7);
 FUNC_6(&VAR_5->update_lock);
 return VAR_4;
}
