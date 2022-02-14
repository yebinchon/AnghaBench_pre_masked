
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adm1026_data {long alarm_mask; int gpio_mask; int update_lock; struct i2c_client* client; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i2c_client*,int ,unsigned long) ;
 struct adm1026_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int,long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_4,
    struct device_attribute *VAR_5,
    const char *VAR_6, size_t VAR_7)
{
 struct adm1026_data *VAR_8 = FUNC_1(VAR_4);
 struct i2c_client *VAR_9 = VAR_8->client;
 unsigned long VAR_10;
 long VAR_11;
 int VAR_12;

 VAR_12 = FUNC_2(VAR_6, 10, &VAR_11);
 if (VAR_12)
  return VAR_12;

 FUNC_3(&VAR_8->update_lock);
 VAR_8->alarm_mask = VAR_11 & 0x7fffffff;
 VAR_10 = VAR_8->alarm_mask
  | (VAR_8->gpio_mask & 0x10000 ? 0x80000000 : 0);
 FUNC_0(VAR_9, VAR_0,
  VAR_10 & 0xff);
 VAR_10 >>= 8;
 FUNC_0(VAR_9, VAR_1,
  VAR_10 & 0xff);
 VAR_10 >>= 8;
 FUNC_0(VAR_9, VAR_2,
  VAR_10 & 0xff);
 VAR_10 >>= 8;
 FUNC_0(VAR_9, VAR_3,
  VAR_10 & 0xff);
 FUNC_4(&VAR_8->update_lock);
 return VAR_7;
}
