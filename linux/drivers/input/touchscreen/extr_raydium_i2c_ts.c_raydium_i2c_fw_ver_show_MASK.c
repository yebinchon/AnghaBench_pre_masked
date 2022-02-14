
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int main_ver; int sub_ver; } ;
struct raydium_data {TYPE_1__ info; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct raydium_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (char*,char*,int,int) ;
 struct i2c_client* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
           struct device_attribute *VAR_1, char *VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_2(VAR_0);
 struct raydium_data *VAR_4 = FUNC_0(VAR_3);

 return FUNC_1(VAR_2, "%d.%d\n", VAR_4->info.main_ver, VAR_4->info.sub_ver);
}
