
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* Tree ;
struct TYPE_6__ {struct TYPE_6__** kids; int type; int op; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (char*,int ) ;

Tree FUNC_5(Tree VAR_2) {
 if (FUNC_1(VAR_2->op) != VAR_0) {
  FUNC_0("lvalue required\n");
  return FUNC_3(VAR_2);
 } else if (FUNC_2(VAR_2->type) == VAR_1)
  FUNC_4("`%t' used as an lvalue\n", VAR_2->type);
 return VAR_2->kids[0];
}
