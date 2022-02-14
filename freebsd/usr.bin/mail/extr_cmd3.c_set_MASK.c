
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int varbuf ;
struct var {int v_name; struct var* v_link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char**) ;
 char* FUNC_5 (char*) ;
 struct var** VAR_2 ;

int
FUNC_6(void *VAR_3)
{
 char **VAR_4 = VAR_3;
 struct var *VAR_5;
 char *VAR_6, *VAR_7;
 char VAR_8[VAR_0], **VAR_9, **VAR_10;
 int VAR_11, VAR_12, VAR_13;

 if (*VAR_4 == ((void*)0)) {
  for (VAR_12 = 0, VAR_13 = 1; VAR_12 < VAR_1; VAR_12++)
   for (VAR_5 = VAR_2[VAR_12]; VAR_5 != ((void*)0); VAR_5 = VAR_5->v_link)
    VAR_13++;
  VAR_9 = (char **)FUNC_3(VAR_13 * sizeof(*VAR_9));
  for (VAR_12 = 0, VAR_10 = VAR_9; VAR_12 < VAR_1; VAR_12++)
   for (VAR_5 = VAR_2[VAR_12]; VAR_5 != ((void*)0); VAR_5 = VAR_5->v_link)
    *VAR_10++ = VAR_5->v_name;
  *VAR_10 = ((void*)0);
  FUNC_4(VAR_9);
  for (VAR_10 = VAR_9; *VAR_10 != ((void*)0); VAR_10++)
   FUNC_2("%s\t%s\n", *VAR_10, FUNC_5(*VAR_10));
  return (0);
 }
 VAR_11 = 0;
 for (VAR_9 = VAR_4; *VAR_9 != ((void*)0); VAR_9++) {
  VAR_6 = *VAR_9;
  VAR_7 = VAR_8;
  while (VAR_7 < VAR_8 + sizeof(VAR_8) - 1 && *VAR_6 != '=' && *VAR_6 != '\0')
   *VAR_7++ = *VAR_6++;
  *VAR_7 = '\0';
  if (*VAR_6 == '\0')
   VAR_6 = "";
  else
   VAR_6++;
  if (FUNC_1(VAR_8, "")) {
   FUNC_2("Non-null variable name required\n");
   VAR_11++;
   continue;
  }
  FUNC_0(VAR_8, VAR_6);
 }
 return (VAR_11);
}
