
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdtab {char* name; char* args; int min; } ;


 struct cmdtab* VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char) ;
 char FUNC_2 (char const) ;

__attribute__((used)) static void
FUNC_3(void)
{
 struct cmdtab *VAR_1;
 const char *VAR_2;
 char VAR_3;
 int VAR_4;

 for (VAR_1=VAR_0; VAR_1->name; ++VAR_1) {
  if (! VAR_1->args)
   continue;
  FUNC_0("\t");
  for (VAR_4 = VAR_1->min, VAR_2 = VAR_1->name; *VAR_2; VAR_2++, VAR_4--) {
   if (VAR_4 > 0)
    VAR_3 = FUNC_2(*VAR_2);
   else
    VAR_3 = *VAR_2;
   FUNC_1(VAR_3);
  }
  if (*VAR_1->args)
   FUNC_0 (" %s", VAR_1->args);
  FUNC_0 ("\n");
 }
 FUNC_0 ("\n\tThe word \"play\" is not required for the play commands.\n");
 FUNC_0 ("\tThe plain target address is taken as a synonym for play.\n");
}
