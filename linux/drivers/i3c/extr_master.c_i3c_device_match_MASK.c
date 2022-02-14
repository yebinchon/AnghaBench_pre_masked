
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i3c_driver {int id_table; } ;
struct i3c_device {int dummy; } ;
struct device_driver {int dummy; } ;
struct device {int * type; } ;


 struct i3c_device* FUNC_0 (struct device*) ;
 struct i3c_driver* FUNC_1 (struct device_driver*) ;
 scalar_t__ FUNC_2 (struct i3c_device*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, struct device_driver *VAR_2)
{
 struct i3c_device *VAR_3;
 struct i3c_driver *VAR_4;

 if (VAR_1->type != &VAR_0)
  return 0;

 VAR_3 = FUNC_0(VAR_1);
 VAR_4 = FUNC_1(VAR_2);
 if (FUNC_2(VAR_3, VAR_4->id_table))
  return 1;

 return 0;
}
