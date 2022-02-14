
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const*,char const) ;

__attribute__((used)) static ssize_t FUNC_2(const char *VAR_0, const char *VAR_1)
{
 int VAR_2 = 0;
 const char *VAR_3;
 for (VAR_3 = VAR_0; *VAR_3; VAR_3++) {
  if (FUNC_1(VAR_1, *VAR_3))
   return VAR_3 - VAR_0;
  if (!VAR_2 && (FUNC_0(*VAR_3) || *VAR_3 == '-'))
   continue;
  if (VAR_3 != VAR_0 && (*VAR_3 == ' ' || *VAR_3 == '\t')) {
   VAR_2 = 1;
   continue;
  }
  break;
 }
 return -1;
}
