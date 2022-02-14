
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 size_t FUNC_1 (char const*,int*) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 () ;
 int VAR_1 ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
         struct device_attribute *VAR_3,
         const char *VAR_4, size_t VAR_5)
{
 bool VAR_6;
 ssize_t VAR_7;

 VAR_7 = FUNC_1(VAR_4, &VAR_6);
 if (VAR_7)
  return VAR_7;


 if (VAR_6 == VAR_0)
  return VAR_5;

 VAR_0 = VAR_6;

 FUNC_0();
 FUNC_2(VAR_1, ((void*)0), 1);
 FUNC_3();

 return VAR_5;
}
