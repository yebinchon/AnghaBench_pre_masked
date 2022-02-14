
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* Tree ;
struct TYPE_6__ {scalar_t__ kind; int reached; } ;
struct TYPE_5__ {struct TYPE_5__* right; struct TYPE_5__* left; TYPE_2__* op; } ;
typedef TYPE_2__* Nonterm ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(Tree VAR_1) {
 Nonterm VAR_2 = VAR_1->op;

 if (VAR_2->kind == VAR_0)
  if (!VAR_2->reached)
   FUNC_0(VAR_2);
 if (VAR_1->left)
  FUNC_1(VAR_1->left);
 if (VAR_1->right)
  FUNC_1(VAR_1->right);
}
