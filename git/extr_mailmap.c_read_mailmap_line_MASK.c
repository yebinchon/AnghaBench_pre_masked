
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
typedef int abbrev ;


 int FUNC_0 (struct string_list*,char*,char*,char*,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char) ;
 char* FUNC_3 (char*,char**,char**,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char const*,int) ;
 char* FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(struct string_list *VAR_0, char *VAR_1,
         char **VAR_2)
{
 char *VAR_3 = ((void*)0), *VAR_4 = ((void*)0), *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
 if (VAR_1[0] == '#') {
  static const char VAR_7[] = "# repo-abbrev:";
  int VAR_8 = sizeof(VAR_7) - 1;
  int VAR_9 = FUNC_4(VAR_1);

  if (!VAR_2)
   return;

  if (VAR_9 && VAR_1[VAR_9 - 1] == '\n')
   VAR_1[--VAR_9] = 0;
  if (!FUNC_5(VAR_1, VAR_7, VAR_8)) {
   char *VAR_10;

   FUNC_1(*VAR_2);

   for (VAR_10 = VAR_1 + VAR_8; FUNC_2(*VAR_10); VAR_10++)
    ;
   *VAR_2 = FUNC_6(VAR_10);
  }
  return;
 }
 if ((VAR_5 = FUNC_3(VAR_1, &VAR_3, &VAR_4, 0)) != ((void*)0))
  FUNC_3(VAR_5, &VAR_5, &VAR_6, 1);

 if (VAR_4)
  FUNC_0(VAR_0, VAR_3, VAR_4, VAR_5, VAR_6);
}
