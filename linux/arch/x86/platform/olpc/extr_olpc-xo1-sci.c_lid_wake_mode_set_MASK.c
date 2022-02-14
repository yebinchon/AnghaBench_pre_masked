
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (char**) ;
 size_t VAR_0 ;
 int VAR_1 ;
 char** VAR_2 ;
 size_t FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_3,
     struct device_attribute *VAR_4,
     const char *VAR_5, size_t VAR_6)
{
 int VAR_7;
 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_2); VAR_7++) {
  const char *VAR_8 = VAR_2[VAR_7];
  if (FUNC_1(VAR_8) != VAR_6 || FUNC_2(VAR_8, VAR_5, VAR_6))
   continue;

  VAR_1 = VAR_7;
  return VAR_6;
 }
 return -VAR_0;
}
