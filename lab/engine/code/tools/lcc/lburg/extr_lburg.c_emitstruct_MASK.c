
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lhscount; struct TYPE_3__* link; } ;
typedef TYPE_1__* Nonterm ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(Nonterm VAR_0, int VAR_1) {
 FUNC_0("struct %Pstate {\n%1short cost[%d];\n%1struct {\n", VAR_1 + 1);
 for ( ; VAR_0; VAR_0 = VAR_0->link) {
  int VAR_2 = 1, VAR_3 = VAR_0->lhscount;
  while ((VAR_3 >>= 1) != 0)
   VAR_2++;
  FUNC_0("%2unsigned int %P%S:%d;\n", VAR_0, VAR_2);
 }
 FUNC_0("%1} rule;\n};\n\n");
}
