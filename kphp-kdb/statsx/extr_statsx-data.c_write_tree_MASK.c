
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* right; struct TYPE_3__* left; int y; int x; } ;
typedef TYPE_1__ tree_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

int FUNC_2 (tree_t* VAR_0) {
  if (VAR_0 == 0) {
    FUNC_0 (0);
    return 1;
  }
  int VAR_1 = 0;
  FUNC_0 (1); VAR_1++;
  FUNC_1 (VAR_0->x); VAR_1 += sizeof (int);
  FUNC_1 (VAR_0->y); VAR_1 += sizeof (int);
  VAR_1 += FUNC_2 (VAR_0->left);
  VAR_1 += FUNC_2 (VAR_0->right);
  return VAR_1;
}
