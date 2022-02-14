
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** VAR_0 ;
 char** FUNC_0 (int) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char*,char const*,int) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_1)
{
 char **VAR_2;
 int VAR_3, VAR_4;

 if (VAR_0 == ((void*)0))
  return;

 for (VAR_3 = 0; VAR_0[VAR_3] != ((void*)0); VAR_3++)
  ;
 VAR_2 = FUNC_0(sizeof(char *) * (VAR_3 + 1));
 VAR_4 = FUNC_1(VAR_1);
 for (; VAR_3 >= 0; VAR_3--) {
  VAR_2[VAR_3] = VAR_0[VAR_3];
  if (VAR_2[VAR_3] != ((void*)0) &&
      FUNC_2(VAR_2[VAR_3], VAR_1, VAR_4) == 0 &&
      VAR_2[VAR_3][VAR_4] == '=')
   VAR_2[VAR_3] += FUNC_1(VAR_2[VAR_3]);
 }
 VAR_0 = VAR_2;
}
