
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* link; TYPE_1__* rules; } ;
struct TYPE_4__ {int ern; struct TYPE_4__* decode; } ;
typedef TYPE_1__* Rule ;
typedef TYPE_2__* Nonterm ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(Nonterm VAR_1) {
 Nonterm VAR_2;

 for (VAR_2 = VAR_1; VAR_2; VAR_2 = VAR_2->link) {
  Rule VAR_3;
  FUNC_0("static short %Pdecode_%S[] = {\n%10,\n", VAR_2);
  for (VAR_3 = VAR_2->rules; VAR_3; VAR_3 = VAR_3->decode)
   FUNC_0("%1%d,\n", VAR_3->ern);
  FUNC_0("};\n\n");
 }
 FUNC_0("static int %Prule(void *state, int goalnt) {\n"
"%1if (goalnt < 1 || goalnt > %d)\n%2fatal(\"%Prule\", \"Bad goal nonterminal %%d\\n\", goalnt);\n"
"%1if (!state)\n%2return 0;\n%1switch (goalnt) {\n", VAR_0);
 for (VAR_2 = VAR_1; VAR_2; VAR_2 = VAR_2->link)
  FUNC_0("%1case %P%S_NT:"
"%1return %Pdecode_%S[((struct %Pstate *)state)->rule.%P%S];\n", VAR_2, VAR_2, VAR_2);
 FUNC_0("%1default:\n%2fatal(\"%Prule\", \"Bad goal nonterminal %%d\\n\", goalnt);\n%2return 0;\n%1}\n}\n\n");
}
