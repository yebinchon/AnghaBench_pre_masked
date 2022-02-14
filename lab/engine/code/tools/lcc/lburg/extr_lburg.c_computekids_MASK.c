
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* Tree ;
typedef TYPE_2__* Term ;
struct TYPE_5__ {scalar_t__ kind; int arity; } ;
struct TYPE_4__ {struct TYPE_4__* right; struct TYPE_4__* left; TYPE_2__* op; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,int ,char*) ;
 char* FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static char *FUNC_3(Tree VAR_1, char *VAR_2, char *VAR_3, int *VAR_4) {
 Term VAR_5 = VAR_1->op;

 if (VAR_5->kind == VAR_0) {
  FUNC_0(VAR_3, "\t\tkids[%d] = %s;\n", (*VAR_4)++, VAR_2);
  VAR_3 += FUNC_2(VAR_3);
 } else if (VAR_5->arity > 0) {
  VAR_3 = FUNC_3(VAR_1->left, FUNC_1("LEFT_CHILD(%s)", VAR_2), VAR_3, VAR_4);
  if (VAR_5->arity == 2)
   VAR_3 = FUNC_3(VAR_1->right, FUNC_1("RIGHT_CHILD(%s)", VAR_2), VAR_3, VAR_4);
 }
 return VAR_3;
}
