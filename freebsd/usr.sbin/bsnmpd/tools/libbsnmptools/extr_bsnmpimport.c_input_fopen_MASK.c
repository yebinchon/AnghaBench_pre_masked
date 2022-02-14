
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
typedef int int32_t ;
typedef int FILE ;


 int FUNC_0 (int *,int *,char const*) ;
 int ** VAR_0 ;
 int * FUNC_1 (int *,char const*) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static int32_t
FUNC_3(const char *VAR_1)
{
 FILE *VAR_2;
 u_int VAR_3;

 if (VAR_1[0] == '/' || VAR_1[0] == '.' || VAR_1[0] == '~') {
  if ((VAR_2 = FUNC_1(((void*)0), VAR_1)) != ((void*)0)) {
   FUNC_0(VAR_2, ((void*)0), VAR_1);
   return (0);
  }

 } else {

  for (VAR_3 = 0; VAR_0[VAR_3] != ((void*)0); VAR_3++)
   if ((VAR_2 = FUNC_1(VAR_0[VAR_3], VAR_1)) != ((void*)0)) {
    FUNC_0(VAR_2, VAR_0[VAR_3], VAR_1);
    return (0);
   }
 }

 FUNC_2("cannot open '%s'", VAR_1);
 return (-1);
}
