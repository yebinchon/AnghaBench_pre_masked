
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;





 int FUNC_0 () ;
 int FUNC_1 (char*,char*) ;

ssize_t FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1,
  char *VAR_2)
{
 switch (FUNC_0()) {
 case 130:
  return FUNC_1(VAR_2, "Not affected\n");
        case 128:
  return FUNC_1(VAR_2, "Mitigation: Branch predictor hardening\n");
        case 129:
 default:
  return FUNC_1(VAR_2, "Vulnerable\n");
 }
}
