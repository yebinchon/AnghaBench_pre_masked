
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* Tree ;
struct TYPE_5__ {scalar_t__ mulops_calls; } ;
struct TYPE_4__ {scalar_t__ op; struct TYPE_4__** kids; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

int FUNC_1(Tree VAR_7) {
 if (VAR_7 == 0)
  return 0;
 if (FUNC_0(VAR_7->op) == VAR_0 || (VAR_3->mulops_calls &&
   (VAR_7->op == VAR_1+VAR_2 || VAR_7->op == VAR_4+VAR_2 || VAR_7->op == VAR_5+VAR_2
 || VAR_7->op == VAR_1+VAR_6 || VAR_7->op == VAR_4+VAR_6 || VAR_7->op == VAR_5+VAR_6)))
  return 1;
 return FUNC_1(VAR_7->kids[0]) || FUNC_1(VAR_7->kids[1]);
}
