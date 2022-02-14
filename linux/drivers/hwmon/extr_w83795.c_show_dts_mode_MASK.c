
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83795_data {int enable_dts; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct w83795_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct w83795_data *VAR_3 = FUNC_0(VAR_0);
 int VAR_4;

 if (VAR_3->enable_dts & 2)
  VAR_4 = 5;
 else
  VAR_4 = 6;

 return FUNC_1(VAR_2, "%d\n", VAR_4);
}
