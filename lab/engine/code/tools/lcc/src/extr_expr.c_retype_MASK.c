
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ Type ;
typedef TYPE_1__* Tree ;
struct TYPE_5__ {scalar_t__ type; int u; int node; int * kids; int op; } ;


 TYPE_1__* FUNC_0 (int ,scalar_t__,int ,int ) ;

Tree FUNC_1(Tree VAR_0, Type VAR_1) {
 Tree VAR_2;

 if (VAR_0->type == VAR_1)
  return VAR_0;
 VAR_2 = FUNC_0(VAR_0->op, VAR_1, VAR_0->kids[0], VAR_0->kids[1]);
 VAR_2->node = VAR_0->node;
 VAR_2->u = VAR_0->u;
 return VAR_2;
}
