
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rohm_ts_data {int setup2; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct rohm_ts_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (char*,char*,int) ;
 struct i2c_client* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2,
     char *VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_2(VAR_1);
 struct rohm_ts_data *VAR_5 = FUNC_0(VAR_4);

 return FUNC_1(VAR_3, "%d\n", !!(VAR_5->setup2 & VAR_0));
}
