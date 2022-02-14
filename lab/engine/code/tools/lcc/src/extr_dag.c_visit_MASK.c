
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_20__ {struct TYPE_20__* link; } ;
struct TYPE_16__ {TYPE_3__* cse; } ;
struct TYPE_17__ {TYPE_1__ t; } ;
struct TYPE_19__ {int ref; TYPE_2__ u; int defined; } ;
struct TYPE_18__ {int count; scalar_t__ op; TYPE_8__** syms; struct TYPE_18__** kids; } ;
typedef TYPE_3__* Node ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_9__* FUNC_0 (TYPE_8__*,TYPE_3__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 TYPE_3__* FUNC_4 (scalar_t__,TYPE_3__*,int *,TYPE_8__*) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 TYPE_9__** VAR_6 ;
 TYPE_8__* FUNC_7 (int ,int ) ;
 TYPE_3__* FUNC_8 (TYPE_3__*) ;

__attribute__((used)) static Node FUNC_9(Node VAR_7, int VAR_8) {
 if (VAR_7) {
  if (VAR_7->syms[2])
   VAR_7 = FUNC_8(VAR_7);
  else if ((VAR_7->count <= 1 && !FUNC_3(VAR_7->op))
  || (VAR_7->count == 0 && FUNC_3(VAR_7->op))) {
   VAR_7->kids[0] = FUNC_9(VAR_7->kids[0], 0);
   VAR_7->kids[1] = FUNC_9(VAR_7->kids[1], 0);
  }

  else if (FUNC_6(VAR_7->op) == VAR_1+VAR_4 || FUNC_6(VAR_7->op) == VAR_0+VAR_4) {
   FUNC_1(!VAR_8);
   VAR_7 = FUNC_4(VAR_7->op, ((void*)0), ((void*)0), VAR_7->syms[0]);
   VAR_7->count = 1;
  }
  else if (VAR_7->op == VAR_3+VAR_2) {
   VAR_7 = FUNC_4(VAR_7->op, VAR_7->kids[0], ((void*)0), ((void*)0));
   VAR_7->count = 1;
   VAR_7->kids[0] = FUNC_9(VAR_7->kids[0], 0);
   VAR_7->kids[1] = FUNC_9(VAR_7->kids[1], 0);
  }
  else {
   VAR_7->kids[0] = FUNC_9(VAR_7->kids[0], 0);
   VAR_7->kids[1] = FUNC_9(VAR_7->kids[1], 0);
   VAR_7->syms[2] = FUNC_7(VAR_5, FUNC_2(VAR_7->op, FUNC_5(VAR_7->op)));
   FUNC_1(!VAR_7->syms[2]->defined);
   VAR_7->syms[2]->ref = 1;
   VAR_7->syms[2]->u.t.cse = VAR_7;

   *VAR_6 = FUNC_0(VAR_7->syms[2], VAR_7);
   VAR_6 = &(*VAR_6)->link;
   if (!VAR_8)
    VAR_7 = FUNC_8(VAR_7);
  };
 }
 return VAR_7;
}
