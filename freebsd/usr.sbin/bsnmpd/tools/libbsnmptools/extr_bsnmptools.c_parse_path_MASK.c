
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (char,int) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static int32_t
FUNC_2(char *VAR_1)
{
 int32_t VAR_2, VAR_3;

 if (VAR_1 == ((void*)0))
  return (-1);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2 = FUNC_0(*(VAR_1 + VAR_3), VAR_3) ;

  if (VAR_2 == 0)
   break;
  else if (VAR_2 < 0)
   return (-1);
 }

 if (VAR_3 >= VAR_0 || VAR_1[VAR_3] != '\0') {
  FUNC_1("Bad pathname - '%s'", VAR_1);
  return (-1);
 }

 return (VAR_3);
}
