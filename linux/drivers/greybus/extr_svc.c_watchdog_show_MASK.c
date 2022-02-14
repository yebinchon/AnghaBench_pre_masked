
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_svc {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (struct gb_svc*) ;
 int FUNC_1 (char*,char*,char*) ;
 struct gb_svc* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1,
        char *VAR_2)
{
 struct gb_svc *VAR_3 = FUNC_2(VAR_0);

 return FUNC_1(VAR_2, "%s\n",
         FUNC_0(VAR_3) ? "enabled" : "disabled");
}
