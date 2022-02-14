
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (char*,int const) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int const*) ;

char *
FUNC_5(const wchar_t *VAR_2)
{
 char *VAR_3;
 char *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_1((FUNC_4(VAR_2) * VAR_1) + 1);
 if (VAR_3 == ((void*)0)) {
  FUNC_3("out of memory");
  return (((void*)0));
 }
 VAR_4 = VAR_3;
 while (*VAR_2) {
  if ((VAR_5 = FUNC_2(VAR_4, *VAR_2)) < 0) {
   VAR_0;
   FUNC_0(VAR_3);
   return (((void*)0));
  }
  VAR_2++;
  VAR_4 += VAR_5;
 }
 *VAR_4 = 0;
 return (VAR_3);
}
