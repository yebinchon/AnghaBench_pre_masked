
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct push_switch_platform_info {char* name; } ;
struct device_attribute {int dummy; } ;
struct device {struct push_switch_platform_info* platform_data; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_1(struct device *VAR_0,
      struct device_attribute *VAR_1,
      char *VAR_2)
{
 struct push_switch_platform_info *VAR_3 = VAR_0->platform_data;
 return FUNC_0(VAR_2, "%s\n", VAR_3->name);
}
