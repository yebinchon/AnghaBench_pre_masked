
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* ccharp ;


 int FUNC_0 () ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*) ;

__attribute__((used)) static char *
FUNC_4(ccharp *VAR_0)
{
 size_t VAR_1;
 char *VAR_2;
 int VAR_3;

 if (VAR_0 == ((void*)0))
  return (0);

 for (VAR_1 = 0, VAR_3 = 0; VAR_0[VAR_3] != ((void*)0); VAR_3++)
  VAR_1 += FUNC_3(VAR_0[VAR_3]) + 1;
 if ((VAR_2 = FUNC_1(VAR_1 + 1)) == ((void*)0))
  FUNC_0();
 for (VAR_3 = 0, *VAR_2 = '\0'; VAR_0[VAR_3] != ((void*)0); VAR_3++) {
  FUNC_2(VAR_2, VAR_0[VAR_3]);
  FUNC_2(VAR_2, ":");
 }
 VAR_2[VAR_1 - 1] = '\0';

 return (VAR_2);
}
