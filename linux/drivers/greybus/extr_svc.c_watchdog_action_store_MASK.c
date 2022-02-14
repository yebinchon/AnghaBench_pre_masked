
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_svc {int action; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 struct gb_svc* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_3,
         struct device_attribute *VAR_4,
         const char *VAR_5, size_t VAR_6)
{
 struct gb_svc *VAR_7 = FUNC_1(VAR_3);

 if (FUNC_0(VAR_5, "panic"))
  VAR_7->action = VAR_1;
 else if (FUNC_0(VAR_5, "reset"))
  VAR_7->action = VAR_2;
 else
  return -VAR_0;

 return VAR_6;
}
