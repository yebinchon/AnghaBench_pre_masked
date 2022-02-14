
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int Tree ;
struct TYPE_5__ {char name; int type; } ;
struct TYPE_4__ {TYPE_3__** syms; int op; TYPE_3__** kids; int count; } ;
typedef TYPE_1__* Node ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__**) ;
 int FUNC_1 (int *,char*,...) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int * VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_5(Node VAR_3, int VAR_4, int VAR_5) {
 if (VAR_3) {
  FILE *VAR_6 = VAR_4 == 1 ? VAR_2 : VAR_1;
  int VAR_7, VAR_8 = FUNC_3((Tree)VAR_3);
  FUNC_1(VAR_6, "%c%d%s", VAR_5 == 0 ? '\'' : '#', VAR_8,
   &"   "[VAR_8 < 10 ? 0 : VAR_8 < 100 ? 1 : 2]);
  FUNC_1(VAR_6, "%s count=%d", FUNC_4(VAR_3->op), VAR_3->count);
  for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_3->kids) && VAR_3->kids[VAR_7]; VAR_7++)
   FUNC_1(VAR_6, " #%d", FUNC_3((Tree)VAR_3->kids[VAR_7]));
  if (FUNC_2(VAR_3->op) == VAR_0 && VAR_3->syms[0] && VAR_3->syms[0]->type)
   FUNC_1(VAR_6, " {%t}", VAR_3->syms[0]->type);
  else
   for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_3->syms) && VAR_3->syms[VAR_7]; VAR_7++)
    if (VAR_3->syms[VAR_7]->name)
     FUNC_1(VAR_6, " %s", VAR_3->syms[VAR_7]->name);
    else
     FUNC_1(VAR_6, " %p", VAR_3->syms[VAR_7]);
  FUNC_1(VAR_6, "\n");
 }
}
