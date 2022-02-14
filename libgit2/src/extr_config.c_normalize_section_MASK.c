
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;

__attribute__((used)) static int FUNC_2(char *VAR_1, char *VAR_2)
{
 char *VAR_3;

 if (VAR_1 == VAR_2)
  return VAR_0;


 for (VAR_3 = VAR_1; *VAR_3; ++VAR_3) {
  if (VAR_2 && VAR_3 >= VAR_2)
   break;
  if (FUNC_1(*VAR_3))
   *VAR_3 = (char)FUNC_0(*VAR_3);
  else if (*VAR_3 != '-' || VAR_3 == VAR_1)
   return VAR_0;
 }

 if (VAR_3 == VAR_1)
  return VAR_0;

 return 0;
}
