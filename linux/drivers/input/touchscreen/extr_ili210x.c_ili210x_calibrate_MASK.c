
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ili210x {int client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
typedef int cmd ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 struct ili210x* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int ,int *,int) ;
 scalar_t__ FUNC_2 (char const*,int,unsigned long*) ;
 struct i2c_client* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_3,
     struct device_attribute *VAR_4,
     const char *VAR_5, size_t VAR_6)
{
 struct i2c_client *VAR_7 = FUNC_3(VAR_3);
 struct ili210x *VAR_8 = FUNC_0(VAR_7);
 unsigned long VAR_9;
 int VAR_10;
 u8 VAR_11 = VAR_2;

 if (FUNC_2(VAR_5, 10, &VAR_9))
  return -VAR_0;

 if (VAR_9 > 1)
  return -VAR_0;

 if (VAR_9) {
  VAR_10 = FUNC_1(VAR_8->client, &VAR_11, sizeof(VAR_11));
  if (VAR_10 != sizeof(VAR_11))
   return -VAR_1;
 }

 return VAR_6;
}
