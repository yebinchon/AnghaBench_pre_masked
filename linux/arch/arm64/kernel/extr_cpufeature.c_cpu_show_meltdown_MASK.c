
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*,char*) ;

ssize_t FUNC_2(struct device *VAR_1, struct device_attribute *VAR_2,
     char *VAR_3)
{
 if (VAR_0)
  return FUNC_1(VAR_3, "Not affected\n");

 if (FUNC_0())
  return FUNC_1(VAR_3, "Mitigation: PTI\n");

 return FUNC_1(VAR_3, "Vulnerable\n");
}
