
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tree {int level; scalar_t__ text; TYPE_2__* left; TYPE_1__* right; int num; } ;
struct TYPE_4__ {int level; scalar_t__ extra; scalar_t__ text; scalar_t__ right; scalar_t__ left; int num; } ;
struct TYPE_3__ {int level; scalar_t__ extra; scalar_t__ text; scalar_t__ right; scalar_t__ left; int num; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int *,int) ;
 int VAR_0 ;

void FUNC_4 (struct tree* VAR_1) {
  FUNC_0 (!VAR_1->left);
  FUNC_0 (!VAR_1->right);
  FUNC_0 (VAR_1->level < 128);

  VAR_1->left = FUNC_2 (sizeof (struct tree));
  VAR_1->left->num = VAR_1->num;
  VAR_1->left->level = VAR_1->level + 1;
  VAR_1->left->left = 0;
  VAR_1->left->right = 0;
  VAR_1->left->extra = 0;
  VAR_1->left->text = VAR_1->text;
  VAR_1->left->extra = FUNC_1 (127 - VAR_1->level);
  VAR_1->right = FUNC_2 (sizeof (struct tree));
  VAR_1->right->num = VAR_1->num;
  FUNC_3 (&VAR_1->right->num, 127 - VAR_1->level);

  VAR_1->right->level = VAR_1->level + 1;
  VAR_1->right->left = 0;
  VAR_1->right->right = 0;
  VAR_1->right->extra = 0;
  VAR_1->right->text = VAR_1->text;
  VAR_1->right->extra = VAR_1->left->extra;
  VAR_1->text = 0;
  VAR_0 += 2;
}
