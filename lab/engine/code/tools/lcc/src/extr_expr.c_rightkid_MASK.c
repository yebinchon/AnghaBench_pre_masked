
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* Tree ;
struct TYPE_5__ {scalar_t__ op; struct TYPE_5__** kids; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

Tree FUNC_1(Tree VAR_1) {
 while (VAR_1 && VAR_1->op == VAR_0)
  if (VAR_1->kids[1])
   VAR_1 = VAR_1->kids[1];
  else if (VAR_1->kids[0])
   VAR_1 = VAR_1->kids[0];
  else
   FUNC_0(0);
 FUNC_0(VAR_1);
 return VAR_1;
}
