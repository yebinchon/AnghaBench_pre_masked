
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* link; int number; } ;
typedef TYPE_1__* Nonterm ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(Nonterm VAR_0, int VAR_1) {
 Nonterm VAR_2;

 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->link)
  FUNC_0("#define %P%S_NT %d\n", VAR_2, VAR_2->number);
 FUNC_0("\n");
 FUNC_0("static char *%Pntname[] = {\n%10,\n");
 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->link)
  FUNC_0("%1\"%S\",\n", VAR_2);
 FUNC_0("%10\n};\n\n");
}
