
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ern; struct TYPE_3__* kids; int pattern; struct TYPE_3__* link; } ;
typedef TYPE_1__* Rule ;


 void* FUNC_0 (int) ;
 scalar_t__* FUNC_1 (int ,char*,char*,int*) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 char* FUNC_4 (void*,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(Rule VAR_0, int VAR_1) {
 int VAR_2;
 Rule VAR_3, *VAR_4 = FUNC_0((VAR_1 + 1 + 1)*sizeof *VAR_4);
 char **VAR_5 = FUNC_0((VAR_1 + 1 + 1)*sizeof *VAR_5);

 for (VAR_2 = 0, VAR_3 = VAR_0; VAR_3; VAR_3 = VAR_3->link) {
  int VAR_6 = 0;
  char VAR_7[1024], *VAR_8 = VAR_7;
  *FUNC_1(VAR_3->pattern, "p", VAR_8, &VAR_6) = 0;
  for (VAR_6 = 0; VAR_5[VAR_6] && FUNC_3(VAR_5[VAR_6], VAR_7); VAR_6++)
   ;
  if (VAR_5[VAR_6] == ((void*)0))
   VAR_5[VAR_6] = FUNC_4(FUNC_0(FUNC_5(VAR_7) + 1), VAR_7);
  VAR_3->kids = VAR_4[VAR_6];
  VAR_4[VAR_6] = VAR_3;
 }
 FUNC_2("static void %Pkids(NODEPTR_TYPE p, int eruleno, NODEPTR_TYPE kids[]) {\n"
"%1if (!p)\n%2fatal(\"%Pkids\", \"Null tree\\n\", 0);\n"
"%1if (!kids)\n%2fatal(\"%Pkids\", \"Null kids\\n\", 0);\n"
"%1switch (eruleno) {\n");
 for (VAR_2 = 0; (VAR_3 = VAR_4[VAR_2]) != ((void*)0); VAR_2++) {
  for ( ; VAR_3; VAR_3 = VAR_3->kids)
   FUNC_2("%1case %d: /* %R */\n", VAR_3->ern, VAR_3);
  FUNC_2("%s%2break;\n", VAR_5[VAR_2]);
 }
 FUNC_2("%1default:\n%2fatal(\"%Pkids\", \"Bad rule number %%d\\n\", eruleno);\n%1}\n}\n\n");
}
