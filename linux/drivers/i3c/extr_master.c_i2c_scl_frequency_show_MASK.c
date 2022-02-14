
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i2c; } ;
struct i3c_bus {TYPE_1__ scl_rate; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct i3c_bus* FUNC_0 (struct device*) ;
 int FUNC_1 (struct i3c_bus*) ;
 int FUNC_2 (struct i3c_bus*) ;
 int FUNC_3 (char*,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
          struct device_attribute *VAR_1,
          char *VAR_2)
{
 struct i3c_bus *VAR_3 = FUNC_0(VAR_0);
 ssize_t VAR_4;

 FUNC_1(VAR_3);
 VAR_4 = FUNC_3(VAR_2, "%ld\n", VAR_3->scl_rate.i2c);
 FUNC_2(VAR_3);

 return VAR_4;
}
