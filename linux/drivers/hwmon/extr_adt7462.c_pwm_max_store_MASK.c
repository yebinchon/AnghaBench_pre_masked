
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7462_data {long pwm_max; int lock; struct i2c_client* client; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 long FUNC_0 (long,int ,int) ;
 struct adt7462_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct i2c_client*,int ,long) ;
 scalar_t__ FUNC_3 (char const*,int,long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
        struct device_attribute *VAR_3,
        const char *VAR_4, size_t VAR_5)
{
 struct adt7462_data *VAR_6 = FUNC_1(VAR_2);
 struct i2c_client *VAR_7 = VAR_6->client;
 long VAR_8;

 if (FUNC_3(VAR_4, 10, &VAR_8))
  return -VAR_1;

 VAR_8 = FUNC_0(VAR_8, 0, 255);

 FUNC_4(&VAR_6->lock);
 VAR_6->pwm_max = VAR_8;
 FUNC_2(VAR_7, VAR_0, VAR_8);
 FUNC_5(&VAR_6->lock);

 return VAR_5;
}
