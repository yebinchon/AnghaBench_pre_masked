
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_svc {scalar_t__ action; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,char*) ;
 struct gb_svc* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_3,
        struct device_attribute *VAR_4, char *VAR_5)
{
 struct gb_svc *VAR_6 = FUNC_1(VAR_3);

 if (VAR_6->action == VAR_1)
  return FUNC_0(VAR_5, "panic\n");
 else if (VAR_6->action == VAR_2)
  return FUNC_0(VAR_5, "reset\n");

 return -VAR_0;
}
