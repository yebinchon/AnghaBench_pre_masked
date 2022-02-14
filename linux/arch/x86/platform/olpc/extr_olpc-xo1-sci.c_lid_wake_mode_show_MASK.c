
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 size_t VAR_0 ;
 char** VAR_1 ;
 int FUNC_0 (char*,char*,char const*) ;

__attribute__((used)) static ssize_t FUNC_1(struct device *VAR_2,
      struct device_attribute *VAR_3, char *VAR_4)
{
 const char *VAR_5 = VAR_1[VAR_0];
 return FUNC_0(VAR_4, "%s\n", VAR_5);
}
