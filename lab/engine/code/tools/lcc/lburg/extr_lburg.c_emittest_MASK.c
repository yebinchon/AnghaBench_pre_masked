
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* Tree ;
typedef TYPE_2__* Term ;
struct TYPE_6__ {scalar_t__ kind; int esn; } ;
struct TYPE_5__ {int nterms; struct TYPE_5__* right; struct TYPE_5__* left; TYPE_2__* op; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,int ,char*,TYPE_2__*) ;
 char* FUNC_1 (char*,char*) ;

__attribute__((used)) static void FUNC_2(Tree VAR_1, char *VAR_2, char *VAR_3) {
 Term VAR_4 = VAR_1->op;

 if (VAR_4->kind == VAR_0) {
  FUNC_0("%3%s->op == %d%s/* %S */\n", VAR_2, VAR_4->esn,
   VAR_1->nterms > 1 ? " && " : VAR_3, VAR_4);
  if (VAR_1->left)
   FUNC_2(VAR_1->left, FUNC_1("LEFT_CHILD(%s)", VAR_2),
    VAR_1->right && VAR_1->right->nterms ? " && " : VAR_3);
  if (VAR_1->right)
   FUNC_2(VAR_1->right, FUNC_1("RIGHT_CHILD(%s)", VAR_2), VAR_3);
 }
}
