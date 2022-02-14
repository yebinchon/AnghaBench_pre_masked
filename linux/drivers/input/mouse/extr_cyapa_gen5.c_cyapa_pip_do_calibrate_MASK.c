
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cyapa {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cyapa*,int ) ;
 int FUNC_1 (struct cyapa*) ;
 int FUNC_2 (struct cyapa*) ;
 struct cyapa* FUNC_3 (struct device*) ;

ssize_t FUNC_4(struct device *VAR_2,
         struct device_attribute *VAR_3,
         const char *VAR_4, size_t VAR_5)
{
 struct cyapa *VAR_6 = FUNC_3(VAR_2);
 int VAR_7, VAR_8;


 VAR_7 = FUNC_2(VAR_6);
 if (VAR_7)
  return VAR_7;


 VAR_8 = FUNC_0(VAR_6,
    VAR_0);
 if (VAR_8)
  goto resume_scanning;


 VAR_8 = FUNC_0(VAR_6,
    VAR_1);
 if (VAR_8)
  goto resume_scanning;

resume_scanning:

 VAR_7 = FUNC_1(VAR_6);
 if (VAR_7 || VAR_8)
  return VAR_7 ? VAR_7 : VAR_8;

 return VAR_5;
}
