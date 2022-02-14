
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int symbol; struct TYPE_3__* left; struct TYPE_3__* right; } ;
typedef TYPE_1__ node_t ;
typedef int byte ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;

int FUNC_1 (node_t *VAR_1, int *VAR_2, byte *VAR_3) {
 while (VAR_1 && VAR_1->symbol == VAR_0) {
  if (FUNC_0(VAR_3)) {
   VAR_1 = VAR_1->right;
  } else {
   VAR_1 = VAR_1->left;
  }
 }
 if (!VAR_1) {
  return 0;

 }
 return (*VAR_2 = VAR_1->symbol);
}
