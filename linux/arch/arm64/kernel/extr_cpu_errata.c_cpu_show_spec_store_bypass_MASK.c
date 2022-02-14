
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;




 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,char*) ;
 int VAR_2 ;

ssize_t FUNC_2(struct device *VAR_3,
  struct device_attribute *VAR_4, char *VAR_5)
{
 if (VAR_1)
  return FUNC_1(VAR_5, "Not affected\n");

 switch (VAR_2) {
 case 128:
 case 129:
  if (FUNC_0(VAR_0))
   return FUNC_1(VAR_5,
       "Mitigation: Speculative Store Bypass disabled via prctl\n");
 }

 return FUNC_1(VAR_5, "Vulnerable\n");
}
