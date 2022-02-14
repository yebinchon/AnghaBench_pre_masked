
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* Tree ;
struct TYPE_6__ {scalar_t__ kind; } ;
struct TYPE_5__ {struct TYPE_5__* right; struct TYPE_5__* left; TYPE_2__* op; } ;
typedef TYPE_2__* Nonterm ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,TYPE_2__*) ;
 char* FUNC_1 (char*,char*) ;

__attribute__((used)) static void FUNC_2(Tree VAR_1, char *VAR_2) {
 Nonterm VAR_3 = VAR_1->op;

 if (VAR_3->kind == VAR_0) {
  if (VAR_1->left)
   FUNC_2(VAR_1->left, FUNC_1("LEFT_CHILD(%s)", VAR_2));
  if (VAR_1->right)
   FUNC_2(VAR_1->right, FUNC_1("RIGHT_CHILD(%s)", VAR_2));
 } else
  FUNC_0("((struct %Pstate *)(%s->x.state))->cost[%P%S_NT] + ", VAR_2, VAR_3);
}
