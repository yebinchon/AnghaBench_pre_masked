
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_3__* Type ;
typedef TYPE_4__* Tree ;
struct TYPE_9__ {scalar_t__ i; scalar_t__ u; int * p; } ;
struct TYPE_8__ {TYPE_2__ v; } ;
struct TYPE_11__ {TYPE_1__ u; int op; int type; } ;
struct TYPE_10__ {scalar_t__ op; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (int ) ;

int FUNC_3(Tree VAR_3) {
 Type VAR_4 = FUNC_2(VAR_3->type);

 return FUNC_0(VAR_3->op) == VAR_0
     && ((VAR_4->op == VAR_1 && VAR_3->u.v.i == 0)
      || (VAR_4->op == VAR_2 && VAR_3->u.v.u == 0)
      || (FUNC_1(VAR_4) && VAR_3->u.v.p == ((void*)0)));
}
