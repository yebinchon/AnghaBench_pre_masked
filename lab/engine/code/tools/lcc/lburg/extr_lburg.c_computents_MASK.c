
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* Tree ;
struct TYPE_5__ {scalar_t__ kind; char* name; } ;
struct TYPE_4__ {struct TYPE_4__* left; struct TYPE_4__* right; TYPE_2__* op; } ;
typedef TYPE_2__* Nonterm ;


 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char*,char*,char*,char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static char *FUNC_2(Tree VAR_2, char *VAR_3) {
 if (VAR_2) {
  Nonterm VAR_4 = VAR_2->op;
  if (VAR_4->kind == VAR_0) {
   FUNC_0(VAR_3, "%s_%s_NT, ", VAR_1, VAR_4->name);
   VAR_3 += FUNC_1(VAR_3);
  } else
   VAR_3 = FUNC_2(VAR_2->right, FUNC_2(VAR_2->left, VAR_3));
 }
 return VAR_3;
}
