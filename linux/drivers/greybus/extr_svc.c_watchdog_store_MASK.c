
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_svc {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct gb_svc*) ;
 int FUNC_1 (struct gb_svc*) ;
 int FUNC_2 (char const*,int*) ;
 struct gb_svc* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
         struct device_attribute *VAR_1, const char *VAR_2,
         size_t VAR_3)
{
 struct gb_svc *VAR_4 = FUNC_3(VAR_0);
 int VAR_5;
 bool VAR_6;

 VAR_5 = FUNC_2(VAR_2, &VAR_6);
 if (VAR_5)
  return VAR_5;

 if (VAR_6)
  VAR_5 = FUNC_1(VAR_4);
 else
  VAR_5 = FUNC_0(VAR_4);
 if (VAR_5)
  return VAR_5;
 return VAR_3;
}
