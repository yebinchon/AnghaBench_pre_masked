
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_19__ {int op; TYPE_2__** kids; TYPE_5__** syms; } ;
struct TYPE_18__ {struct TYPE_18__* link; TYPE_8__** kids; int op; } ;
struct TYPE_15__ {int replace; TYPE_8__* cse; } ;
struct TYPE_16__ {TYPE_3__ t; } ;
struct TYPE_17__ {int defined; scalar_t__ sclass; TYPE_4__ u; scalar_t__ temporary; } ;
struct TYPE_14__ {int op; TYPE_1__** syms; } ;
struct TYPE_13__ {scalar_t__ sclass; } ;
struct TYPE_12__ {int (* local ) (TYPE_5__*) ;} ;
typedef TYPE_5__* Symbol ;
typedef TYPE_6__* Node ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_11__* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 void* FUNC_3 (TYPE_8__*) ;
 int FUNC_4 (TYPE_5__*) ;

__attribute__((used)) static Node FUNC_5(Node VAR_7) {
 Node VAR_8, *VAR_9 = &VAR_7;
 int VAR_10 = 0;

 for (VAR_8 = VAR_7; VAR_8; VAR_8 = VAR_8->link) {
  if (VAR_10 > 0) {
   VAR_8->kids[0] = FUNC_3(VAR_8->kids[0]);
   VAR_8->kids[1] = FUNC_3(VAR_8->kids[1]);
  }
  if (( FUNC_1(VAR_8->op) == VAR_2
      && FUNC_1(VAR_8->kids[0]->op) == VAR_1
      && VAR_8->kids[0]->syms[0]->temporary
      && VAR_8->kids[0]->syms[0]->u.t.cse == VAR_8->kids[1])) {
   Symbol VAR_11 = VAR_8->kids[0]->syms[0];
   if (!VAR_11->defined)
    (*VAR_5->local)(VAR_11);
   VAR_11->defined = 1;
   if (( FUNC_1(VAR_8->kids[1]->op) == VAR_4
       && FUNC_2(VAR_8->kids[1]->kids[0]->op)
       && VAR_8->kids[1]->kids[0]->syms[0]->sclass == VAR_6)
   || (( FUNC_1(VAR_8->kids[1]->op) == VAR_4
       && FUNC_2(VAR_8->kids[1]->kids[0]->op)) && VAR_11->sclass == VAR_3)
   || (FUNC_1(VAR_8->kids[1]->op) == VAR_0 && VAR_11->sclass == VAR_3)) {
    VAR_11->u.t.replace = 1;
    VAR_10++;
    continue;
   }
  }

  *VAR_9 = VAR_8;
  VAR_9 = &(*VAR_9)->link;
 }
 FUNC_0(*VAR_9 == ((void*)0));
 return VAR_7;
}
