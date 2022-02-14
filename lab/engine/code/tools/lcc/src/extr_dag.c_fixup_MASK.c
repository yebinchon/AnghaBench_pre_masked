
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {void** syms; TYPE_1__** kids; int op; struct TYPE_5__* link; } ;
struct TYPE_4__ {void** syms; int op; } ;
typedef TYPE_2__* Node ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(Node VAR_2) {
 for ( ; VAR_2; VAR_2 = VAR_2->link)
  switch (FUNC_2(VAR_2->op)) {
  case 132:
   if (FUNC_3(VAR_2->kids[0]->op) == VAR_0+VAR_1)
    VAR_2->kids[0]->syms[0] =
     FUNC_1(VAR_2->kids[0]->syms[0]);
   break;
  case 131: FUNC_0(VAR_2->syms[0] == FUNC_1(VAR_2->syms[0])); break;
  case 135: case 134: case 133: case 130: case 129: case 128:
   FUNC_0(VAR_2->syms[0]);
   VAR_2->syms[0] = FUNC_1(VAR_2->syms[0]);
  }
}
