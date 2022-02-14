
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adm1026_data {long gpio; int alarms; int update_lock; struct i2c_client* client; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_client*,int ,long) ;
 struct adm1026_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int,long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3, struct device_attribute *VAR_4,
     const char *VAR_5, size_t VAR_6)
{
 struct adm1026_data *VAR_7 = FUNC_1(VAR_3);
 struct i2c_client *VAR_8 = VAR_7->client;
 long VAR_9;
 long VAR_10;
 int VAR_11;

 VAR_11 = FUNC_2(VAR_5, 10, &VAR_10);
 if (VAR_11)
  return VAR_11;

 FUNC_3(&VAR_7->update_lock);
 VAR_7->gpio = VAR_10 & 0x1ffff;
 VAR_9 = VAR_7->gpio;
 FUNC_0(VAR_8, VAR_0, VAR_9 & 0xff);
 VAR_9 >>= 8;
 FUNC_0(VAR_8, VAR_1, VAR_9 & 0xff);
 VAR_9 = ((VAR_9 >> 1) & 0x80) | (VAR_7->alarms >> 24 & 0x7f);
 FUNC_0(VAR_8, VAR_2, VAR_9 & 0xff);
 FUNC_4(&VAR_7->update_lock);
 return VAR_6;
}
