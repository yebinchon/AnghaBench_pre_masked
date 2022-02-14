
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i3c_bus {size_t mode; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 size_t FUNC_0 (char**) ;
 struct i3c_bus* FUNC_1 (struct device*) ;
 char** VAR_0 ;
 int FUNC_2 (struct i3c_bus*) ;
 int FUNC_3 (struct i3c_bus*) ;
 int FUNC_4 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
    struct device_attribute *VAR_2,
    char *VAR_3)
{
 struct i3c_bus *VAR_4 = FUNC_1(VAR_1);
 ssize_t VAR_5;

 FUNC_2(VAR_4);
 if (VAR_4->mode < 0 ||
     VAR_4->mode >= FUNC_0(VAR_0) ||
     !VAR_0[VAR_4->mode])
  VAR_5 = FUNC_4(VAR_3, "unknown\n");
 else
  VAR_5 = FUNC_4(VAR_3, "%s\n", VAR_0[VAR_4->mode]);
 FUNC_3(VAR_4);

 return VAR_5;
}
