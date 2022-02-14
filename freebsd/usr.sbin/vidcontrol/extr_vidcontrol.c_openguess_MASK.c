
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char**,char*,char const*,char const*,char const*,char const*) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static FILE *
FUNC_3(const char *VAR_0[], const char *VAR_1[], const char *VAR_2[], const char *VAR_3[], char **VAR_4)
{
 FILE *VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9;

 for (VAR_6 = 0; VAR_0[VAR_6] != ((void*)0); VAR_6++) {
  for (VAR_7 = 0; VAR_1[VAR_7] != ((void*)0); VAR_7++) {
   for (VAR_8 = 0; VAR_2[VAR_8] != ((void*)0); VAR_8++) {
    for (VAR_9 = 0; VAR_3[VAR_9] != ((void*)0); VAR_9++) {
     FUNC_0(VAR_4, "%s%s%s%s",
       VAR_0[VAR_6], VAR_1[VAR_7], VAR_2[VAR_8], VAR_3[VAR_9]);

     VAR_5 = FUNC_1(*VAR_4, "r");

     if (VAR_5 != ((void*)0))
      return (VAR_5);

     FUNC_2(*VAR_4);
    }
   }
  }
 }
 return (((void*)0));
}
