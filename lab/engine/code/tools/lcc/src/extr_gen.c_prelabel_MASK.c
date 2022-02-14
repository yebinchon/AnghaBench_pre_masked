
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


struct TYPE_15__ {int i; } ;
struct TYPE_16__ {TYPE_1__ v; } ;
struct TYPE_17__ {TYPE_2__ c; } ;
struct TYPE_20__ {TYPE_3__ u; int sclass; } ;
struct TYPE_19__ {scalar_t__ op; TYPE_7__** syms; struct TYPE_19__** kids; } ;
struct TYPE_18__ {int (* target ) (TYPE_5__*) ;TYPE_7__* (* rmap ) (scalar_t__) ;} ;
struct TYPE_14__ {TYPE_4__ x; } ;
typedef TYPE_5__* Node ;
 int VAR_0 ;

 TYPE_13__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 size_t FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_5__*,int,TYPE_7__*) ;
 int FUNC_6 (TYPE_5__*,TYPE_7__*) ;
 TYPE_7__* FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_9(Node VAR_7) {
 if (VAR_7 == ((void*)0))
  return;
 FUNC_9(VAR_7->kids[0]);
 FUNC_9(VAR_7->kids[1]);
 if (VAR_3[FUNC_1(VAR_7->op)])
  FUNC_6(VAR_7, (*VAR_1->x.rmap)(FUNC_2(VAR_7->op)));
 switch (FUNC_0(VAR_7->op)) {
 case 134: case 133:
  if (VAR_7->syms[0]->sclass == VAR_5)
   VAR_7->op = VAR_6+VAR_4;
  break;
 case 128:
  if (VAR_7->kids[0]->op == VAR_6+VAR_4)
   FUNC_6(VAR_7, VAR_7->kids[0]->syms[0]);
  break;
 case 132:
  if (VAR_7->kids[0]->op == VAR_6+VAR_4)
   FUNC_5(VAR_7, 1, VAR_7->kids[0]->syms[0]);
  break;
 case 131: case 129: case 130:
  if (FUNC_4(VAR_7->op) != VAR_0
  && FUNC_3(VAR_7->op) <= VAR_7->syms[0]->u.c.v.i)
   VAR_7->op = VAR_2 + FUNC_2(VAR_7->op);
  break;
 }
 (VAR_1->x.target)(VAR_7);
}
