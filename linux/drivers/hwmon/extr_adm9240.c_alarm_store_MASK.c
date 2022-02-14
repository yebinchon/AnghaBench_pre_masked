
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adm9240_data {int update_lock; scalar_t__ valid; struct i2c_client* client; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,char*) ;
 struct adm9240_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 scalar_t__ FUNC_3 (char const*,int,unsigned long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2, struct device_attribute *VAR_3,
      const char *VAR_4, size_t VAR_5)
{
 struct adm9240_data *VAR_6 = FUNC_1(VAR_2);
 struct i2c_client *VAR_7 = VAR_6->client;
 unsigned long VAR_8;

 if (FUNC_3(VAR_4, 10, &VAR_8) || VAR_8 != 0)
  return -VAR_1;

 FUNC_4(&VAR_6->update_lock);
 FUNC_2(VAR_7, VAR_0, 0x80);
 VAR_6->valid = 0;
 FUNC_5(&VAR_6->update_lock);
 FUNC_0(&VAR_7->dev, "chassis intrusion latch cleared\n");

 return VAR_5;
}
